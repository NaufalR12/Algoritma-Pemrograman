#include <iostream>
using namespace std;

float S(int n) {
    if (n == 1) {
        cout << "2/4";
        return 2.0/4.0;
    } else {
        float p = 2*n;
        float q = 3*n + 1;
        cout << p << "/" << q << " + ";
        float hasil = p/q;
        return hasil + S(n-1);
    }
}

int main() {
    cout << "\nS (3) = ";
    cout << " = " << S(3);
    return 0;
}
