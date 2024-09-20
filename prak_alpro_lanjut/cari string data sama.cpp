#include <iostream>
#include <string>

using namespace std;

int main() {
    // Inisialisasi data
    string data[] = {"apel", "apel", "pisang", "mangga", "durian"};
    int n = 5;

    // Input kata kunci untuk pencarian
    string kataKunci;
    cout << "Masukkan kata kunci: ";
    cin >> kataKunci;

    // Buat array baru untuk menyimpan indeks elemen yang ditemukan
    int indeksDitemukan[n];
    int j = 0;

    // Lakukan pencarian secara linear
    for (int i = 0; i < n; i++) {
        if (data[i] == kataKunci) {
            indeksDitemukan[j] = i;
            j++;
        }
    }

    // Tampilkan hasil pencarian
    if (j > 0) {
        cout << "Data ditemukan pada indeks: ";
        for (int k = 0; k < j; k++) {
            cout << indeksDitemukan[k] << " ";
        }
        cout << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
