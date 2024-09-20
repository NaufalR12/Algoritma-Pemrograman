#include <iostream>
using namespace std;

void beranda(),menu_beranda(),penjumlahan(),pengurangan(),perkalian(),transpose();
int input_MA(int baris, int kolom);
int pilih;


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
		int i, j, baris, kolom;
		int MA[10][10], MB[10][10], Mhasil[10][10];
		
		cout << "========================================================================" << endl;
		cout << "||                             PENJUMLAHAN                            ||" << endl;   
		cout << "========================================================================" << endl;               
		cout << "Masukkan jumlah baris matriks: ";
		cin >> baris;
		cout << "Masukkan jumlah kolom matriks: ";
		cin >> kolom;
		cout << "Masukkan elemen matrix pertama: \n";
		
		input_MA (baris,kolom);
		
		/*for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
				cin >> MA[i][j];
			}
		} */
		
		cout << "Masukkan elemen matrix kedua: \n";
		
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
				cin >> MB[i][j];
			}
		} 
  
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
		int i, j, baris, kolom;
		int MA[10][10], MB[10][10], Mhasil[10][10];
		
		cout << "========================================================================" << endl;
		cout << "||                             PENGURANGAN                            ||" << endl;   
		cout << "========================================================================" << endl;  
		cout << "Masukkan jumlah baris matriks: ";
		cin >> baris;
		cout << "Masukkan jumlah kolom matriks: ";
		cin >> kolom;
		cout << "Masukkan elemen matrix pertama: \n";
		
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
				cin >> MA[i][j];
			}
		}
		
		cout << "Masukkan elemen matrix kedua: \n";
		
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
				cin >> MB[i][j];
			}
		}
		
		cout << "hasil penjumlahan matrix: \n";
		
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
		int MA[10][10], MB[10][10], Mhasil[10][10];
		int i, j, k, barisA, kolomA, barisB, kolomB, hasilsementara = 0;
		
		cout << "========================================================================" << endl;
		cout << "||                              PERKALIAN                             ||" << endl;   
		cout << "========================================================================" << endl;  
		cout << "Masukkan jumlah baris matriks pertama: ";
		cin >> barisA;
		cout << "Masukkan jumlah kolom matriks pertama: ";
		cin >> kolomA;
		cout << "Masukkan jumlah baris matriks kedua: ";
		cin >> barisB;
		cout << "Masukkan jumlah kolom matriks kedua: ";
		cin >> kolomB;
		
		if(kolomA != barisB){
			cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
		} 
		else {
			cout << "Masukkan elemen matriks pertama: \n";
			for(i = 0; i < barisA; i++){
				for(j = 0; j < kolomA; j++){
					cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
					cin >> MA[i][j];
				}
			}
			
			cout << "Masukkan elemen matriks kedua: \n";
			for(i = 0; i < barisB; i++){
				for(j = 0; j < kolomB; j++){
					cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
					cin >> MB[i][j];
				}
			}
			
			for(i = 0; i < barisA; i++){
				for(j = 0; j < kolomB; j++){
					for(k = 0; k < barisB; k++){
						hasilsementara = hasilsementara + MA[i][k] * MB[k][j];
					}
					Mhasil[i][j] = hasilsementara;
					hasilsementara = 0;
				}
			}
			
			cout << "Hasil perkalian matriks: \n";
			for(i = 0; i < barisA; i++){
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
		int i, j, baris, kolom;
		int M[10][10], transpose[10][10];
		
		cout << "========================================================================" << endl;
		cout << "||                              TRANSPOSE                             ||" << endl;   
		cout << "========================================================================" << endl;  
		cout << "Masukkan jumlah baris matriks: ";
		cin >> baris;
		cout << "Masukkan jumlah kolom matriks: ";
		cin >> kolom;
		cout << "Masukkan elemen matriks\n";
		
		for (i = 0; i < baris; i++){
			for (j = 0; j < kolom; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
				cin  >> M[i][j];
			}
		}
		
		for (i = 0; i < baris; i++){
			for (j = 0; j < kolom; j++){
				transpose[j][i] = M[i][j];
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
	
	int input_MA (int baris, int kolom) {
		int MA[10][10];
		int i,j;
		for(i = 0; i < baris; i++){
			for(j = 0; j < kolom; j++){
				cout << "Elemen matriks " << "[" << i << "][" << j << "] = " << endl;
				cin >> MA[i][j];
			}
		}
		return MA[i][j];
	} 
