#include <iostream>
#include <stdlib.h>
using namespace std;
void bubble_sort ();
void input(),menu(),dwos(),dws();
void selection_sort();


typedef struct {
	char nama[30];
	int code;
	int tahun;
	char penyanyi [30];
} info;

info song[100];
int data_size;
int i,pilih;
char spasi = ' ';
int main () {
menu();
}


void bubble_sort ()
{ 
int temp,i,j;

for (i=0; i<data_size-1; i++) {
	for(j=0; j<data_size-1-i; j++) {
		if(song[j].code > song[j+1].code) {
			temp = song[j].code;
			song[j].code=song[j+1].code;
			song[j+1].code= temp;
			}
	}
}
dwos();
}

void selection_sort()
{
   int temp, current, j;

   for(current=0; current<data_size; current++) 
{
      for(j=current+1; j<data_size; j++) 
{
         if(song[current].tahun > song[j].tahun) 
         {
            temp = song[current].tahun;
            song[current].tahun = song[j].tahun;
            song[j].tahun = temp;
         }
     }
   }
   dwos();
}

void menu(){
	system("cls");
	cout << "-----------------------------------------------------------" << endl;
	cout << "                    Naufal Playlist Maker                  " << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << "Menu : " << endl;
	cout << "1. Input" << endl;
	cout << "2. Display whitout sorting" << endl;
	cout << "3. Display whit sorting" << endl;
	cout << "Pilih menu (1/2/3) : "; cin >> pilih;
	while (!(pilih >=1 && pilih <= 3 )) {
					cin.clear();
					cin.sync();
					cout << "Menu tidak tersedia!" << endl;
					cout << "Pilih menu (1/2/3) : "; cin >> pilih; }

				if (pilih == 1) {
					input();}
				else if (pilih == 2) {	
					dwos();}
				else {	
					dws();}
}

void input() {
	system("cls");
	cout << "masukkan jumlah lagu yang di input : "; cin >> data_size;
	for(i=0; i<data_size; i++) {
		cin.ignore();
	cout << "Song [" << i << "] = " << endl; 
	
	cout << "judul : " ; cin.getline(song[i].nama, 30);
	cout << "kode : "; cin >> song[i].code;
	cout << "Tahun : "; cin >> song[i].tahun;
	cin.ignore();
	cout << "Penyanyi : " ; cin.getline (song[i].penyanyi, 30);
	cout << endl;
	}	
	menu();
}

void dwos() {
	system("cls");
	for(i=0; i<data_size; i++) {
	cout << "Song [" << i << "] = " << endl; 
	cout << "judul : " << song[i].nama << endl;
	cout << "kode : " <<  song[i].code << endl;
	cout << "Tahun : " << song[i].tahun << endl;
	cout << "Penyanyi : " << song[i].penyanyi << endl;
	cout << endl;
	}
	system("pause");
	menu();
}

void dws() {
system("cls");
	cout << "Menu : " << endl;
	cout << "1. Berdasarkan kode" << endl;
	cout << "2. berdasarkan tahun" << endl;
	cout << "Silakan pilih menu : " ; cin >> pilih;
	if (pilih == 1) {
					bubble_sort();}
				else if (pilih == 2) {	
					selection_sort();}
				else {	
					exit(0);}
}
