#include <iostream>
using namespace std;
int main ()

{
    cout<<"program matriks"<<endl<<"www.kangghani.com"<<endl<<endl;
  int a[25][25];
  int kolom, baris;
  cout<<"masukkan jumlah baris: ";
  cin>>baris;
  cout<<"masukkan jumlah kolom: ";
  cin>>kolom;
  for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom
                cout<<"masukkan data baris ke "<<i<<" kolom ke "<<b<<" : ";
                cin>>a[i][b];
            }
      }
      
    cout<<endl<<"tampilkan"<<endl<<endl;
    for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom   
                cout<<a[i][b];
            }
            cout<<endl;
      }
      return 0;
}
