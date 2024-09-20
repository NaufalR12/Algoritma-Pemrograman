#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
	int No,Skor;
	string Nama;
} komponen;

typedef struct {
	int NoMhs, Banyakkomponen;
	string Nama, MTKul;
	komponen Komp[5];
} mahasiswa;


mahasiswa Mhs[2];
int banyakmhs,i,j;

int main(){

cout << "Banyak mahasiswa = "; cin >> banyakmhs;
cout << endl << endl;
for(i = 0; i < banyakmhs; i++){
	
	cout << "Mhs["<<i<<"].NoMhs = "; cin >> Mhs[i].NoMhs;
	cin.ignore();
	cout << "Mhs["<<i<<"].Nama = "; getline (cin,Mhs[i].Nama);
    cout << "Mhs["<<i<<"].MTKul = "; getline( cin, Mhs[i].MTKul); 
	cout << "Mhs["<<i<<"].BanyakKomponen = "; cin >> Mhs[i].Banyakkomponen; 
	
	for (j=0; j< Mhs[i].Banyakkomponen; j++){
		cout << "  	Mhs["<<i<<"].Komp[0].No = "; cin >> Mhs[i].Komp[j].No;
		cout << "  	Mhs["<<i<<"].Komp[0].Nama = "; cin >> Mhs[i].Komp[0].Nama;
		cout << "	Mhs["<<i<<"].Komp[0].Skor = "; cin >> Mhs[i].Komp[0].Skor;
		cout << endl ;
	}
	cout << endl << endl;
}
cout << setfill('=') << setw(54) << "=" << endl;
for(i = 0; i < banyakmhs; i++){
	
	cout <<  "|" << left<<setw(10)<<setfill(' ') << "No. Mhs   : " <<left<<setw(30)<<setfill(' ');
	cout << left<<setw(40)<<setfill(' ') << Mhs[i].NoMhs <<left<<setw(30)<<setfill(' ')<<"|"<< endl;
	cout <<  "|" << left<<setw(10)<<setfill(' ') << "Nama      : " <<left<<setw(30)<<setfill(' ');
	cout << left<<setw(40)<<setfill(' ') << Mhs[i].Nama <<left<<setw(30)<<setfill(' ')<<"|" << endl;
    cout <<  "|" << left<<setw(10)<<setfill(' ') << "Matakuliah: " <<left<<setw(30)<<setfill(' '); 
    cout << left<<setw(40)<<setfill(' ') << Mhs[i].MTKul <<left<<setw(30)<<setfill(' ')<<"|" << endl; 
	cout << left<<setw(5)<<setfill(' ') << setfill(' ') << "|" << left << setw(4) << "No";
	cout << setfill(' ') << left << setw(30) << "Nama Komponen";
	cout << setfill(' ') << left << setw(14) << "Nilai" <<left<<setw(30)<<setfill(' ')<<"|" << endl;


	for (j=0; j< Mhs[i].Banyakkomponen; j++){
		cout << left<<setw(5)<<setfill(' ') << setfill(' ') << "|" << left << setw(4) << Mhs[i].Komp[j].No;
		cout << setfill(' ') << left << setw(30) << Mhs[i].Komp[0].Nama;
		cout << setfill(' ') << left << setw(14) << Mhs[i].Komp[0].Skor <<left<<setw(30)<<setfill(' ')<<"|" << endl;
	}
	cout << left<<setw(53)<<setfill(' ') << setfill(' ') << "|" <<left<<setw(30)<<setfill(' ')<<"|" << endl;
	
}
cout << setfill('=') << setw(54) << "=" << endl;
}
