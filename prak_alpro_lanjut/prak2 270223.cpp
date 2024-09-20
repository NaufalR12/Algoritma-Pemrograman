#include <iostream> 
using namespace std;

int faktorial(int a);

int main() 
{
	int n;
	cout << "Masukkan bilangan : "; cin >> n;
	cout << "Faktorial " << n << " = " << faktorial(n) << endl;
}

int faktorial (int a)
{
	int hasil;
	if (a <= 1) {
		hasil =1; }
	else {
		hasil = a* faktorial(a-1);
	}	
		return hasil; 
}
