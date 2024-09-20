#include <iostream>
using namespace std;
#define phi 3.14

int main () {
	float luas, tinggi = 5, jarijari = 100;
	cout << "=================================================" << endl;
	cout << "+   Program menghitung luas permukaaan tabung   +" << endl;
	cout << "=================================================" << endl;
	cout << "Tinggi = "<< tinggi << endl;
	cout << "Jari-jari = "<< jarijari << endl;
	luas = 2*phi*jarijari*(jarijari + tinggi); 
	cout << "luas permukaan tabung = " << luas << endl;
	return 0;
}
