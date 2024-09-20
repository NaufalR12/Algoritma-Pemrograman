#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void write(),list();
string gantiSpasi(string str), gantiUnderscore(string str);

typedef struct {
	string nama;
	int jumlah;
	} dataPesanan;
	
typedef struct  {
	string nama, alamat;
	int banyakItem;
	dataPesanan pesanan[100];
} dataPelanggan;

dataPelanggan pelanggan[100];
dataPelanggan temp[100];
int main () {
	bool lagi = true;
	while (lagi) {
		char menu;
		cout << "--- Welcome to HIF Warehouse ---\n";
		cout << "1. Write Order\n";
		cout << "2. List Order\n";
		cout << "3. Exit\n";
		cout << "Menu : "; cin >> menu;
		if (menu == '1') {
			write();
		} else if (menu == '2') {
			list();
		} else {
			cout << "========================================================================" << endl;
			cout << "||            TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI             ||" << endl;
			cout << "========================================================================" << endl; 	
			lagi = false;
		}	
	}
	return 0;
}


string gantiSpasi(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '_';
        }
    }
    return str;
}

string gantiUnderscore(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            str[i] = ' ';
        }
    }
    return str;
}



void write () {
	bool lagi = true;
	while (lagi) {
		int banyakCus;
		char menu;
		int banyakBarang;
		cout << "--- Input Order ---\n";
		cout << "How many customer ? : "; cin >> banyakCus;
		
		for (int i=0; i<banyakCus; i++) {
			cin.ignore();
			cout << "Name : "; getline (cin, pelanggan[i].nama);
			cout << "Address : "; getline(cin, pelanggan[i].alamat);
			cout << "How many item ? : "; cin >> pelanggan[i].banyakItem;
			banyakBarang = pelanggan[i].banyakItem;
			
			for (int j=0; j<banyakBarang; j++ ) {
				cin.ignore();
				cout << "\tItem Name : "; getline(cin, pelanggan[i].pesanan[j].nama);
				cout << "\tAmount : "; cin >> pelanggan[i].pesanan[j].jumlah;
			}
		}
	
		for (int i=0; i<banyakCus; i++) {
			pelanggan[i].nama = gantiSpasi(pelanggan[i].nama);
			pelanggan[i].alamat = gantiSpasi(pelanggan[i].alamat);
			for (int j=0; j<banyakBarang; j++) {
				pelanggan[i].pesanan[j].nama = gantiSpasi(pelanggan[i].pesanan[j].nama);
			}
		}
		
		
		ofstream ofs("list_order.txt", ios::app);
		if (ofs.is_open())
		{
			for (int i=0; i<banyakCus; i++) {
				ofs << pelanggan[i].nama << " "
					<< pelanggan[i].alamat << " " 
					<< pelanggan[i].banyakItem << " ";
				banyakBarang = pelanggan[i].banyakItem;
				for (int j=0; j<banyakBarang; j++) {
					ofs << pelanggan[i].pesanan[j].nama << " "
						<< pelanggan[i].pesanan[j].jumlah << " ";
				}
			ofs << endl;
			}
			
		cout << "Data berhasil disimpan!\n";
		ofs.close();
		} else {
			cout << "Data tidak berhasil disimpan!\n";
		}
		cout << "Back to menu (y/n) : "; cin >> menu;
		if (menu == 'y' || menu == 'Y') {
			lagi = false;
		} else if (menu == 'n' || menu =='N'){
			lagi = true;
		} else {
			cout << "Menu yang anda pilih tidak tersedia!\n";
		}
	}
}

void list () {
	bool lagi = true;
	while (lagi) {
	char menu;
	int banyakBarang,totalpelanggan,i;
	ifstream ifs("list_order.txt");
	if (ifs.is_open()) {
		while (!ifs.eof()) {
			ifs >> pelanggan[i].nama;
			ifs	>> pelanggan[i].alamat;
			ifs >> pelanggan[i].banyakItem;
			
			for (int j=0; j< pelanggan[i].banyakItem; j++) {
					ifs >> pelanggan[i].pesanan[j].nama;
					ifs >> pelanggan[i].pesanan[j].jumlah;
			}
			i++;
		}
		ifs.close();
		totalpelanggan += i -1;
	} else {
		cout << "File tidak terbuka!\n" ;
	}
	
	cout << "---Original List---\n\n";
		for (int i=0; i<totalpelanggan; i++) {
			cout << "Name : " << pelanggan[i].nama << endl;
			cout << "Address : " << pelanggan[i].alamat << endl;
			cout << "Order : \n";
			
			banyakBarang = pelanggan[i].banyakItem;
			for (int j=0; j<banyakBarang; j++ ) {
				cout << "- " << pelanggan[i].pesanan[j].nama << "("<<pelanggan[i].pesanan[j].jumlah<<")\n";
			}
		}
	
	cout << "---List Menu---\n";
	cout << "1. sort by name (Ascending)\n";
	cout << "2. sort by name (descending)\n";
	cout << "Menu : "; cin >> menu;
	if (menu == '1') {
		for (int i = 0; i < totalpelanggan - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < totalpelanggan; j++)
            {
                if (gantiSpasi(pelanggan[i].nama) < gantiSpasi(pelanggan[min].nama))
                {
                    min = j;
                }
            }
            dataPelanggan temp = pelanggan[i];
            pelanggan[i] = pelanggan[min];
            pelanggan[min] = temp;
        }
    cout << "---List Sort by Name (Ascending)---\n\n";
	for (int i=0; i<totalpelanggan; i++) {
			cout << "Name : " << pelanggan[i].nama << endl;
			cout << "Address : " << pelanggan[i].alamat << endl;
			cout << "Order : \n";
			
			banyakBarang = pelanggan[i].banyakItem;
			for (int j=0; j<banyakBarang; j++ ) {
				cout << "- " << pelanggan[i].pesanan[j].nama << "("<<pelanggan[i].pesanan[j].jumlah<<")\n";
			}
		}
	} else if (menu == '2') {
		for (int i = 0; i < totalpelanggan - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < totalpelanggan; j++)
            {
                if (gantiSpasi(pelanggan[i].nama) > gantiSpasi(pelanggan[min].nama))
                {
                    min = j;
                }
            }
            dataPelanggan temp = pelanggan[i];
            pelanggan[i] = pelanggan[min];
            pelanggan[min] = temp;
        }
	cout << "---List Sort by Name (Ascending)---\n\n";
	for (int i=0; i<totalpelanggan; i++) {
			cout << "Name : " << pelanggan[i].nama << endl;
			cout << "Address : " << pelanggan[i].alamat << endl;
			cout << "Order : \n";
			
			banyakBarang = pelanggan[i].banyakItem;
			for (int j=0; j<banyakBarang; j++ ) {
				cout << "- " << pelanggan[i].pesanan[j].nama << "("<<pelanggan[i].pesanan[j].jumlah<<")\n";
			}
		}
	} else {
		cout << "Menu yang anda pilih tidak tersedia!\n";
	}
	cout << "Back to menu (y/n) : "; cin >> menu;
		if (menu == 'y' || menu == 'Y') {
			lagi = false;
		} else if (menu == 'n' || menu == 'N'){
			lagi = true;
		} else {
			cout << "Menu yang anda pilih tidak tersedia!\n" ;
		}
}
}



	
