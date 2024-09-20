#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
void menu(),inputd(), tabel(), input(), tampil(), sorting(), hapus();

typedef struct{
    int id;
    string nb;
    string kategori;
    int harga;
    int tb;
    string ns;
}data;

int banyak, batas, i, jawab;
data barang[1000];

int main (){
    menu();
}

string replacespasi(string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			str.replace(i, 1, 1, '_');
		}
	}
	return str;
}

string replaceunderscore(string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '_')
		{
			str.replace(i, 1, 1, ' ');
		}
	}
	return str;
}

void menu(){
    char ulang='y';
    while (toupper(ulang)=='Y'){
    system("CLS");
		cout << "=================================================" << endl;
        cout << "               -+-  DATA GUDANG  -+-              " << endl;
        cout << "=================================================" << endl;
        cout << " 1. Input Data                                   " << endl;
        cout << " 2. Urutkan Data                                 " << endl;
        cout << " 3. Tampilkan Data                               " << endl;
        cout << " 4. exit                                         " << endl;
        cout << "=================================================" << endl;
        cout << "Pilih menu (1/2/3/4): ";
        cin >> jawab;
        cout << "=================================================" << endl;
			switch (jawab) {
				case 1 : inputd(); break;
                case 2 : sorting();break;
				case 3 : tampil();break;
                case 4 :
                    cout << "    Program selesai..  " << endl;
                    //cout << "=================================================" << endl << endl;
                    exit(0); break;
                default:
                cout << "                     - WARNING! - "<<endl;
                //cout << "                 ===============" << endl;
				cout << "       Menu yang anda pilih tidak tersedia..      " << endl;
				cout << "                Silakan pilih lagi!               " << endl;
				cout << endl<< endl;
				system("pause"); menu(); break;
            }
            cout << endl;
            cout << "\nKembali ke Menu Utama (y/n) ? : ";
            cin >> ulang;
    }
}

void inputd(){
    int p;
	system("cls");
	cout << "=================================================" << endl;
    cout << "            -+-  Menu Input Data  -+-            " << endl;
    cout << "=================================================" << endl;
    cout << " 1. Tambahkan Data Baru                          " << endl;
    cout << " 2. Hapus Data                                   " << endl;
    cout << " 3. Kembali                                      " << endl;
    cout << "=================================================" << endl;
    cout << "Pilih menu (1/2/3): ";
    cin >> p;
	switch (p){
		case 1 :
			input();
			break;
		case 2 :
			hapus();
			break;
		case 3 :
		    menu();
			break;
		default  :
			cout << "                     - WARNING! - "<<endl;
            //cout << "                 ===============" << endl;
			cout << "       Menu yang anda pilih tidak tersedia..      " << endl;
			cout << "                Silakan pilih lagi!               " << endl;
			cout << endl<< endl;
			system("pause"); menu(); break;
	}
}

void input(){
    system ("cls");
	cout << "=================================================" << endl;
    cout << "           -+-  Input Data Barang -+-            " << endl;
    cout << "=================================================" << endl;
    int banyakData;
    cout << "  Banyaknya Data\t: ";
    cin >> banyakData;
    cout << "=================================================" << endl;


    for (int i = 0; i < banyakData; i++)
    {
        cout << endl;
		cout << "\t - DATA BARANG KE-" << i+1 << " - " << endl;
		cout << "  ID Barang\t: ";
        cin >> barang[i].id;
        cin.ignore();
        cout << "  Nama Barang\t: ";
        getline(cin, barang[i].nb);
        cout << "  Kategori\t: ";
        getline(cin, barang[i].kategori);
        cout << "  Harga\t\t: ";
        cin >> barang[i].harga;
        cout << "  Total\t\t: ";
        cin >> barang[i].tb;
        cin.ignore();
        cout << "  Nama Supplier : ";
        getline(cin, barang[i].ns);
        cout << endl;
    }

    for (int i = 0; i < banyakData; i++)
    {
		barang[i].nb = replacespasi(barang[i].nb);
		barang[i].kategori = replacespasi(barang[i].kategori);
		barang[i].ns = replacespasi(barang[i].ns);
	}

	ofstream ofs("datagudang.txt", ios::app);
	if (ofs.is_open())
	{
		for (int i = 0; i < banyakData; i++)
		{
			ofs << barang[i].id << " "
                << barang[i].nb << " "
                << barang[i].kategori << " "
                << barang[i].harga << " "
                << barang[i].tb << " "
                << barang[i].ns << " "
                << endl;
        }
        ofs.close();
	}
}


void hapus(){
    system("cls");
    int idb;
    cout << " " <<setfill(' ') << setw(23) << "=" <<setfill('=') << setw(50) << "=" << setfill(' ') << setw(20) << " "<<endl;
    cout << " " <<setfill(' ') << setw(62) << "-+- MENU HAPUS DATA -+-" <<endl;
    cout << " " <<setfill(' ') << setw(23) << "=" <<setfill('=') << setw(50) << "=" << setfill(' ') << setw(20) << " "<<endl;
	tabel();
	cout << " Masukkan Kode Barang yang ingin dihapus: ";
    cin >> idb;

	ifstream ifs("datagudang.txt");
    if (!ifs)
    {
        cout << " File tidak ditemukan" << endl;
        return;
    }

    ofstream ofs("temp.txt");
    if (!ofs)
    {
        cout << " Gagal membuat file temporary" << endl;
        return;
    }

    data barang;
    bool found = false;

    while (ifs >> barang.id>> barang.nb>> barang.kategori >> barang.harga>> barang.tb>> barang.ns)
    {
        if (barang.id != idb)
        {
            ofs << barang.id << " " << barang.nb<< " " << barang.kategori << " " << barang.harga<< " " << barang.tb<< " " << barang.ns<< endl;
        }
        else
        {
            found = true;
        }
    }

    ifs.close();
    ofs.close();

    if (found)
    {
        remove("datagudang.txt");
        rename("temp.txt", "datagudang.txt");
        cout << "Data dengan ID Barang " << idb<< " telah dihapus." ;
    }
    else
    {
        remove("temp.txt");
        cout << "Data dengan ID Barang " << idb<< " tidak ditemukan." ;
    }
}


void tabel(){

	int i = 0;
    int jumlahData = 0;

    ifstream ifs("datagudang.txt");
    while (!ifs.eof())
    {
		ifs >> barang[i].id;
        ifs >> barang[i].nb;
        ifs >> barang[i].kategori;
        ifs >> barang[i].harga;
        ifs >> barang[i].tb;
        ifs >> barang[i].ns;

        i++;
	}
	ifs.close();

    jumlahData += i - 1;

    cout << '+' << setw(12) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(23) << setfill('-') << '+'<< endl;
    cout << '|' << setw(10) << setfill(' ') << left << "Kode Barang";
    cout << '|' << setw(22) << setfill(' ') << left << "Nama Barang";
    cout << '|' << setw(22) << setfill(' ') << left << "Kategori";
    cout << '|' << setw(15) << setfill(' ') << left << "Harga Satuan";
    cout << '|' << setw(15) << setfill(' ') << left << "Stok Barang";
    cout << '|' << setw(22) << setfill(' ') << left << "Supplier";
    cout << '|' << endl;
    cout << right << '+' << setw(12) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(23) << setfill('-') << '+'<< endl;

    for (int i = 0; i < jumlahData; i++)
    {
		cout << '|' << setw(11) << setfill(' ') << left << barang[i].id;
        cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].nb);
        cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].kategori);
        cout << '|' << setw(15) << setfill(' ') << left << barang[i].harga;
        cout << '|' << setw(15) << setfill(' ') << left << barang[i].tb;
        cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].ns);
        cout << '|' << endl;
    }

    cout << right << '+' << setw(12) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(23) << setfill('-') << '+'<< endl;
}

void tampil(){
    system("cls");
	int i = 0;
    int jumlahData = 0;
    cout << " " <<setfill(' ') << setw(23) << "=" <<setfill('=') << setw(50) << "=" << setfill(' ') << setw(20) << " "<<endl;
    cout << " " <<setfill(' ') << setw(62) << "-+- OUTPUT DATA BARANG -+-" <<endl;
    cout << " " <<setfill(' ') << setw(23) << "=" <<setfill('=') << setw(50) << "=" << setfill(' ') << setw(20) << " "<<endl;

    ifstream ifs("datagudang.txt");
    while (!ifs.eof())
    {
		ifs >> barang[i].id;
        ifs >> barang[i].nb;
        ifs >> barang[i].kategori;
        ifs >> barang[i].harga;
        ifs >> barang[i].tb;
        ifs >> barang[i].ns;

        i++;
	}
	ifs.close();

    jumlahData += i - 1;

    cout << '+' << setw(14) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(17) << setfill('-') << '+'<< endl;
    cout << '|' << setw(13) << setfill(' ') << left << "Kode Barang";
    cout << '|' << setw(22) << setfill(' ') << left << "Nama Barang";
    cout << '|' << setw(22) << setfill(' ') << left << "Kategori";
    cout << '|' << setw(15) << setfill(' ') << left << "Harga Satuan";
    cout << '|' << setw(15) << setfill(' ') << left << "Stok Barang";
    cout << '|' << setw(16) << setfill(' ') << left << "Supplier";
    cout << '|' << endl;
    cout << right << '+' << setw(14) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(17) << setfill('-') << '+'<< endl;

    for (int i = 0; i < jumlahData; i++)
    {
		cout << '|' << setw(13) << setfill(' ') << left << barang[i].id;
        cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].nb);
        cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].kategori);
        cout << '|' << setw(15) << setfill(' ') << left << barang[i].harga;
        cout << '|' << setw(15) << setfill(' ') << left << barang[i].tb;
        cout << '|' << setw(16) << setfill(' ') << left << replaceunderscore(barang[i].ns);
        cout << '|' << endl;
    }

    cout << right << '+' << setw(14) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(17) << setfill('-') << '+';
}

void sorting(){
    int i = 0, banyakData = 0;
		system("cls");
		ifstream ifs("datagudang.txt");
        if (ifs.is_open())
        {
			ifstream ifs("datagudang.txt");
            while (!ifs.eof())
            {
                ifs >> barang[i].id;
				ifs >> barang[i].nb;
				ifs >> barang[i].kategori;
				ifs >> barang[i].harga;
				ifs >> barang[i].tb;
				ifs >> barang[i].ns;

				i++;
            }
            ifs.close();
            banyakData += i - 1;

                for (int i = 0; i < banyakData - 1; i++)
                {
                    for (int j = 0; j < banyakData - i - 1; j++)
                    {
                        if (barang[j].tb> barang[j + 1].tb)
                        {
                            data temp = barang[j];
                            barang[j] = barang[j + 1];
							barang[j + 1] = temp;
                        }
                    }
                }
            cout << " " <<setfill(' ') << setw(23) << "=" <<setfill('=') << setw(50) << "=" << setfill(' ') << setw(20) << " "<<endl;
            cout << " " <<setfill(' ') << setw(55) << "-+- NOTE -+-" <<endl;
            cout << " " <<setfill(' ') << setw(23) << "=" <<setfill('=') << setw(50) << "=" << setfill(' ') << setw(20) << " "<<endl;
            cout << " " <<setfill(' ') << setw(70);
            cout << "Data telah diurutkan dari stok barang paling"<< endl;
            cout << " " <<setfill(' ') << setw(65);
            cout << "   sedikit ke stok barang paling banyak" << endl<<endl;
            cout << '+' << setw(12) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(23) << setfill('-') << '+'<< endl;
			cout << '|' << setw(10) << setfill(' ') << left << "Kode Barang";
			cout << '|' << setw(22) << setfill(' ') << left << "Nama Barang";
			cout << '|' << setw(22) << setfill(' ') << left << "Kategori";
			cout << '|' << setw(15) << setfill(' ') << left << "Harga Satuan";
			cout << '|' << setw(15) << setfill(' ') << left << "Stok Barang";
			cout << '|' << setw(22) << setfill(' ') << left << "Supplier";
			cout << '|' << endl;
			cout << right << '+' << setw(12) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(23) << setfill('-') << '+'<< endl;

            for (int i = 0; i < banyakData; i++)
			{
				cout << '|' << setw(11) << setfill(' ') << left << barang[i].id ;
				cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].nb);
				cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].kategori);
				cout << '|' << setw(15) << setfill(' ') << left << barang[i].harga;
				cout << '|' << setw(15) << setfill(' ') << left << barang[i].tb;
				cout << '|' << setw(22) << setfill(' ') << left << replaceunderscore(barang[i].ns);
				cout << '|' << endl;
			}

			cout << right << '+' << setw(12) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(23) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(16) << setfill('-') << '+' << setw(23) << setfill('-') << '+';
		}
		else
		{
            cout << "File tidak ditemukan" << endl;
        }

}

