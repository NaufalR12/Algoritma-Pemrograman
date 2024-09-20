#include <iostream>
using namespace std;

int main() {
    char huruf[16] = {'A', 'B', 'E', 'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'D', 'E', 'A', 'A'};
    int jumlah = 0;
    
    cout << "Nilai A terletak pada index ke : ";
    for(int i = 0; i < 15; i++) {
        if(huruf[i] == 'A') {
            jumlah++;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Jumlah nilai 'A' ada sebanyak : " << jumlah << endl;
    return 0;
}
