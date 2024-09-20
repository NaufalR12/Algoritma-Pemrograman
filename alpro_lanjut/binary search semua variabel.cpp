#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x, int indeksDitemukan[]) {
    int low = 0, high = n-1, mid, count = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            indeksDitemukan[count] = mid;
            count++;
            int i = mid-1, j = mid+1;
            while (i >= low && arr[i] == x) {
                indeksDitemukan[count] = i;
                count++;
                i--;
            }
            while (j <= high && arr[j] == x) {
                indeksDitemukan[count] = j;
                count++;
                j++;
            }
            return count;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return count;
}

void displayValues(int arr[], int indeksDitemukan[], int count) {
    if (count > 0) {
        cout << "Nilai ditemukan pada indeks: ";
        for (int i = 0; i < count; i++) {
            cout << indeksDitemukan[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Nilai tidak ditemukan" << endl;
    }
}

int main() {
    int arr[] = {12, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    int indeksDitemukan[n]; // Menyimpan indeks yang ditemukan
    int count = binarySearch(arr, n, target, indeksDitemukan);
    
    displayValues(arr, indeksDitemukan, count);

    return 0;
}
