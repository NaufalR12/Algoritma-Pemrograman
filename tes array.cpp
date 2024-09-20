#include <iostream>
using namespace std;

char nama[3][30],nim[3][9];
int nilai[3][2];

int main(){
	
	for (int i=0; i<=2; i++) {
		cout << "Masukkan data mahasiswa ke-" << i+1 << endl;
		cout << "Masukan Nama : "; cin >> nama[i];
		cout << "Masukan Nim  : "; cin >> nim[i];
		cout << "Nilai :" << endl;
		cout << "	Nilai UTS : "; cin >> nilai[i][0];
		cout << "	Nilai UAS : "; cin >> nilai[i][1];
		cout << endl;
	}
	
	
	for (int i=0; i<=2; i++) {
		cout << "Tampilkan data mahasiswa ke-" << i+1 << endl;
		cout << "Masukan Nama : " << nama[i] << endl;
		cout << "Masukan Nim  : " << nim[i] << endl;
		cout << "Nilai :" << endl;
		cout << "	Nilai UTS : " << nilai[i][0]<< endl;
		cout << "	Nilai UAS : " << nilai[i][1]<< endl;
		cout << endl;
	}
return 0;
	
	
}
