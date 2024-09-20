#include <iostream>
using namespace std;

void menu(),perkalian(),penjumlahan(),pengurangan(),transpose();
int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
int pilih;

void menu() {
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
					cout << " terima kasih" ;}				 			 
	}	

void penjumlahan() {
  
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matrix pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matrix kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		menu();
}

void pengurangan() {
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matrix pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matrix kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		menu();
}

void perkalian() {

  int  k, p, q, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> n;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> p;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> q;
  if(n != p){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
  cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		menu();
}
void transpose(){
  int matriks[10][10], transpose[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		menu();
}
