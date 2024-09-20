#include <iostream>
using namespace std;

void bubbleSort(string x[], int n),input(),output(string x[], int n),menu();
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
    cout << "Masukkan jumlah string: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cout << "Masukkan string ke-" << i + 1 << ": ";
        cin >> x[i];
    }

    bubbleSort(x, n);
    system("pause");
    menu();
    
}

void bubbleSort(string x[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                swap(x[j], x[j + 1]);
            }
        }
    }
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
	string cari;
	cout << "String setelah diurutkan: " << endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl; 
    
    cout << "Masukkan string yang ingin dicari: ";
    cin >> cari;

    found = Search(x, n, cari);
    if (!found) {
        cout << "String tidak ditemukan." << endl;
    }
    else {
        cout << "String ditemukan pada indeks ke-" << k << endl;
    }
    system("pause");
    menu();
}
