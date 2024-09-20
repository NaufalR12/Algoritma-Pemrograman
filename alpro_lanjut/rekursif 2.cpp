#include <iostream>
using namespace std;

main()
{
int A[2][2]={{11,22},{33,44}};
int B[2][2]={{55,66},{77,88}};
int C[2][2],i,j;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
if (i==j) {C[i][j]=B[i][j]-A[j][i];
  cout << C[i][j] << " = " << B[i][j] << "-" << A[j][i] << endl;
  }
else C[i][j]=A[j][i]+B[j][i]
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
cout << C[i][j] << " ";
cout << endl;
}
}
