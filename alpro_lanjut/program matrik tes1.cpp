#include <iostream>
using namespace std;

void beranda(),menu_beranda(),penjumlahan(),pengurangan(),perkalian(),transpose();
void input_MA(int baris, int kolom);
void input_MB(int baris, int kolom);
void input_ordo(),input_ordoB();
int pilih;
int MA[10][10],MB[10][10],Mhasil[10][10];
int baris, kolom, barisB, kolomB;
int i,j;
char jawab;

int main() {
	beranda();
    return 0;
}

	void beranda() {
		system("cls");
		cout << "========================================================================" << endl;
		cout << "||                       PROGRAM OPERASI MATRIKS                      ||" << endl;
		cout << "========================================================================" << endl;
		cout << "Anda dapat melakukan operasi penjumlahan, pengurangan, perkalian" << endl;
		cout << "dan transpose matriks." << endl << endl;
		cout << "Silakan pilih menu sesuai yang anda inginkan!" << endl << endl;
		system("pause");
		menu_beranda();
	}
	
	void menu_beranda() {
		system("cls");
		cout << "========================================================================" << endl;
		cout << "||                           Menu Operasi                             ||" << endl;
		cout << "|| 1. Penjumlahan                                                     ||" << endl;
		cout << "|| 2. Pengurangan                                                     ||" << endl;
		cout << "|| 3. Perkalian                                                       ||" << endl;             
		cout << "|| 4. Transpose                                                       ||" << endl;
		cout << "|| 5. Keluar                                                          ||" << endl;
		cout << "========================================================================" << endl;
		cout << "Pilih menu (1/2/3/4/5) : "; cin >> pilih;

		while (!(pilih >=1 && pilih <= 5 )) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Pilih menu (1/2/3/4/5) : "; cin >> pilih; }

			switch (pilih)  {
				case 1 : 
					penjumlahan ();					
					break;					
				case 2 :					
					pengurangan ();					
					break;					
				case 3 :					
					perkalian ();					
					break;				
				case 4 :					
					transpose ();					
					break;									
				default :
					cout << "========================================================================" << endl;
					cout << "||            TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI             ||" << endl;
					cout << "========================================================================" << endl; 	
					exit(0);}				 			 
	}	
				
			

	void penjumlahan() {
		system("cls");
		cout << "========================================================================" << endl;
		cout << "||                             PENJUMLAHAN                            ||" << endl;   
		cout << "========================================================================" << endl;               
		input_ordo();
		cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab;
        cout << endl;
		cout << "========================================================================" << endl;       
		
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl;  }
					
		input_MA(baris,kolom);
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
        cout << endl;
		cout << "========================================================================" << endl; 
		        
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl; }
					
		input_MB(baris,kolom);
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
        cout << endl;
		cout << "========================================================================" << endl; 
		        
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
					cout << endl;
					cout << "========================================================================" << endl;  }
					
		cout << "hasil penjumlahan matrix: \n";
		
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				Mhasil[i][j] = MA[i][j] + MB[i][j];
				cout << Mhasil[i][j] << "\t";
			}
			cout << endl;
		}
  
	    cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		beranda();
	}

	void pengurangan() {
		
		cout << "========================================================================" << endl;
		cout << "||                             PENGURANGAN                            ||" << endl;   
		cout << "========================================================================" << endl;  
		input_ordo();
		cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab;
        cout << endl;
		cout << "========================================================================" << endl; 
		        
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl; }
					
		input_MA(baris,kolom);
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
        cout << endl;
		cout << "========================================================================" << endl; 
		       
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl; }
					
		input_MB(baris,kolom);
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
		cout << endl;
		cout << "========================================================================" << endl; 
                
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab; 
					cout << endl;
					cout << "========================================================================" << endl; }
		
		cout << "hasil pengurangan \n";
		
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				Mhasil[i][j] = MA[i][j] - MB[i][j];
				cout << Mhasil[i][j] << "\t";
			}
			cout << endl;
		}
		
		cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		beranda();
	}

	void perkalian() {
		int k,hasilsementara = 0;
		
		cout << "========================================================================" << endl;
		cout << "||                              PERKALIAN                             ||" << endl;   
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
			
			input_MB(baris,kolom);
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
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		beranda();
	}

	
	void transpose() {
		int transpose[10][10];
		
		cout << "========================================================================" << endl;
		cout << "||                              TRANSPOSE                             ||" << endl;   
		cout << "========================================================================" << endl;  
		input_ordo();
		cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab;
                
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah ordo matriks sudah benar (y/n) : "; cin >> jawab; }
					
		input_MA(baris,kolom);
		cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab;
                
                while (jawab == 'n') {
					input_ordo();
					cout << "Apakah matriks sudah benar (y/n) : "; cin >> jawab; }
		
		for (i = 0; i < baris; i++){
			for (j = 0; j < kolom; j++){
				transpose[j][i] = MA[i][j];
			}
		}
 
		cout << "Hasil Transpose Matriks: \n";
		
		for (i = 0; i < kolom; i++){
			for (j = 0; j < baris; j++){
				cout << transpose[i][j] << "\t";
			}
			cout << endl;
		}
		
		cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		beranda();
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
	
	void input_MB(int baris, int kolom) {
		
		cout << "Masukkan elemen matrix kedua: \n";
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
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
