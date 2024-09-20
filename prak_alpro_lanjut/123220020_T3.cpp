#include <iostream>
#include<iomanip>
using namespace std;

void input(),output(),menu(),menu_cari(),cari_nim(),cari_nama(),cari_jurusan();

typedef struct {
	int nim;
	string nama;
	string jurusan;
} data;

int pos,i,banyak,banyak2,jumlah;
data mhs[100];
	int nim_cari;
	string nama_cari;
	string jurusan_cari;
int pilih;
int sentinel;
int main(){
menu();
}

void input(){
	cout<<"   Masukkan jumlah data yang akan di input : "; cin >> banyak;
	//sentinel = banyak-1;
	for (i=0; i<banyak; i++) {
		cout<<"\n-DATA MAHASISWA KE " << i+1 <<" -"<<endl;
		cout<<"NIM     : "; cin>>mhs[banyak2].nim;
		cin.ignore();
		cout<<"Nama    : "; getline (cin, mhs[banyak2].nama);
		cout<<"Jurusan : "; getline (cin, mhs[banyak2].jurusan);
		banyak2++;
	}
	menu();
}

void output() {
    system("cls");
     if(banyak2==0){
        cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
        cout<<"|"<<setfill(' ')<<setw(12)<<" "<<"MAAF DATA BELUM DITAMBAHKAN / KOSONG!"<<setw(13)<<"|\n";
        cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
        cout<<"             Kembali Ke Menu Utama Silahkan Enter! \n";
        cout<<endl;
        system("pause");menu();
    } else{
        cout<<"+"<<setfill('=')<<setw(45)<<"="<<"+\n";
        cout<<"|"<<setfill(' ')<<setw(16)<<" "<<"DATA MAHASISWA"<<setw(17)<<"|\n";
        cout<<"+"<<setfill('=')<<setw(45)<<"="<<"+\n";
        for (i=0; i<banyak2; i++) {
            cout<<"\n-DATA MAHASISWA KE " << i+1 <<" -"<<endl;
            cout<<"NIM     : " << mhs[i].nim<<endl;
            cout<<"Nama    : " << mhs[i].nama<<endl;
            cout<<"Jurusan : " << mhs[i].jurusan<<endl;
        }
            cout<<endl;
            system("pause");
            menu();
    }
}

void menu() {
	system("cls");
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"||"<<setfill(' ')<<setw(21)<<" "<<"PROGRAM PENCARIAN"<<setw(23)<<"||\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"||"<<setfill(' ')<<setw(1)<<" "<<"Menu"<<setw(56)<<"||\n";
	cout<<"||"<<setfill(' ')<<setw(1)<<" "<<"1. input"<<setw(52)<<"||\n";
	cout<<"||"<<setfill(' ')<<setw(1)<<" "<<"2. output"<<setw(51)<<"||\n";
	cout<<"||"<<setfill(' ')<<setw(1)<<" "<<"3. cari"<<setw(53)<<"||\n";
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	cout<<"\nJUMLAH DATA NILAI MAHASISWA YANG TERDAFTAR : "<<banyak2<<endl<<endl;
	cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih;

	while (!(pilih >=1 && pilih <= 3)) {
			cin.clear();
			cin.sync();
			cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
            cout<<"|"<<setfill(' ')<<setw(2)<<" "<<"Menu yang anda pilih tidak tersedia. Silakan pilih lagi!"<<setw(4)<<"|\n";
            cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
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
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"||"<<setfill(' ')<<setw(22)<<" "<<"MENU PENCARIAN"<<setw(25)<<"||\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"||"<<setfill(' ')<<setw(1)<<" "<<"1. cari nim"<<setw(49)<<"||\n";
	cout<<"||"<<setfill(' ')<<setw(1)<<" "<<"2. cari nama"<<setw(48)<<"||\n";
	cout<<"||"<<setfill(' ')<<setw(1)<<" "<<"3. cari jurusan"<<setw(45)<<"||\n";
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih;

	while (!(pilih >=1 && pilih <= 3)) {
			cin.clear();
			cin.sync();
			cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
            cout<<"|"<<setfill(' ')<<setw(2)<<" "<<"Menu yang anda pilih tidak tersedia. Silakan pilih lagi!"<<setw(4)<<"|\n";
            cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
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
	cout << "masukkan nim yang dicari   : "; cin>>nim_cari;
	mhs[99].nim = nim_cari;
	i=0;
	bool ketemu = false;
	while (!ketemu) {
		if (mhs[i].nim == nim_cari) {
			pos=i;
			ketemu=true;}
		else {
			i=i+1; }
	}

	if (i == 99) {
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"|"<<setfill(' ')<<setw(11)<<" "<<"NIM yang anda cari tidak ditemukan!"<<setw(16)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	system("pause");
	menu(); }
	else {
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"|"<<setfill(' ')<<setw(14)<<" "<<"NIM yang anda cari ditemukan!"<<setw(19)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	    cout<<"NIM     : "<<mhs[pos].nim<<endl;
		cout<<"Nama    : "<<mhs[pos].nama<<endl;
		cout<<"Jurusan : "<<mhs[pos].jurusan<<endl;
		cout<<endl<<endl;
		cout<<"Ditemukan pada array indeks ke-"<<pos;
		cout<<endl;
	system("pause");
	menu(); }
}

void cari_nama() {
	cin.ignore();
	cout<<"masukkan nama yang dicari  : "; getline (cin, nama_cari);
	mhs[99].nama = nama_cari;
	i=0;
	bool ketemu = false;
	while (!ketemu) {
		if (mhs[i].nama == nama_cari) {
			pos=i;
			ketemu=true;}
		else {
			i=i+1; }
	}

	if (i == 99) {
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"|"<<setfill(' ')<<setw(11)<<" "<<"Nama yang anda cari tidak ditemukan!"<<setw(15)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	system("pause");
	menu(); }
	else {
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"|"<<setfill(' ')<<setw(14)<<" "<<"Nama yang anda cari ditemukan!"<<setw(18)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	    cout << "NIM     : " << mhs[pos].nim << endl;
		cout << "Nama    : " << mhs[pos].nama << endl;
		cout << "Jurusan : " << mhs[pos].jurusan << endl;
		cout << endl << endl;
		cout << "Ditemukan pada array indeks ke-" << pos;
	system("pause");
	menu(); }
}

void cari_jurusan() {
	cin.ignore();
	cout << "masukkan nim yang dicari   : "; getline (cin, jurusan_cari);
	mhs[99].jurusan = jurusan_cari;
	i=0;
	bool ketemu = false;
	while (!ketemu) {
		if (mhs[i].jurusan == jurusan_cari) {
			pos=i;
			ketemu=true;}
		else {
			i=i+1; }
	}

	if (i == 99) {
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"|"<<setfill(' ')<<setw(10)<<" "<<"Jurusan yang anda cari tidak ditemukan!"<<setw(13)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	system("pause");
	menu(); }
	else {
	cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<"|"<<setfill(' ')<<setw(13)<<" "<<"Jurusan yang anda cari ditemukan!"<<setw(16)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
	    cout << "NIM     : " << mhs[pos].nim << endl;
		cout << "Nama    : " << mhs[pos].nama << endl;
		cout << "Jurusan : " << mhs[pos].jurusan << endl;
		cout << endl << endl;
		cout << "Ditemukan pada array indeks ke-" << pos;
	system("pause");
	menu(); }
}

