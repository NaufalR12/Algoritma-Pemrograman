#include <iostream>
using namespace std;

int main () {

struct buah {
	string nama;
	int harga;
};

int i,jumlah;
buah info_buah[100];

cout << " jumlah buah = "; cin >> jumlah;

for (i=0; i<jumlah; i++) {
	cout << "Nama : "; cin >> info_buah[i].nama;
	cout << "Harga : "; cin >> info_buah[i].harga;
	cout << endl;
}

cout << "Daftar buah: " << endl;
for (i=0; i<jumlah; i++) {
	cout << "No. " << i+1 << " Nama : " <<  info_buah[i].nama << endl;
	cout << "      Harga : " << info_buah[i].harga << endl;
	cout << endl;
}

}

