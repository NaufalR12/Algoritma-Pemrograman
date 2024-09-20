#include <iostream>
using namespace std;

void menu(),perkalian(),penjumlahan(),pengurangan(),transpose();
int i, j, m, n, a[10][10], b[10][10], c[10][10];
char pilihan;

int main(){
	menu();
}

void menu() {
		system("cls");
		cout << "Menu Operasi   " << endl;
		cout << "a. Penjumlahan" << endl;
		cout << "b. Pengurangan" << endl;
		cout << "c. Perkalian" << endl;             
		cout << "d. Transpose" << endl;
		cout << "e. Keluar" << endl;
		cout << "Pilih menu (a/b/c/d/e) : "; cin >> pilihan;

		while (!(pilihan == 'a' || pilihan == 'b' || pilihan == 'c' || pilihan == 'd' || pilihan == 'e' )) {
			cin.clear();
			cin.sync();
			cout << "Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!  " << endl;
			cout << "Pilih menu (1/2/3/4/5) : "; cin >> pilihan; }

			switch (pilihan)  
			{
				case 'a' : 
					penjumlahan ();					
					break;					
				case 'b' :					
					pengurangan ();					
					break;					
				case 'c' :					
					perkalian ();					
					break;				
				case 'd' :					
					transpose ();					
					break;									
				default :
					cout << "program keluar" ;
			}				 			 
	}	

void penjumlahan() {
  cout << "Masukkan baris matriks: ";
  cin >> m;
  cout << "Masukkan kolom matriks: ";
  cin >> n;
  cout << "matrix pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }
  cout << "matrix kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> b[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      c[i][j] = a[i][j] + b[i][j];
      cout << c[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		menu();
}

void pengurangan() {
  cout << "baris matriks: ";
  cin >> m;
  cout << "kolom matriks: ";
  cin >> n;
  cout << "matrix pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }
  cout << "matrix kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> b[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      c[i][j] = a[i][j] - b[i][j];
      cout << c[i][j] << "\t";
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
        cin >> a[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> b[i][j];
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + a[i][k] * b[k][j];
        }
        c[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cout << c[i][j] << "\t";
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
  int d[10][10], t[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> d[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      t[j][i] = d[i][j];
    }
  }
  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << t[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "========================================================================" << endl;
		cout << " Kembali Ke Menu Utama : "; 
		system("pause");
		menu();
}
