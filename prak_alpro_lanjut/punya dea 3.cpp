#include <iostream>
using namespace std;

void input(),output(),menu(),menu_cari(),cari_nim(),cari_nama(),cari_jurusan();

typedef struct {
	char nim[9];
	char nama[40];
	char jurusan[30];
} data;

int pos,i,banyak;
bool ketemu = false;
data mhs[100];
	char nim_cari[9];
	char nama_cari[40];
	char jurusan_cari[30];
int sentinel;
int main () {

}
	
void input() {	
	
	
	cout << "Masukkan jumlah data yang akan di input : "; cin >> banyak;
	sentinel = banyak-1;
	
	for (i=0; i<banyak; i++) {
		cout << "NO. " << i+1 << endl;
		cout << "NIM : " ; cin >> mhs[i].nim;
		cout << "Nama : "; cin >> mhs[i].nama;
		cout << "Jurusan : "; cin >> mhs[i].jurusan;
		cout << endl << endl;
	}
	menu();
}

void output() {
	for (i=0; i<banyak; i++) {
		cout << "NO. " << i+1 << endl;
		cout << "NIM : " ; cin >> mhs[i].nim;
		cout << "Nama : "; cin >> mhs[i].nama;
		cout << "Jurusan : "; cin >> mhs[i].jurusan;
		cout << endl << endl;
	}
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
	cout << "masukkan nim yang dicari : "; cin >> nim_cari;
	mhs[sentinel].nim = nim_cari;
	i=0;
	while (!ketemu) {
		if (mhs[i].nim == nim_cari) {
			pos=i;
			ketemu=true;}
		else {
			i=i+1; }
	}
				
	if (i == banyak-1) {
	cout << "========================================================================" << endl;
	cout << "||                   NIM yang anda cari tidak ditemukan!              ||" << endl;
	cout << "========================================================================" << endl;
	system("pause");
	menu(); }
	else {
	cout << "========================================================================" << endl;
	cout << "||                     NIM yang anda cari ditemukan!                  ||" << endl;
	cout << "========================================================================" << endl;
	    cout << "NO. " << pos+1 << endl;
		cout << "NIM : " ; cin >> mhs[pos].nim;
		cout << "Nama : "; cin >> mhs[pos].nama;
		cout << "Jurusan : "; cin >> mhs[pos].jurusan;
		cout << endl;
		cout << "Ditemukan pada array indeks ke-" << i;
	system("pause");
	menu(); }
}

void cari_nama() {
	cout << "masukkan nim yang dicari : "; cin >> nama_cari;
	mhs[sentinel].nama = nama_cari;
	i=0;
	while (!ketemu) {
		if (mhs[i].nama == nama_cari) {
			pos=i;
			ketemu=true;}
		else {
			i=i+1; }
	}
				
	if (i == banyak-1) {
	cout << "========================================================================" << endl;
	cout << "||                  Nama yang anda cari tidak ditemukan!              ||" << endl;
	cout << "========================================================================" << endl;
	system("pause");
	menu(); }
	else {
	cout << "========================================================================" << endl;
	cout << "||                    Nama yang anda cari ditemukan!                  ||" << endl;
	cout << "========================================================================" << endl;
	    cout << "NO. " << pos+1 << endl;
		cout << "NIM : " ; cin >> mhs[pos].nim;
		cout << "Nama : "; cin >> mhs[pos].nama;
		cout << "Jurusan : "; cin >> mhs[pos].jurusan;
		cout << endl;
		cout << "Ditemukan pada array indeks ke-" << i;
	system("pause");
	menu(); }
}

void cari_jurusan() {
	cout << "masukkan nim yang dicari : "; cin >> jurusan_cari;
	mhs[99].jurusan = jurusan_cari;
	i=0;
	while (!ketemu) {
		if (mhs[i].jurusan == jurusan_cari) {
			pos=i;
			ketemu=true;}
		else {
			i=i+1; }
	}
				
	if (i == banyak-1) {
	cout << "========================================================================" << endl;
	cout << "||                  Jurusan yang anda cari tidak ditemukan!              ||" << endl;
	cout << "========================================================================" << endl;
	system("pause");
	menu(); }
	else {
	cout << "========================================================================" << endl;
	cout << "||                 Jurusan yang anda cari ditemukan!                  ||" << endl;
	cout << "========================================================================" << endl;
	    cout << "NO. " << pos+1 << endl;
		cout << "NIM : " ; cin >> mhs[pos].nim;
		cout << "Nama : "; cin >> mhs[pos].nama;
		cout << "Jurusan : "; cin >> mhs[pos].jurusan;
		cout << endl;
		cout << "Ditemukan pada array indeks ke-" << i;
	system("pause");
	menu(); }
}

