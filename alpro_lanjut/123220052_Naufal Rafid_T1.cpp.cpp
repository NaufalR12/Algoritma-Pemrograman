#include <iostream>
using namespace std;

void perkalian();
void input_MA(int baris, int kolom);
void input_MB(int barisB, int kolomB);
void input_ordo(),input_ordoB();
int pilih;
int MA[10][10],MB[10][10],Mhasil[10][10];
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
		
		cout << "========================================================================" << endl;
		cout << "||                          PERKALIAN MATRIKS                         ||" << endl;   
		cout << "========================================================================" << endl;  
		cout << "Matriks pertama" << endl;
		input_ordo();
		cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab;
        cout << endl;
		cout << "========================================================================" << endl; 
		        
                while (jawab == 'n') {
					cout << "Matriks pertama" << endl;
					input_ordo();
					cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl; }
		
		cout << "Matriks kedua" << endl;
		input_ordoB();
		cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab;
        cout << endl;
		cout << "========================================================================" << endl; 
		        
                while (jawab == 'n') {
					cout << "Matriks kedua" << endl;
					input_ordoB();
					cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl; }
		
		if(kolom != barisB){
			cout << "========================================================================" << endl;
			cout << "Syarat agar dua buah matriks dapat dikalikan adalah matriks pertama" << endl;
			cout << "harus memiliki jumlah kolom yang sama dengan jumlah baris pada matriks" << endl;
			cout << "kedua. Ordo matriks hasil perkalian dua buah matriks adalah jumlah baris" << endl;
			cout << "pertama dikali jumlah kolom ke dua." << endl;
			cout << "========================================================================" << endl;
			cout << "Matriks tidak dapat dikalikan satu sama lain." << endl;
			cout << "Silakan masukkan kembali !" << endl;
			system("pause");
			system("cls");
			perkalian();
		} 
		else {
			input_MA(baris,kolom);
			cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
            cout << endl;
			cout << "========================================================================" << endl;   
			
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
					cout << endl;
					cout << "========================================================================" << endl; }
			
			input_MB(barisB,kolomB);
			cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
            cout << endl;
			cout << "========================================================================" << endl;
                
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl; }
			
			for(i = 0; i < baris; i++){
				for(j = 0; j < kolomB; j++){
					for(k = 0; k < barisB; k++){
						hasilsementara = hasilsementara + MA[i][k] * MB[k][j];
					}
					Mhasil[i][j] = hasilsementara;
					hasilsementara = 0;
				}
			}
			
			cout << "Hasil perkalian matriks: \n";
			for(i = 0; i < baris; i++){
				for(j = 0; j < kolomB; j++){
					cout << Mhasil[i][j] << "\t";
				}
				cout << endl;
			}
		}
  
		cout << "========================================================================" << endl;
		cout << "Apakah anda ingin kembali ke program perkalian matriks (y/n) : "; cin >> jawab;
		if (jawab == 'y' || jawab == 'Y') {
					perkalian();}
		else {	
		cout << "========================================================================" << endl;
		cout << "||            TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI             ||" << endl;
		cout << "========================================================================" << endl; 	
		exit(0);}
	}

	
	
	void input_MA (int baris, int kolom) {
		
		cout << "Masukkan elemen matrix pertama: \n";
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = ";
				cin >> MA[i][j];
			}
		}
	} 
	
	void input_MB(int barisB, int kolomB) {
		
		cout << "Masukkan elemen matrix kedua: \n";
		for(i = 0; i < barisB; i++){
			for(j = 0; j < kolomB; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = ";
				cin >> MB[i][j];
			}
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

	
