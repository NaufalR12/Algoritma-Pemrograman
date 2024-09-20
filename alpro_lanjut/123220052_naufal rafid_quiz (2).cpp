#include <iostream>
using namespace std;
void menu(),input_pesan(),cari_kamar(),sort_kamar();
typedef struct {
	string nama;
	string no_kamar;
	string jam_masuk;
	int banyak_hari;
	int total_harga;
	} data_pesan;
	
data_pesan pesan[100];


string kamar[10][10]= {{"01","02","03","04","05","06","07","08","09","10"},
					   {"11","12","13","14","15","16","17","18","19","20"},
					   {"21","22","23","24","25","26","27","28","29","30"},
					   {"31","32","33","34","35","36","37","38","39","40"},
					   {"41","42","43","44","45","46","47","48","49","50"},
					   {"51","52","53","54","55","56","57","58","59","60"},
					   {"61","62","63","64","65","66","67","68","69","70"},
					   {"71","72","73","74","75","76","77","78","79","80"},
					   {"81","82","83","84","85","86","87","88","89","90"},
					   {"91","92","93","94","95","96","97","98","99","100"}};

int pilih;
char jawab;
int i,j,n,m;
bool ketemu;
string cari_nama;
int tmp;


int main (){
	menu();
	}
	
void menu() {
	system("cls");
	cout << "RESERVASI HOTEL" << endl;
	cout << "1. Pesan Kamar" << endl;
	cout << "2. cari kamar" << endl;
	cout << "3. Sort kamar" << endl;
	cout << "4. Keluar" << endl;
	cout << "Pilih : "; cin >> pilih;	
	
	while(!(pilih >=1 && pilih <=4)) {
		cout << "menu tidak tersedia" << endl;
		cout << "pilih : "; cin >> pilih;}
	switch (pilih) {
		case 1 : input_pesan(); break;
		case 2 : cari_kamar(); break;
		case 3 : sort_kamar(); break;
		default : exit(0); }
}

void input_pesan() {
	system("cls");
	cout << "===========Nomor Kamar Yang Tersedia========" << endl;
	for (i=0; i<10; i++){
		for(j=0; j<10; j++) {
			cout << " " << kamar[i][j] << " ";}
		cout << endl;
	}
	cout << "========Masukkan Data Anda=======" << endl << endl;
	cin.ignore();
	cout << "Nama : "; getline(cin, pesan[n].nama);
	cout << "No. Kamar : "; cin >> pesan[n].no_kamar;
	cout << "Jam masuk kamar : "; cin >> pesan[n].jam_masuk;
	cout << "Banyak hari menginap : "; cin >> pesan[n].banyak_hari;
	cout << "===================================" << endl << endl;
	pesan[n].total_harga= 50000*pesan[n].banyak_hari;
	cout << "Total harga : " << pesan[n].total_harga;
	cout << endl << endl;
	n=n+1;
	for (m=0; m<100; m++){
	for (i=0; i<10; i++){
		for(j=0; j<10; j++) {
			if (pesan[m].no_kamar == kamar[i][j]){
				 kamar[i][j] = "XX"; } }}}
	cout << "Back to menu (y/n) : "; 
	system("pause");
	menu();
}

void cari_kamar(){
	system("cls");
	cin.ignore();
	cout << "Nama : "; getline (cin,cari_nama);
	for (i=0; i<100; i++){
		if (pesan[i].nama == cari_nama){
		ketemu = true;
		tmp=i;
		break;}
		else {
			ketemu=false;}
	}
	
	if (ketemu) {
		cout << "===================================" << endl << endl;
		cout << "Nama : " << pesan[tmp].nama << endl;
		cout << "No. Kamar : " << pesan[tmp].no_kamar << endl;
		cout << "Jam masuk kamar : "<< pesan[tmp].jam_masuk << endl;
		cout << "Banyak hari menginap : " <<  pesan[tmp].banyak_hari << endl;
		cout << "Total harga : " << pesan[n].total_harga << endl;
		cout << "===================================" << endl << endl;}
	else {
		cout<< "Reservasi kamar atas nama " << cari_nama<<" tidak ditemukan !"<< endl;}
		menu();
 }
 
 void sort_kamar(){
	 system("cls");
	 cout << "============Sort kamar===========" << endl;
	 cout << "a. Jam masuk kamar" << endl;
	 cout << "b. Total harga" << endl;
	 cout << "Sort berdasarkan : "; cin >> jawab;
	 
	 if (jawab == 'a') {
		 string tmp1;
		 for(i=0; i<100-1; i++) {
			 for (j=0; j<100-1-i; j++){
				 if(pesan[j].jam_masuk > pesan[j+1].jam_masuk) {
					 tmp1= pesan[j].jam_masuk;
					 pesan[j].jam_masuk = pesan[j+1].jam_masuk;
					 pesan[j+1].jam_masuk = tmp1;
				}
			}
		}
	}
	else if (jawab == 'b') {
				 int tmp1;
		 for(i=0; i<100-1; i++) {
			 for (j=0; j<100-1-i; j++){
				 if(pesan[j].total_harga > pesan[j+1].total_harga) {
					 tmp1= pesan[j].total_harga;
					 pesan[j].total_harga = pesan[j+1].total_harga;
					 pesan[j+1].total_harga = tmp1;
				}
			}
		}
	}
	else {
		cout << "menu yang ada pilih tidak ada!" << endl;}
		menu();}


