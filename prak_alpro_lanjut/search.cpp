#include <iostream>
using namespace std;
int x[11]={2,5,8,11,14,17,20,23,26,29,32};
int i,j,cari;
bool found= false;

int main(){
	
cout << "masukkan nilai yg dicari: "; cin >> cari;
while (i<11 && found == false) {
	if (x[i]==cari) {
		found = true;
		cout << "nilai ketemu pada index ke " << i;
	}
	else {
	i++; }
}
}
