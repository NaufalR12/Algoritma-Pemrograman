//Program Soal_No_1a_dan_1b
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct {int id; char Kelas;} Data;
FILE *p1,*p2,*p3;

int main()
{
	Data DataKelas[6], temp;
	int j,i,k,x,jarak;
	p1 = fopen("Kelas1.txt","r"); p2 = fopen("Kelas2.txt","r");
	p3 = fopen("Kelas3.txt","w");
	for(j=0;j<6;j++)
	{ 
		if(j<3) fread(&DataKelas[j],sizeof(DataKelas[j]),1,p1);
		else fread(&DataKelas[j],sizeof(DataKelas[j]),1,p2);
	}
	for(int a=0;a<j;a++) {
	cout << DataKelas[a].Kelas <<" "; cout<<endl; } //no.1b
	//sorting
	for(jarak=j/2;jarak>0;jarak/=2) { 
		for(i=jarak;i<j;i++) {
			temp= DataKelas[i];
			for(k=i;k>=jarak&&DataKelas[k-jarak].Kelas< temp.Kelas;k-=jarak) {
				DataKelas[k]=DataKelas[k-jarak];
			}
			DataKelas[k]=temp;
		for(int a=0;a<j;a++) {
			cout << DataKelas[a].Kelas <<" "; cout<<endl; //no.1b
		}
		}
	}
	for(x=0;x<j;x++) {
	fwrite(&DataKelas[x],sizeof(DataKelas[x]),1,p3); }//no.1a
	fclose(p1); fclose(p2); fclose(p3);
}
