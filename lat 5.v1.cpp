#include <iostream>
using namespace std;
int main () {
float nilai = 0.0;
string keterangan = "";
cout << "Input Nilai Anda : ";
cin >> nilai;
cout << endl;
if (nilai > 85 && nilai <= 100) {
keterangan = "BAIK";
cout << "Nilai Anda " << keterangan << endl;
cout << "Tidak perlu mengulang" << endl;
} else {
keterangan = "KURANG";
cout << "Nilai Anda " << keterangan << endl;
cout << "Silahkan mengajukan remidi" << endl;
}
}
