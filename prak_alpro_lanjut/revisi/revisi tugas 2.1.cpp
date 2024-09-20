#include <iostream>
using namespace std;

void input(),output(string x[], int n),menu();
int Search(string x[], int n, string cari);
string x[1000];
int pilih,n,k;
bool found = true;

int main() {
	menu();
    return 0;
}

void menu(){
	system("cls");
	cout << "Menu : " << endl;
	cout << "1. Input" << endl;
	cout << "2. Output" << endl;
	cout << "3. Keluar" << endl;
	cout << "Pilih menu (1/2/3) : "; cin >> pilih;
	while (!(pilih >=1 && pilih <= 3 )) {
					cin.clear();
					cin.sync();
					cout << "Menu tidak tersedia!" << endl;
					cout << "Pilih menu (1/2/3) : "; cin >> pilih; }

				if (pilih == 1) {
					input();}
				else if (pilih == 2) {	
					output(x,n);}
				else {	
					cout << "Program selesai....." << endl;
					exit(0);}
}


void input() {
	system("cls");
    cout << "Masukkan jumlah string: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Masukkan string ke-" << i + 1 << ": ";
        getline (cin, x[i]);
    }
    system("pause");
    menu();
    
}


int Search(string x[], int n, string cari) {
    int i = 0, j = n - 1;

    while (i <= j) {
        k = (i + j) / 2;

        if (x[k] == cari) {
            return true;
        }
        else if (x[k] < cari) {
            i = k + 1;
        }
        else {
            j = k - 1;
        }
    }

    return false;
}

void output(string x[], int n) {
	system("cls");
	string cari;
	cout << "String yang  telah di inputkan : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "(" << i+1 << ".)" << x[i] << endl;
    }
    cout << endl; 
    cin.ignore();
    cout << "Masukkan string yang ingin dicari: ";
    getline (cin, cari);

    found = Search(x, n, cari);
    if (!found) {
        cout << cari << " tidak ditemukan." << endl;
    }
    else {
        cout << cari << " ditemukan pada indeks ke-" << k << endl;
    }
    system("pause");
    menu();
}
