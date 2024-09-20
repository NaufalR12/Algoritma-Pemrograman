#include <iostream>
using namespace std;

int main()
{
   string X[6] = {"sani", "sayang", "visen", "dina", "fatur"};
   int i; 
   string nilaiCari;
   bool found;

   cout << "Nilai yang dicari = "; cin >> nilaiCari;

   X[5] = nilaiCari;
   found = false;
   i=0;
   while(!found){
      if(X[i] == nilaiCari) 
	  found = true;
      else i = i + 1;
}

   if(i == 5)
      cout << "tidak ada " << nilaiCari << " dalam Array" << endl;
   else
      cout << nilaiCari << " ditemukan dalam Array pada index ke-" << i << endl;
}
