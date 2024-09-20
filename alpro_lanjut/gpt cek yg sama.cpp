#include <iostream>
using namespace std;

int main() {
    char arr[15] = {'A','B','E','A','B','C','D','E','A','B','C','D','E','A','A'};
    int count[256] = {0}; // array untuk menyimpan jumlah karakter yang sama
    
    for(int i = 0; arr[i] != '\0'; i++) {
        count[arr[i]]++; // increment jumlah karakter di array count
    }
    
    // menampilkan jumlah karakter yang sama
    for(int i = 0; i < 256; i++) {
        if(count[i] > 0) {
            cout << (char)i << " = " << count[i] << endl;
        }
    }
    
    return 0;
}
