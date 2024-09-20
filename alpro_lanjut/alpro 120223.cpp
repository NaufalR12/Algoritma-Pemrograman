#include <iostream>
using namespace std;
int main ()
{
	int A[2][2]={{1,2},
				 {4,5}};
	int B[2][1]={{1},
				 {2}};
	int C[2][1];
	int i,j;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			{
				C[i][j] = A[i][j]+ B[i][j];
			}
	}
	
	/*
	cout << "\ninput\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		cout << "A[" << i << "][" << j << "]=";
		cin >> A [i][j];
	    }
	}
	*/
	
	
	cout << "\noutput\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		cout << C[i][j] << " ";
	    }
	    cout << endl;
	}
}

