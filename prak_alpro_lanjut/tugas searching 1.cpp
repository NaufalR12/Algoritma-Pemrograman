#include <iostream>
using namespace std;
main()
{
 int X[100];
 int i,j,k;
 bool found;
 int y; 
 cout << "jumlah inputan = "; cin >> j;
 for (i=0; i<j; i++) {
	 cout << "nilai ke " << i+1 << "= "; 
	 cin >> X[i];
}


 cout << "nilai yang dicari = "; cin >> y;

 found = false;
 i=0;
 while ((!found) & (i <= j))
 {
	 k=(i+j)/2;
	 if (y == X[k])
		found=true;
	 else
		if (y<X[k])
			j=k-1;    //i tetap
		else
			i=k+1; //j tetap
 }
 if (found)
	cout<< y<<" ditemukan dalam Array pada index ke-" << k;
 else
	cout << "tidak ada " << y << " dalam Array";
}
