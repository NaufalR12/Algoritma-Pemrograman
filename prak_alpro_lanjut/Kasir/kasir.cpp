#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Penjualan {
    string namaBarang;
    int jumlah;
    double hargaSatuan;
    double totalHarga;
};

void tambahDataPenjualan(Penjualan data[], int& jumlahData) {
    cout << "Masukkan nama barang: ";
    cin.ignore();
    getline(cin, data[jumlahData].namaBarang);
    
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> data[jumlahData].jumlah;
    
    cout << "Masukkan harga satuan: ";
    cin >> data[jumlahData].hargaSatuan;
    
    data[jumlahData].totalHarga = data[jumlahData].jumlah * data[jumlahData].hargaSatuan;
    
    jumlahData++;
}

void tampilkanDataPenjualan(Penjualan data[], int jumlahData) {
    cout << "Data Penjualan:" << endl;
    cout << "=====================================" << endl;
    for (int i = 0; i < jumlahData; i++) {
        cout << "Nama Barang: " << data[i].namaBarang << endl;
        cout << "Jumlah: " << data[i].jumlah << endl;
        cout << "Harga Satuan: " << data[i].hargaSatuan << endl;
        cout << "Total Harga: " << data[i].totalHarga << endl;
        cout << "-------------------------------------" << endl;
    }
    cout << "=====================================" << endl;
}

void simpanDataKeFile(Penjualan data[], int jumlahData) {
    ofstream file("penjualan.txt");
    if (file.is_open()) {
        for (int i = 0; i < jumlahData; i++) {
            file << data[i].namaBarang << endl;
            file << data[i].jumlah << endl;
            file << data[i].hargaSatuan << endl;
            file << data[i].totalHarga << endl;
        }
        file.close();
        cout << "Data penjualan berhasil disimpan ke file." << endl;
    } else {
        cout << "Gagal membuka file penjualan.txt." << endl;
    }
}

void ubahDataPenjualan(Penjualan data[], int jumlahData) {
    tampilkanDataPenjualan(data, jumlahData);
    int nomorData;
    cout << "Masukkan nomor data penjualan yang ingin diubah: ";
    cin >> nomorData;
    
    if (nomorData >= 1 && nomorData <= jumlahData) {
        cout << "Masukkan harga satuan baru: ";
        cin >> data[nomorData - 1].hargaSatuan;
        
        data[nomorData - 1].totalHarga = data[nomorData - 1].jumlah * data[nomorData - 1].hargaSatuan;
        
        cout << "Data penjualan berhasil diubah." << endl;
    } else {
        cout << "Nomor data penjualan tidak valid." << endl;
    }
}

int main() {
    const int MAX_DATA = 100;
    Penjualan dataPenjualan[MAX_DATA];
    int jumlahData = 0;

    ifstream file("penjualan.txt");
    if (file.is_open()) {
        while (!file.eof()) {
            getline(file, dataPenjualan[jumlahData].namaBarang);
            file >> dataPenjualan[jumlahData].jumlah;
            file >> dataPenjualan[jumlahData].hargaSatuan;
            file >> dataPenjualan[jumlahData].totalHarga;
            file.ignore();
            jumlahData++;
        }
        file.close();
        cout << "Data penjualan berhasil dimuat dari file." << endl;
    } else {
        cout << "File penjualan.txt tidak ditemukan. Membuat file baru." << endl;
    }
    
    int pilihan;
    do {
        cout << "Menu Kasir" << endl;
        cout << "============================" << endl;
        cout << "1. Tambah Data Penjualan" << endl;
        cout << "2. Tampilkan Data Penjualan" << endl;
        cout << "3. Simpan Data Penjualan ke File" << endl;
        cout << "4. Ubah Data Penjualan" << endl;
        cout << "0. Keluar" << endl;
        cout << "============================" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                tambahDataPenjualan(dataPenjualan, jumlahData);
                break;
            case 2:
                tampilkanDataPenjualan(dataPenjualan, jumlahData);
                break;
            case 3:
                simpanDataKeFile(dataPenjualan, jumlahData);
                break;
            case 4:
                ubahDataPenjualan(dataPenjualan, jumlahData);
                break;
            case 0:
                cout << "Terima kasih. Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (pilihan != 0);

    return 0;
}

