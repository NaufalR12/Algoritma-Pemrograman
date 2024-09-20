#include <iostream>
float S(int n);
using namespace std;

main() {
	cout << "\nS (3) = ";
	cout << " = " << S(3);
}

float S(int n) {
	float deret =0,x,p,q;
	int i=n;
	while (i>=1)
	{
		p = 2*i; 
		q = 3*i+1;
		if (i==1) { 
			cout <<p<<"/"<<q; }
		else {
			cout <<p<<"/"<<q<<" + ";}
		x = p/q;
		deret = deret+s(n-1);
	}
	return (deret);
}		
