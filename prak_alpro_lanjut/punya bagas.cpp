#include <iostream>
using namespace std;
	int data, j, m, k; 
	string x[100], nilaicari;
	bool found;
	void menu();
	
void input(){
	
	cout << "Masukkan Jumlah data = "; cin >> data;
	for (int i = 0; i < data; i++){
		cout << "Data " << i+1 << " = "; cin >> x[i];
	}system("pause");
		system("cls");
	menu();}
	
void search(){
	for (int i = 0; i < data; i++){
		cout << "Data " << i+1 << " = "<< x[i] << endl;}
	cout << "Data yang dicari = "; cin >> nilaicari;

   found = false;
   m = 0;
   j = data;
   while ((!found) & (m <= j)){
      k = (m+j)/2;
      if(nilaicari == x[k]) 
	  found = true;
      else{
		  if(nilaicari < x[k])
		  j = k -1;
		  else
		  m = k + 1;}
	}

   if(found){
      cout <<  nilaicari << " ditemukan dalam Array pada index ke-" << k << endl;
      menu();}
   else {
      cout << "tidak ada " << nilaicari << "Dalam array" << endl;
      system("pause");
		//system("cls");
      menu();}
}
void menu(){
	int pilih;
	cout << "1. input data\n";
	cout << "2. Search\n";
	cout << "pilih = "; cin >> pilih; 
	if(pilih == 1){
		system("pause");
		system("cls");
		input();}
		else if (pilih == 2){
		system("pause");
		//system("cls");
		search();}
			else{
				menu();}
				}


int main(){
	menu();
}
