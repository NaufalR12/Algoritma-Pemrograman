#include <iostream>
using namespace std;
 
int main()
{
  int a,b,c,panjang;
  panjang=9;
 
  for(a=1;a<=panjang;a++) {
 
    for(b=1;b<=panjang-a;b++) {
      cout << " "; }
 
    for(c=1;c<=a;c++) {
      cout << " *"; }
    cout << endl;
  }
 
  for(a=1;a<panjang;a++) {
 
    for(b=1;b<=a;b++) {
      cout << " "; }
 
    for(c=1;c<=panjang-a;c++) {
      cout << " *"; }
    cout << endl;
  }
 
  return 0;
}
