#include <iostream>
#include <iomanip>
using namespace std;


int main{
		cout<<left<<setw(12)<<setfill('-')<<'\n'<<endl<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(5)<<setfill(' ')<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<setfill('-')<<setw(12)<<'\n'<<setfill('=')<<setw(82)<<'\n'<<endl;
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"NIK"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"NAMA"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<< nama[c]<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"ALAMAT"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<alamat[c]<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"TEMPAT/TGL.LAHIR"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<tgl_lahir[c]<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"JENIS KELAMIN"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<jenis[c]<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"AGAMA"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<agama[c]<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"STATUS"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<status[c]<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"PEKERJAAN"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<pekerjaan[c]<<left<<setw(5)<<setfill(' ')<<"|"<<"\n";
		cout<<left<<setw(5)<<setfill(' ')<<"|"<<left<<setw(20)<<setfill(' ')<<"KEWARGANEGARAAN"<<left<<setw(5)<<setfill(' ')<<"|";
		cout<<left<<setw(50)<<setfill(' ')<<kewarganegaraan[c]<<"|"<<setfill('=')<<setw(82)<<'\n'<<endl;
	}
