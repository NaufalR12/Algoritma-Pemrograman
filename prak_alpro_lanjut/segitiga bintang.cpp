/*#include <iostream>
using namespace std;

void printStars(int n) {
    if (n == 0) {
        return;
    }
    printStars(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    printStars(n);
    return 0;
}
*/
#include <iostream>

void printSpaces(int n) {
    if (n <= 0) {
        return;
    }
    std::cout << " ";
    printSpaces(n-1);
}

void printStars(int n) {
    if (n <= 0) {
        std::cout << std::endl;
        return;
    }
    std::cout << "*";
    printStars(n-1);
}

void printTriangle(int n, int i) {
    if (i > n) {
        return;
    }
    printSpaces(n-i);
    printStars(2*i-1);
    printTriangle(n, i+1);
}

int main() {
    int n;
    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> n;
    printTriangle(n, 1);
    return 0;
}
