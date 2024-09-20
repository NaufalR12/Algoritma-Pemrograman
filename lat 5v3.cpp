#include <iostream>
using namespace std;

int main () {
int nim;

cout << "masukan 3 digit nim terakhir : ";
cin >> nim;
cout << endl;

if (nim>=001 && nim<= 025)
{
	cout<< "anda masuk kelas A"<<endl;
}
else if (nim>=026 && nim<= 050)
{
	cout<< "anda masuk kelas B"<<endl;
}
else if (nim>=051 && nim<= 075)
{
	cout<< "anda masuk kelas C"<<endl;
}
else if (nim>=076 && nim<= 100)
{
	cout<< "anda masuk kelas D"<<endl;
}
else 
{
	cout<< "INPUT ANDA SALAH"<<endl;
}
return 0;
}
