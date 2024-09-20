#include <iostream>
using namespace std;

int main() {
    char data[15] = {'A','B','E','A','B','C','D','E','A','B','C','D','E','A','A'};
    int count[26] = {0}; // array untuk menyimpan jumlah huruf yang sama
    
    for(int i = 0; i < 15; i++) {
        count[data[i] - 'A']++; // increment jumlah huruf di array count
    }
    
    // menampilkan jumlah huruf yang sama dan huruf yang paling banyak
    int maxCount = 0;
    char maxChar;
    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            cout << (char)(i + 'A') << " = " << count[i] << endl;
            if(count[i] > maxCount) {
                maxCount = count[i];
                maxChar = i + 'A';
            }
        }
    }
    
    cout << "Huruf yang paling banyak muncul adalah " << maxChar << " dengan jumlah " << maxCount << endl;
    
    return 0;
}
