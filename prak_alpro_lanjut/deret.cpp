#include <iostream>
using namespace std;

int deret(int n);
int i,n;

int main(){
    int hasil;
    cout << "Masukkan nilai n : ";
    cin >> n;
    cout << "S(" << n << ") ";

    for (i=1; i<n; i++){
        cout << i << "+";
    }

    cout << n << endl;
    hasil = deret(n);
    cout << "S(" << n << ") " << hasil << endl;
}

int deret (int n){
    if (n==0)
    return 0;
    else {
        return deret (n-1) + n;
    }
}
