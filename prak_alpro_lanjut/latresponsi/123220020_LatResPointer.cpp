#include <iostream>
using namespace std;

int main() {
  int a;
  int *pa = &a;
  int *pb = pa;

    cout << "========================" << endl;
    cout << "    -+-  POINTER -+-    " << endl;
    cout << "========================" << endl;
  cout << "Input a : " ;
  cin >> a;
  int c = a + 30;
  cout << "Nilai a : " << *pa << " (Memory Address : " << pa << ")" << endl;
  cout << "Nilai b : " << *pb  << " (Memory Address : " << pb << ")" << endl;
  cout << "Nilai c : " << c  << " (Memory Address : " << &c << ")" << endl;
  cout << endl;

  cout << "b + 10 " << endl;
  cout << "Nilai a : " << *pa + 10 << " (Memory Address : " << pa<< ")" << endl;
  cout << "Nilai b : " << *pb + 10 << " (Memory Address : " << pb << ")" << endl;
  return 0;
}
