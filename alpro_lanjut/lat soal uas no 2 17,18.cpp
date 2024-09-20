#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    int *a, *b, *c, **d, e[3] = {10, 20, 30}, f = 40;
    a = e;
    b = &f;
    c = &f;
    d = &c;

    cout << "dea\n";
    cout << *a <<" "<< *b << " "<<*c << " "<<**d <<" "<< e[0] <<" "<< e[1] <<" "<< e[2] << "\n";

    //perintah tambahan
    a = &e[1];
    c = a;
    *a = *c + f;
    d = &a;
    a = b;
    b = e;
    e[0] = *(b + 1);
    *(b + 2) = **d;

    cout << e[0] << " " << e[1] << " " << e[2] << " " << *a << " " << *b << " " << *c << " ";
    cout << **d << " " << f << endl;

    return 0;
}
