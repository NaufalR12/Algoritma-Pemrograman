#include <iostream> 
using namespace std; 
float S(int n); 
int main()
{ 
	cout << "\nS(3) = "; 
	cout <<" = " << S(3); 
} 

float S(int n){ 
	float p,q,x,deret; 
	int i = n; 
	p = 2*i; 
	q = 3*i + 1; 
	x = p/q; 
	deret = deret + x; 
	if(n == 1){ 
		cout << p << "/" << q << " = "; 
		return deret; } 
	else{ 
		cout << p << "/" << q << " + "; 
		return(x + S(n-1)); } 
}

