#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
void menu(), input(), tampil(), ubah();

typedef struct {
	string nb;
	int jb;
	int hb;
	int tb;
} data;

int banyak, banyak2, batas, i;
data barang[100];

char ulang='y', jawab;


int main() {
    menu();

	/*cout<<"NAMA BARANG 1\t\t: "; cin.getline(nama1,sizeof(nama1));
	cout<<"JUMLAH BARANG 1\t\t: "; cin>>(jb1);
	cout<<"HARGA @ BARANG (Rp) 1\t: "; cin>>(hb1);
	cin.ignore();

	cout<<"NAMA BARANG 2\t\t: "; cin.getline(nama2,sizeof(nama2));
	cout<<"JUMLAH BARANG 2\t\t: "; cin>>(jb2);
	cout<<"HARGA @ BARANG (Rp) 2\t: "; cin>>(hb2);
	diskon2=(hb2*jb2)*0.10;
	tb2=(hb2*jb2)-diskon2;
	cout<<"TOTAL HARGA DISKON 10% \t:" <<tb2<<"\n\n";
	cin.ignore();

	cout<<"NAMA BARANG 3\t\t: "; cin.getline(nama3,sizeof(nama3));
	cout<<"JUMLAH BARANG 3\t\t: "; cin>>(jb3);
	cout<<"HARGA @ BARANG (Rp) 3\t: "; cin>>(hb3);
	diskon3=(hb3*jb3)*0.05;
	tb3=(hb3*jb3)-diskon3;
	cout<<"TOTAL HARGA DISKON 5% \t:" <<tb3<<"\n\n";
	cin.ignore();

	cout<<"PEMBELIAN:"<<endl ;
	cout<<string(90,'-')<<endl;

	cout<<"NO"<<setw(3)<<"|"<<setw(20)<<"NAMA BARANG"<<setw(10)<<"|"<<setw(10)<<"JUMLAH"<<setw(5)<<"|"<<setw(10)<<"@HARGA"<<setw(5)<<"|"<<setw(10)<<"DISKON"<<setw(3)<<"|"<<setw(10)<<"TOTAL"<<setw(3)<<endl;

	cout<<string(90,'-')<<endl;
	cout<<"01."<<setw(2)<<"|"<<setw(15)<<nama1<<setw(15)<<"|"<<setw(8)<<jb1<<setw(7)<<"|"<<setw(8)<<hb1<<setw(7)<<"|"<<setw(8)<<"15%"<<setw(5)<<"|"<<setw(10)<<tb1<<endl;
	cout<<"02."<<setw(2)<<"|"<<setw(15)<<nama2<<setw(15)<<"|"<<setw(8)<<jb2<<setw(7)<<"|"<<setw(8)<<hb2<<setw(7)<<"|"<<setw(8)<<"10%"<<setw(5)<<"|"<<setw(10)<<tb2<<endl;
	cout<<"03."<<setw(2)<<"|"<<setw(15)<<nama3<<setw(15)<<"|"<<setw(8)<<jb3<<setw(7)<<"|"<<setw(8)<<hb3<<setw(7)<<"|"<<setw(8)<<"5%"<<setw(5)<<"|"<<setw(10)<<tb3<<endl;
	cout<<string(90,'-')<<endl;

	totalbayar=tb1+tb2+tb3;
	cout<<"TOTAL PEMBAYARAN (Rp):"<<setw(65)<<totalbayar<<endl;
	cout<<string(90,'-')<<endl;
	cout<<"Kasir"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<nama<<endl;
	cout<<nim<<endl;

	return 0;
}*/
}

void menu() {
    while (toupper(ulang)=='Y'){
    system("CLS");
		cout << "=================================================" << endl;
        cout << "||                 MARKET UPN                  ||" << endl;
        cout << "=================================================" << endl;
        cout << "|| 1. Input data penjualan                     ||" << endl;
        cout << "|| 2. Tampilkan data                           ||" << endl;
        cout << "|| 3. Ubah data penjualan                      ||" << endl;
        cout << "|| 4. exit                                     ||" << endl;
        cout << "=================================================" << endl;

        cout << "Pilih menu (1/2/3): ";
        cin >> jawab;

			if (jawab == '1') {
				input();
			}
			else if (jawab == '2') {
				tampil();
			}
			else if (jawab == '3') {
				ubah();
			}
			else if (jawab == '4') {
				cout << endl;
				cout << "=================================================" << endl;
				cout << "|| Terima Kasih, telah menggunakan program ini ||" << endl;
				cout << "=================================================" << endl << endl;
				exit(0);
			}
			else {
				cout << "=================================================" << endl;
				cout << "||     Menu yang anda pilih tidak tersedia!    ||" << endl;
				cout << "||             Silakan pilih lagi!             ||" << endl;
				cout << "=================================================" << endl;
				system("CLS");
                menu();
            }
            cout << endl;
            cout << "\nKembali ke Menu (y/n) ? : ";
            cin >> ulang;
    }
}

void input(){
    batas += banyak;
    system("cls");
    cout<<"   Masukkan jumlah data yang akan di input : "; cin >> banyak;
	for (i=0; i<banyak; i++) {
        cin.ignore();
        cout << " Nama Barang\t: ";
        getline(cin, barang[i].nb);
        cout << " Jumlah Barang\t: ";
        cin >> barang[i].jb;
        cout << " Harga Satuan\t: ";
        cin >> barang[i].hb;

        barang[i].tb= barang[i].jb* barang[i].hb;
        cout << endl;
        banyak2++;
	}
	string nama = "penjualan.txt";
	ofstream f_data(nama, ios::app);
    if (f_data.is_open()) {
    for (i = 0; i < banyak; i++) {
        f_data << barang[i].nb<< " ";
        f_data << barang[i].jb<< " ";
        f_data << barang[i].hb<< " ";
        f_data << barang[i].tb<< endl;
    }
    f_data.close();
    cout << " Data berhasil disimpan pada file 'penjualan.txt'" << endl;
	}
    else {
		cout << "Data tidak berhasil disimpan" << endl;
	}
}

void tampil(){
    system("cls");
    string nama = "penjualan.txt";
    ifstream ifs(nama);
    if (ifs.is_open()) {
		while (!ifs.eof()) {
			ifs >> barang[i].nb;
			ifs >> barang[i].jb;
			ifs >> barang[i].hb;
			ifs >> barang[i].tb;
			i++;
		}
		ifs.close();
	}
    else {
		cout << "==============================================" << endl;
		cout << "||           File tidak ditemukan           ||" << endl;
		cout << "==============================================" << endl;
	}
	banyak += i-1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Jumlah"
         << "|" << setfill(' ') << setw(19) << " Harga"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Harga"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i <banyak ; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << barang[i].nb << "| " << setfill(' ') << setw(22) << barang[i].jb;
        cout << "| " << setfill(' ') << setw(18) << barang[i].hb << "| " << setfill(' ') << setw(18) << barang[i].tb;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}

void ubah(){
    system("cls");
}
