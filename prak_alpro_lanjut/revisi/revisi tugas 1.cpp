#include <iostream>
using namespace std;

void perkalian();//fungsi untuk operasi perkalian
void input_MA(int baris, int kolom);//fungsi untuk menginput matriks yang ingin di kalikan
void input_MB(int barisB, int kolomB); //fungsi untuk menginput matriks yang ingin di kalikan
void input_ordo(),input_ordoB(); //menginput ordo matriks

int pilih;
int MatriksA[10][10],MatriksB[10][10],MatriksHasil[10][10];
int baris, kolom, barisB, kolomB;
int i,j;
char jawab;

int main() {
	perkalian();
	return 0;
}

void perkalian() {
	system("cls");
	int k,hasilsementara = 0;
	
	cout << "========================================================================\n";
	cout << "|| PERKALIAN MATRIKS ||\n";
	cout << "========================================================================\n";
	cout << "Matriks pertama\n";
	input_ordo();
	cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; // memastikan input apakah sudah benar
	cout << endl;
	cout << "========================================================================\n";
	
	while (jawab == 'n') {		
		cout << "Matriks pertama\n";
		input_ordo();
		cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; // memastikan input apakah sudah benar
		cout << endl;
		cout << "========================================================================\n"; }
		
	cout << "Matriks kedua\n";
	input_ordoB();
	cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; // memastikan input apakah sudah benar
	cout << endl;
	cout << "========================================================================\n";
	
	while (jawab == 'n') {
		cout << "Matriks kedua\n";
		input_ordoB();
		cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; // memastikan input apakah sudah benar
		cout << endl;
		cout << "========================================================================\n"; }

	if(kolom != barisB){ // memeriksa apakah kolom matriks pertama sama dengan baris matriks kedua karena syarat perkalian matriks harus sama antara kolom matriks pertama dan baris matriks kedua sama
		cout << "========================================================================\n";
		cout << "Syarat agar dua buah matriks dapat dikalikan adalah matriks pertama\n";
		cout << "harus memiliki jumlah kolom yang sama dengan jumlah baris pada matriks\n";
		cout << "kedua. Ordo matriks hasil perkalian dua buah matriks adalah jumlah baris\n";
		cout << "pertama dikali jumlah kolom ke dua.\n";
		cout << "========================================================================\n";
		cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
		cout << "Silakan masukkan kembali !\n";
		system("pause");
		system("cls");
		perkalian();
	}
	else {
		input_MA(baris,kolom);
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
		cout << endl;
		cout << "========================================================================\n";
	while (jawab == 'n') {
		input_ordo();
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
		cout << endl;
		cout << "========================================================================\n"; }
	
	input_MB(barisB,kolomB);
	cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
	cout << endl;
	cout << "========================================================================\n";
	
	while (jawab == 'n') {
		input_ordo();
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
		cout << endl;
		cout << "========================================================================\n"; }
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolomB; j++){
				for(k = 0; k < barisB; k++){
					hasilsementara = hasilsementara + MatriksA[i][k] * MatriksB[k][j];
					}
				MatriksHasil[i][j] = hasilsementara; // menyimpan hasil perkalian ke matriks hasil
				hasilsementara = 0;
			}
		}
	cout << "Hasil perkalian matriks: \n"; //menampilkan hasil perkalian
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolomB; j++){
			cout << MatriksHasil[i][j] << "\t";
			}
		cout << endl;
	}
	}
	cout << "========================================================================\n";
	cout << "Apakah anda ingin kembali ke program perkalian matriks (y/n) : "; cin >> jawab; //jika user ingin Kembali  menjalankan program
	if (jawab == 'y' || jawab == 'Y') {
		perkalian();}
	else {
		cout << "========================================================================\n";
		cout << "|| TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI ||\n";
		cout << "========================================================================\n";
		exit(0);}
	}
	
void input_MA (int baris, int kolom) {
	cout << "Masukkan elemen matrix pertama: \n";
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << "Elemen matriks " << "[" << i << "][" << j << "] = ";
			cin >> MatriksA[i][j];
			}
	}
	cout << "Matriks A : \n"; 
	for(i = 0; i < baris; i++){
		for(j = 0; j < kolom; j++){
			cout << MatriksA[i][j] << "\t";
			}
		cout << endl;
	}
}

void input_MB(int barisB, int kolomB) {
	cout << "Masukkan elemen matrix kedua: \n";
	for(i = 0; i < barisB; i++){
		for(j = 0; j < kolomB; j++){
			cout << "Elemen matriks " << "[" << i << "][" << j << "] = ";
			cin >> MatriksB[i][j];
			}
	}
	cout << "Matriks B : \n"; 
	for(i = 0; i < barisB; i++){
		for(j = 0; j < kolomB; j++){
			cout << MatriksB[i][j] << "\t";
			}
		cout << endl;
	}
}

void input_ordo() {
	cout << "Masukkan jumlah baris matriks: ";
	cin >> baris;
	cout << "Masukkan jumlah kolom matriks: ";
	cin >> kolom;
}

void input_ordoB() {
	cout << "Masukkan jumlah baris matriks: ";
	cin >> barisB;
	cout << "Masukkan jumlah kolom matriks: ";
	cin >> kolomB;
}
