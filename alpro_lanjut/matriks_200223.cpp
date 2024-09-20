#include <iostream>
using namespace std;

int main () {

	//int A[3]={2,3,4};
	//int matriks[2][3]={{2,3,4},{5,6,7}};


	int matriks[3][2][2]= 
	{
		{
			{ 1,2},{3,4 }
		},
		{
			{5,6},{7,8}
		},
		{ 
			{10,11},{12,13}
		}
	};

	int i,j,k;
	
	for (i=0; i<3; i++){
		for (j=0; j<2; j++) {
			cout << "|" ;
			for (k=0; k<2; k++) {
				cout << matriks[i][j][k] << " ";
			}
		cout << "| " << endl;
		}
	cout << endl;
	}
}
	
