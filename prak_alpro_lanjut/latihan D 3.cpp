#include <iostream>
using namespace std;

void input(),output(),menu(),menu_cari(),cari_nim(),cari_nama(),cari_jurusan();

typedef struct {

	string nim;
	string nama;
	string jurusan;
} data;
data mhs[100];
int pos,i=0,banyak;

	string nim_cari;
	string nama_cari;
	string jurusan_cari;
int pilih;


int main () {
menu();
}
	
void input() {	
	
	
	cout << "Masukkan jumlah data yang akan di input : "; cin >> banyak;
	
	for (i=0; i<banyak; i++) {
		cin.ignore();
		cout << "NO. " << i+1 << endl;
		cout << "NIM : " ; getline(cin, mhs[i].nim);
		cout << "Nama : "; getline (cin, mhs[i].nama);
		cout << "Jurusan : "; getline (cin, mhs[i].jurusan);
		cout << endl << endl;
	}
	menu();
}

void output() {
	for (i=0; i<banyak; i++) {
		cout << "NO. " << i+1 << endl;
		cout << "NIM : " << mhs[i].nim << endl;
		cout << "Nama : " << mhs[i].nama << endl;
		cout << "Jurusan : " << mhs[i].jurusan << endl;
		cout << endl << endl;
	}
	system("pause");
	menu();
}

void menu() {
	system("cls");
	cout << "========================================================================" << endl;
	cout << "||                          Program pencarian                         ||" << endl;
	cout << "========================================================================" << endl;
	cout << "|| Menu:                                                              ||" << endl;
	cout << "|| 1. input                                                        ||" << endl;
	cout << "|| 2. output                                                           ||" << endl;
	cout << "|| 3. cari                                                          ||" << endl;
	cout << "========================================================================" << endl;
	cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih;
	
	while (!(pilih >=1 && pilih <= 3)) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih; }
	
	if (pilih == 1) {
		input();}
					
	else if (pilih == 2) {	
		output();}
	else {	
		menu_cari();}
}

void menu_cari() {
	system("cls");
	cout << "========================================================================" << endl;
	cout << "||                          Program pencarian                         ||" << endl;
	cout << "========================================================================" << endl;
	cout << "|| Menu:                                                              ||" << endl;
	cout << "|| 1. cari nim                                                        ||" << endl;
	cout << "|| 2. cari nama                                                         ||" << endl;
	cout << "|| 3. cari jurusan                                                     ||" << endl;
	cout << "========================================================================" << endl;
	cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih;
	
	while (!(pilih >=1 && pilih <= 3)) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih; }
	
	if (pilih == 1) {
		cari_nim();}
					
	else if (pilih == 2) {	
		cari_nama();}
	else {	
		cari_jurusan();}
}

void cari_nim() {
	cin.ignore();
	cout << "masukkan nim yang dicari : "; getline (cin, nim_cari);
	mhs[99].nim = nim_cari;
	i=0;

	int indeksDitemukan[banyak];
    int n = 0;
	while (i<banyak) {
		if (mhs[i].nim == nim_cari) {
			indeksDitemukan[n] = i;
            n++;
            i++;}
		else {
			i=i+1; }
	}
				
	if (i == 99) {
	cout << "========================================================================" << endl;
	cout << "||                   NIM yang anda cari tidak ditemukan!              ||" << endl;
	cout << "========================================================================" << endl;
	system("pause");
	menu(); }
	else {
	cout << "========================================================================" << endl;
	cout << "||                     NIM yang anda cari ditemukan!                  ||" << endl;
	cout << "========================================================================" << endl;
		
        for (int k = 0; k < n; k++) {
        cout << "NIM : " << mhs[indeksDitemukan[k]].nim << endl;
		cout << "Nama : " << mhs[indeksDitemukan[k]].nama << endl;
		cout << "Jurusan : " << mhs[indeksDitemukan[k]].jurusan << endl;
		cout << endl ;
		cout << "Ditemukan pada array indeks ke-" << k << endl;
        }
        cout << endl;
	system("pause");
	menu(); }
}

void cari_nama() {
	cin.ignore();
	cout << "masukkan nama yang dicari : "; getline (cin, nama_cari);
	mhs[99].nama = nama_cari;
	i=0;
	
	int indeksDitemukan[banyak];
    int n = 0;
	while (i<banyak) {
		if (mhs[i].nama == nama_cari) {
			indeksDitemukan[n] = i;
            n++;
            i++;}
		else {
			i=i+1; }
	}
				
	if (i == 99) {
	cout << "========================================================================" << endl;
	cout << "||                   Nama yang anda cari tidak ditemukan!              ||" << endl;
	cout << "========================================================================" << endl;
	system("pause");
	menu(); }
	else {
	cout << "========================================================================" << endl;
	cout << "||                     Nama yang anda cari ditemukan!                  ||" << endl;
	cout << "========================================================================" << endl;
		
        for (int k = 0; k < n; k++) {
        cout << "NIM : " << mhs[indeksDitemukan[k]].nim << endl;
		cout << "Nama : " << mhs[indeksDitemukan[k]].nama << endl;
		cout << "Jurusan : " << mhs[indeksDitemukan[k]].jurusan << endl;
		cout << endl ;
		cout << "Ditemukan pada array indeks ke-" << k << endl;
        }
        cout << endl;
	system("pause");
	menu(); }
}
	

void cari_jurusan() {
	cin.ignore();
	cout << "masukkan nim yang dicari : "; getline (cin, jurusan_cari);
	mhs[99].jurusan = jurusan_cari;
	i=0;
	int indeksDitemukan[banyak];
    int n = 0;
	while (i<banyak) {
		if (mhs[i].jurusan == jurusan_cari) {
			indeksDitemukan[n] = i;
            n++;
            i++;}
		else {
			i=i+1; }
	}
				
	if (i == 99) {
	cout << "========================================================================" << endl;
	cout << "||                   Jurusan yang anda cari tidak ditemukan!              ||" << endl;
	cout << "========================================================================" << endl;
	system("pause");
	menu(); }
	else {
	cout << "========================================================================" << endl;
	cout << "||                     Jurusan yang anda cari ditemukan!                  ||" << endl;
	cout << "========================================================================" << endl;
		
        for (int k = 0; k < n; k++) {
        cout << "NIM : " << mhs[indeksDitemukan[k]].nim << endl;
		cout << "Nama : " << mhs[indeksDitemukan[k]].nama << endl;
		cout << "Jurusan : " << mhs[indeksDitemukan[k]].jurusan << endl;
		cout << endl ;
		cout << "Ditemukan pada array indeks ke-" << k << endl;
        }
        cout << endl;
	system("pause");
	menu(); }
}

