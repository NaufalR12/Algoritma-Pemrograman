#include<iostream>
using namespace std;
int X(int n);
main()
{
int n;
cout<<"masukkan n = "; cin>>n;
//masukkan digit terakhir NIM Anda
if (n>=4) n=6;
if ((n==2)||(n==3)) n=5;
if ((n==0)||(n==1)) n=n+6;
cout <<"\n yang diproses = "<<n <<endl;
cout <<"\nAngka ke-"<<n<<" = "<<X(n);
}


int X(int n)
{
if ((n==1)||(n==2)||(n==3))
{
cout << "\nA ";
return (n);
}else
{
cout << "A ";
return ( X(n-1)+X(n-2));
}
}
