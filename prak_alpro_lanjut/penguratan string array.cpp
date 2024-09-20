#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int n),input();
int n;
string arr[n];


int main() {
    

    /*cout << "String setelah diurutkan: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; */

    return 0;
}

void input() {

    cout << "Masukkan jumlah string: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cout << "Masukkan string ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    bubbleSort(arr, n);
}

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
