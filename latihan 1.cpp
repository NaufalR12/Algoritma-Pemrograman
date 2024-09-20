#include <iostream>
#include <limits>

using namespace std;

int main ()
{
       cout << "ukuran sebuah 'short' : " << sizeof (short) << " byte" << endl;
       cout << "min nilai 'short' : " << numeric_limits<short>::min() << endl;
       cout << "max nilai 'short' : " << numeric_limits<short>::max() << endl << endl;
       cout << "ukuran sebuah 'int' : " << sizeof(int) << "byte" << endl;
       cout << "min nilai 'int' : " << numeric_limits<int>::min() << endl;
       cout << "max nilai 'int' : " << numeric_limits<int>::max() << endl << endl;
       cout << "ukuran sebuah 'long long': " << sizeof(long long) << "byte" << endl;
       cout << "min nilai long : " << numeric_limits<long long>::min() << endl;
       cout << "max nilai long : " << numeric_limits<long long>::max() << endl;
       
       return 1;
}
       
