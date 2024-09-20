#include <iostream>
using namespace std;

int menu, banyak, i, j, k;
string data[100], cari;
bool found;

void didi();

void input(){
	system("cls");
	cout << "\tInput Data\n";
	cout << "Banyak data: "; cin >> banyak;
	for(i = 0; i < banyak; i++){
		cout << "Data ke-" << i+1 << ": ";
		cin >> data[i];
	}
	system("cls");
	for(i = 0; i < banyak; i++){
		cout << "Data ke-" << i+1 << ": " << data[i] << endl;
	}
	system("pause");
	didi();
}

void search(){
	//system("cls");
	for(i = 0; i < banyak; i++){
		cout << "Data ke-" << i+1 << ": " << data[i] << endl;
	}
	cout << "\tCari Data\n";
	cout << "Data yang dicari: "; cin >> cari;
	
	found = false;
	i = 0;
	j = banyak;
	while((!found)&(i <= j)){
		k = (i + j) / 2;
		if(cari == data[k]){
			found = true;
		}else{
			if(cari < data[k]){
				j = k - 1;
			}else{
				i = k + 1;
			}
		}
	}
	if(found){
		cout << cari << " ditemukan dalam array pada index ke-" << k << endl;
		didi();
	}else{
		cout << "Tidak ada " << cari << " dalam array" << endl;
	}
	system("pause");
	didi();
}

void didi(){
	//system("cls");
	cout << "Menu\n";
	cout << "1. Input data\n";
	cout << "2. Cari data\n\n";
	cout << "Pilih (1/2): "; cin >> menu;
	
	if(menu == 1){
		input();
	}else if(menu == 2){
		search();
	}else{
		cout << "Salah input";
	}
}

int main(){
	didi();
}
