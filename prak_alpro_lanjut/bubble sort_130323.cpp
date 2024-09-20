#include <iostream>
#include <stdlib.h>
using namespace std;

void bubble_sort (int array[],int size)
{ 
int temp,i,j;

for (i=0; i<size-1; i++) {
	for(j=0; j<size-1-i; j++) {
		if(array[j] > array [j+1]) {
			temp = array [j];
			array[j]=array[j+1];
			array[j+1]= temp;
			}
	}
}
}

void bubble_sort2 (int array[],int size)
{ 
int temp,i,j;

for (i=0; i<size-1; i++) {
	for(j=0; j<size-1-i; j++) {
		if(array[j] < array [j+1]) {
			temp = array [j];
			array[j]=array[j+1];
			array[j+1]= temp;
			}
	}
}
}

int main () {
int data_size = 1000 ;
int values[data_size],i;

cout << "masukkan jumlah data yang di input : "; cin >> data_size;


cout << "data yang belum urut : " << endl;
for(i=0; i<data_size; i++) {
	cout << "masukkan data ke [" << i << "] = "; cin >> values[i];
}

cout << endl;



cout << " data yang sudah diurutkan (ascending) " << endl;
bubble_sort(values, data_size);
for (i=0; i<data_size; i++) {
	cout << values[i] << " "; }
getchar();

cout << endl;


cout << " data yang sudah diurutkan (descending) " << endl;
bubble_sort2(values, data_size);
for (i=0; i<data_size; i++) {
	cout << values[i] << " "; }
getchar();
}

