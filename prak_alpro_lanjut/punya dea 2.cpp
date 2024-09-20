#include <iostream>
using namespace std;

void segitiga(int n);

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    segitiga(n);
    return 0;
}

void segitiga(int n) {
    if (n == 0) {
        return;
    }
    segitiga(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
}
