#include <iostream>
#include <iomanip>
#include <fstream>
//#include <iomanip>
using namespace std;

void beranda(),input(); //tampil(),search(),sorting(),transaksi();

typedef struct {
	//int no_transaksi;
	string nama;
	string tipe_room;
	int durasi;
	//string tanggal;
	//string jam_mulai;
	int total_pembayaran;
	} data_pesan;
	
data_pesan pesan[100];

int pilih;

string replaceSpasi(string str);
string replaceUnderscore(string str);

int main() {
	beranda(); 
	return 0;}

void beranda() {
	system("cls");
	cout << "========================================================================" << endl;
	cout << "||                            Karoke Galaxy                           ||" << endl;
	cout << "========================================================================" << endl;
	cout << "|| Menu:                                                              ||" << endl;
	cout << "|| 1. Input data                                                      ||" << endl;
	cout << "|| 2. Tampilkan data                                                  ||" << endl;
	cout << "|| 3. Searching data                                                  ||" << endl;
	cout << "|| 4. Sorting data                                                    ||" << endl;
	cout << "|| 5. Transaksi                                                       ||" << endl;
	cout << "|| 6. Keluar                                                          ||" << endl;
	cout << "========================================================================" << endl;
	cout << "Silakan pilih menu : "; cin >> pilih;
	
	while (!(pilih >=1 && pilih <= 6)) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Silakan pilih menu : "; cin >> pilih; }
	
	switch (pilih) {
		case 1 : input(); break;
		//case 2 : tampil(); break;
		//case 3 : search(); break;
		//case 4 : sorting(); break;
		//case 5 : transaksi(); break;
		default : exit(0); }
}

///////
string replaceSpasi(string str){
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '_';
        }
    }
    return str;
}
string replaceUnderscore(string str){
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            str[i] = ' ';
        }
    }
    return str;
}
///////

void input() {
	string namafile;
	int banyakdata = 0;
	
	cout << "========================" << endl;
    cout << "INPUT DATA KAROKE" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Nama File : ";
    cin >> namafile;
    cout << "Banyaknya Data\t: ";
    cin >> banyakdata;

    for (int i = 0; i < banyakdata; i++)
    {
        //cout << "\t Nomor Transaksi\t: "; cin >> pesan[i].no_transaksi;
        cin.ignore();
        cout << "\t Nama\t\t: "; getline(cin, pesan[i].nama);
        cout << "\t Tipe Room\t\t: "; cin >> pesan[i].tipe_room;
        cout << "\t Durasi\t: "; cin >> pesan[i].durasi;
        //cin.ignore();
        //cout << "\t Tanggal\t: "; getline (cin,pesan[i].tanggal);
        //cout << "\t Jam Mulai\t: "; cin >> pesan[i].jam_mulai;
        cout << "\t Total Pembayaran\t: "; cin >> pesan[i].total_pembayaran;
        cout << "\n";
    }
    
    for (int i = 0; i < banyakdata; i++)
        pesan[i].nama = replaceSpasi(pesan[i].nama);

    ofstream ofs(namafile, ios::app);
    if (ofs.is_open())
    {
        for (int i = 0; i < banyakdata; i++)
        {
            ofs //<< pesan[i].no_transaksi << " "
                << pesan[i].nama << " "
                << pesan[i].tipe_room << " "
                << pesan[i].durasi << " "
                //<< pesan[i].tanggal << " "
                //<< pesan[i].jam_mulai << " "
                << pesan[i].total_pembayaran << " "
                << endl;
        }
        ofs.close();
    }
}

