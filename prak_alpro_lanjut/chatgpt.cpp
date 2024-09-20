#include <iostream>
#include <string>
using namespace std;

int binarySearch(string arr[], int n, string key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Masukkan jumlah string: ";
    cin >> n;

    string arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan string ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    string key;
    cout << "Masukkan string yang ingin dicari: ";
    cin >> key;

    int result = binarySearch(arr, n, key);
    if (result == -1) {
        cout << "String tidak ditemukan." << endl;
    }
    else {
        cout << "String ditemukan pada indeks ke-" << result << endl;
    }

    return 0;
}
