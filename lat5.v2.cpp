#include <iostream>
using namespace std;
int main () {
char nilai_huruf;
int batas_bawah = 0; // batas bawah nilai angka
int batas_atas = 0; // batas atas nilai angka
string predikat = ""; //predikat nilai

cout << "Info Range Penilaian" << endl;
cout << "Input Nilai Huruf : ";
cin >> nilai_huruf; // variabel yang menyimpan hasil input
switch (nilai_huruf) {
case 'A' :
batas_bawah = 81;
batas_atas = 100;
predikat = "Istimewa";
break;
case 'B' :
batas_bawah = 65;
batas_atas = 80;
predikat = "Baik";
break;
case 'C' :
batas_bawah = 51;
batas_atas = 66;
predikat = "Cukup";
break;
case 'D' :
batas_bawah = 31;
	
	switch (nilai_huruf) {
case 'A' :
batas_bawah = 81;
batas_atas = 100;
predikat = "Istimewa";
break;
case 'B' :
batas_bawah = 65;
batas_atas = 80;
predikat = "Baik";
break;
case 'C' :
batas_bawah = 51;
batas_atas = 66;
predikat = "Cukup";
break;
case 'D' :
batas_bawah = 31;
batas_atas = 50;
predikat = "Kurang";
break;
case 'E' :
batas_bawah = 0;
batas_atas = 30;
predikat = "Gagal";
break;
default :
batas_bawah = 0;
batas_atas = 0;
predikat = "Tidak teridentifikasi";
break;
cout << "Input tidak sesuai" << endl;
}

} 
cout << " Nilai Angka : " << batas_bawah << "-" << batas_atas << endl;
cout << " Predikat : " << predikat << endl;
return 0;
}		 
