#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
	char nama[30];
	int nim;
	float score[2];
} mahasiswa;

mahasiswa mhs [100];
int banyakmhs,i,j;

int main(){
cout << "Banyak mahasiswa = "; cin >> banyakmhs;
cout << endl << endl;
for(i = 0; i < banyakmhs; i++){
	cout << "Name : "; cin >>  mhs[i].nama;
	cout << "ID : "; cin >> mhs[i].nim;
		
	for (j=0; j< 2; j++){
		cout << "Score[" << j+1 <<"] : "; cin >> mhs[i].score[j];
		
	}
	cout << endl << endl;
}

for(i = 0; i < banyakmhs; i++){
	cout << "Name : " <<mhs[i].nama<<endl;
	cout << "ID : " << mhs[i].nim<<endl;
		
	for (j=0; j< 2; j++){
		cout << "Score[" << j+1 <<"] : " << mhs[i].score[j];
		cout << endl;
	}
	cout << endl << endl;
}
}
