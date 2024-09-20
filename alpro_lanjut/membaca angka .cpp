#include <iostream>
#include <string>
using namespace std;

string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
string ratus = "ratus";
string ribu = "ribu";
string juta = "juta";

string terbilang(int angka) {
    if(angka < 12) {
        return satuan[angka];
    } else if(angka < 20) {
        return satuan[angka % 10] + " belas";
    } else if(angka < 100) {
        return satuan[angka / 10] + " puluh " + satuan[angka % 10];
    } else if(angka < 200) {
        return "seratus " + terbilang(angka % 100);
    } else if(angka < 1000) {
        return satuan[angka / 100] + " " + ratus + " " + terbilang(angka % 100);
    } else if(angka < 2000) {
        return "seribu " + terbilang(angka % 1000);
    } else if(angka < 1000000) {
        return terbilang(angka / 1000) + " " + ribu + " " + terbilang(angka % 1000);
    } else if(angka < 1000000000) {
        return terbilang(angka / 1000000) + " " + juta + " " + terbilang(angka % 1000000);
    } else {
        return "Angka terlalu besar";
    }
}

int main() {
    int angka;
    
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    
    cout << "Terbilang: " << terbilang(angka) << endl;
    
    return 0;
}
