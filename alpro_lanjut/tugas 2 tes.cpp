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

for(i = 0; i < banyakmhs; i++){
	cout << setfill('=') << setw(64) << "=" << endl;
	cout << "\tNo. Mhs\t\t: " << Mhs[i].NoMhs << endl;
	cout << "\tNama\t\t: " << Mhs[i].Nama << endl;
    cout << "\tMatakuliah\t: " << Mhs[i].MTKul << endl; 
	cout << "\t\tNo\tNama Komponen\tNilai" << endl;

	for (j=0; j< Mhs[i].Banyakkomponen; j++){
		cout <<  "\t\t" << Mhs[i].Komp[j].No << "\t" << Mhs[i].Komp[0].Nama << "\t\t" << Mhs[i].Komp[0].Skor << "\t\t\t" << endl;
	}
	cout << setfill('=') << setw(64) << "=" << endl;
	cout << endl << endl;
}
}
