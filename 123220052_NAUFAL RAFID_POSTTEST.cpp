#include <iostream>
using namespace std;

int jumlah(int, int); 

int main () 
{
	int x,y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y; 
	cout << x << " + " << y << " = " << jumlah(x,y);
	return 0;
}

int jumlah(int x, int y)
{
	return(x+y);
}
