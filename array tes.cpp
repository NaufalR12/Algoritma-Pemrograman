/*#include <iostream>
using namespace std;
int main()
{
int index, no, jml_data;
//input banyak jumlah data mahasiswa 
cout << "Masukkan jumlah data mahasiswa : ";
cin >> jml_data;
//Deklarasi array dengan jumlah elemen dinamis 
int nilai[jml_data];
//input nilai mahasiswa 
cout << "Input nilai mahasiswa : \n";
for(index=0; index < jml_data; index++)
{
no = index+1;
cout << "Mahasiswa "<< no << " : ";
cin >> nilai[index];
}
//tampilkan nilai mahasiswa 
cout << "Nilai mahasiswa yang telah diinput\n";
for(index=0; index < jml_data; index++)
{
cout << nilai[index] << " ";
}
return 0;
}*/


/*
#include <iostream>
using namespace std;
int main()
{
int baris, kolom, matriks[3][4];
// Input elemen array secara Row Major Order
cout << "Input elemen Array : \n";
for(baris=0; baris<3; baris++)
{
for(kolom=0; kolom<4; kolom++)
{
cout << "matriks["<<baris+1<<"]["<<kolom+1<<"] = ";
cin >> matriks[baris][kolom];
}
cout << "\n";
}
// Tampilkan elemen Array secara Row Major Order
cout << "Isi array : \n";
for(baris=0; baris<3; baris++)
{
for(kolom=0; kolom<4; kolom++)
{
cout << " " << matriks[baris][kolom];
}
cout << "\n";
}
return 0;
}
*/

#include <iostream>
using namespace std;

int main (){
	string nama[3],nim[3],nilai[3];
	
	for (int i=0; i<=2; i++) {
		cout << "Masukan Nama ke-" << i+1 << " : "; cin >> nama[i];
		cout << "Masukan Nim ke-" << i+1 << " : "; cin >> nim[i];
		cout << "Masukan Nilai ke-" << i+1 << " : "; cin >> nilai[i];
		cout << endl;
	}
	
	for (int i=0; i<=2; i++) {
		cout << "Masukan Nama ke-" << i+1 << " : " << nama[i] << endl;
		cout << "Masukan Nim ke-" << i+1 << " : " << nim[i] << endl;
		cout << "Masukan Nilai ke-" << i+1 << " : " << nilai[i] << endl;
		cout << endl;
	}
return 0;
}
	


