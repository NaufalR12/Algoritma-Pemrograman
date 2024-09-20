#include <iostream>
using namespace std;

void beranda(),pendaftaran(),masuk(),input(),output(),menu();

typedef struct {
	int no_transaksi, jumlah[1000], tmp;
	string nama_barang[100];
	float harga[100], total_harga,bayar,kembali;
}transaksi;

typedef struct {
	string username, password;
}kasir;


int pilih,n=0,i,a,j,cari_no;
int no_tr,pil;
char jawab;
bool ketemu=false;
float total;
string inputuser,no;
string inputpass;
kasir ksr[10];
transaksi tsk[100];

int main() {
	beranda(); }

void beranda() {
	system("cls");
	cout << "========================================================================\n";
	cout << "|| Minimarket Pinggiran Galaxy                                        ||\n";
	cout << "========================================================================\n";
	cout << "|| Menu:                                                              ||\n";
	cout << "|| 1. Daftar                                                          ||\n";
	cout << "|| 2. Masuk                                                           ||\n";
	cout << "|| 3. Keluar                                                          ||\n";
	cout << "========================================================================\n";
	cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih;
	while (!(pilih >=1 && pilih <= 3)) {
		cin.clear();
		cin.sync();
		cout << "========================================================================\n";
		cout << "|| Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!      ||\n";
		cout << "========================================================================\n";
		cout << "Silakan pilih menu (1/2/3) : "; cin >> pilih; }

	if (pilih == 1) {
		pendaftaran();}
	else if (pilih == 2) {
		masuk();}
	else {
		cout << "========================================================================\n";
		cout << "|| TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI                        ||\n";
		cout << "========================================================================\n";
		exit(0);}
	}
	
void pendaftaran() {
	system("cls");
	cout << "========================================================================\n";
	cout << "|| Pendaftaran Kasir                                                  ||\n";
	cout << "========================================================================\n";
	cout<< "Masukan username\t: "; cin >> inputuser;
	for(i=0; i<n; i++) {
		if(inputuser == ksr[i].username) {
			ketemu=true;
			break; }
	else {
		ketemu=false; }
	}
	
	if(ketemu) {
		cout << "========================================================================\n";
		cout << "|| Username sudah terdaftar                                           ||\n";
		cout << "========================================================================\n";
		system("pause");
		beranda(); }
	else {
		cout << "Buat password anda\t: "; cin >> ksr[n].password;
		cout << endl;
		n=n+1;
		ksr[i].username=inputuser;
		cout << "========================================================================\n";
		cout<<" Kembali Ke Menu Utama : ";
		system("pause");
		beranda(); }
	}
	
void masuk() {
	system("cls");
	cout << "========================================================================\n";
	cout << "|| Selamat datang, silakan masuk!                                     ||\n";
	cout << "========================================================================\n";
	cout << "Silakan masukan username dan password anda!" << endl;
	cout << "Username\t: "; cin >> inputuser;
	cout << "password\t: "; cin >> inputpass;
	for(i=0; i<n; i++) {
		if(inputuser==(ksr[i].username)) {
			a=i;
			ketemu=true;
			break; }
		else {
			ketemu=false; }
	}
	if(ketemu && inputpass ==(ksr[a].password)) {
		cout << "========================================================================\n";
		cout << "|| Masuk berhasil, selamat datang!                                    ||\n";
		cout << "========================================================================\n";
		system("pause");
		menu();}
	else {
		cout << "========================================================================\n";
		cout << "|| Maaf username atau password yang anda masukan salah!               ||\n";;
		cout << "========================================================================\n";
		system("pause");
		beranda(); }
	}
	
void input() {
	system("cls");
	cout << "No. transaksi\t: "; cin >> no_tr;
	i=no_tr-1;
	tsk[i].no_transaksi=no_tr;
	j= 0;
	tsk[i].total_harga=0;
	int banyakbarang;
	
	cout << "Masukan jumlah barang : "; cin >> banyakbarang;
	for (j = 0; j < banyakbarang; j++ ) {
	cout << "No." << j+1 << endl;
	cin.ignore();
	cout << "Nama barang\t: "; getline (cin, tsk[i].nama_barang[j]);
	cout << "Jumlah barang\t: "; cin >> tsk[i].jumlah[j];
	cout << "Harga\t: "; cin >> tsk[i].harga[j];
	total = total + tsk[i].jumlah[j] * tsk[i].harga[j];
	cout << endl ;
	}
	
	tsk[i].tmp=j;
	tsk[i].total_harga = total;
	cout << "Total\t\t: " << tsk[i].total_harga << endl;
	cout << "Jumlah bayar\t: "; cin >> tsk[i].bayar;
	tsk[i].kembali = tsk[i].bayar - tsk[i].total_harga;
	cout << "kembalian\t: " << tsk[i].kembali << endl;
	if ( tsk[i].bayar < tsk[i].total_harga ) {
		cout << "========================================================================\n";
		cout << "Uang anda kurang!!!" << endl;
		cout << "Silakan bayar kekurangan atau kembalikan barang belanjaan!\n";
		cout << "========================================================================\n";
	}
	else {
		cout << "Terima kasih telah berbelanja di sini!!!\n";
	}
	system("pause");
	output();
}

void output() {
	system("cls");
	cout << "========================================================================\n";
	cout << "|| Minimarket Pinggiran Galaxy                                        ||" << endl;
	cout << "========================================================================\n";
	cout << "Jl. Khayangan No.445 Langit ke 7 kec. Stratosfer." << endl << endl;
	for(j = 0; j < tsk[i].tmp; j++){
		cout << "No." << j+1 << endl;
		cout << "========================================================================\n";
		cout << "Nama barang\t: " << tsk[i].nama_barang[j] << endl;
		cout << "Jumlah barang\t: " << tsk[i].jumlah[j] << endl;
		cout << "Harga\t\t: " << tsk[i].harga[j] << endl << endl;
		cout << "========================================================================\n";
	}
	cout << "Total\t\t: " << tsk[i].total_harga << endl;
	cout << "Jumlah bayar\t: " << tsk[i].bayar << endl;
	cout << "kembalian\t: " << tsk[i].kembali << endl;
	cout << "========================================================================\n";
	cout << "Terima kasih, silakan datang kembali." << endl << endl;
	cout << "========================================================================\n";
	cout<<" Kembali Ke Menu Utama (enter) : ";
	system("pause");
	menu();
}

void riwayat() {
	bool ketemu=false;
	cout<<endl;
	cout << "========================================================================\n";
	cout<<" Masukan nomer transaksi yang akan dicari : "; cin >> cari_no;
	cout<<endl;
	for(i=0; i<n; i++) {
		if(cari_no==(tsk[i].no_transaksi)) {
			a=i;
			ketemu=true;
			break; }
		else {
			ketemu=false;}
	}
	if(ketemu) {
		for(j = 0; j < tsk[a].tmp; j++){
			cout << "No." << j+1 << endl;
			cout << "========================================================================\n";
			cout << "Nama barang\t: " << tsk[a].nama_barang[j] << endl;
			cout << "Jumlah barang\t: " << tsk[a].jumlah[j] << endl;
			cout << "Harga\t\t: " << tsk[a].harga[j] << endl << endl;
			cout << "========================================================================\n";
		}
		cout << "Total\t\t: " << tsk[a].total_harga << endl;
		cout << "Jumlah bayar\t: " << tsk[a].bayar << endl;
		cout << "kembalian\t: " << tsk[a].kembali << endl;
		cout << "========================================================================\n";
		cout<<" Kembali Ke Menu Utama (enter) : ";
		system("pause");
		menu();}
	else {
		cout << "========================================================================\n";
		cout << "|| No transaksi tidak ditemukan                                       ||" << endl;
		cout << "========================================================================\n";
		cout<<" Kembali Ke Menu Utama (enter) : ";
		system("pause");
		menu(); }
}

void menu() {
	system("cls");
	cout << "========================================================================\n";
	cout << "|| Menu                                                               ||" << endl;
	cout << "========================================================================\n";
	cout << "|| 1. Input                                                           ||" << endl;
	cout << "|| 2. Riwayat                                                         ||" << endl;
	cout << "|| 3. Keluar                                                          ||" << endl;
	cout << "========================================================================\n";
	cout<<" Pilihan Anda (1/2/3): "; cin>>pil;
	while (pil < 1 || pil > 3) {
		cout << "========================================================================\n";
		cout << "|| Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!      ||\n";
		cout << "========================================================================\n";
		cout<<" Pilihan Anda (1/2/3): "; cin>>pil; }
	if (pil == 1) {
		input(); }
	else if (pil == 2) {
		riwayat();}
	else {
		cout << "========================================================================\n";
		cout << "|| TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI                        ||\n";
		cout << "========================================================================\n";
		exit(0);}
}
