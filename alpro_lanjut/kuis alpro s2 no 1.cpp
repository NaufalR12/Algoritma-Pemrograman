#include <iostream>
using namespace std;

typedef struct{
    int nomorAnggota;
    string namaAnggota;
    string alamatAnggota;
}dataAnggota;

typedef struct{
    int nomor;
    int kodeBuku;
    int kodeCopybuku;
    string judulBuku;
    string pengarangBuku;
    string penerbitBuku;
}dataBuku;

typedef struct{
    dataAnggota anggota;
    int nomorPinjam;
    int tanggalPinjam;
    int tanggalHarusKembali;
    dataBuku buku[5];
}dataPeminjaman;

int main(){
    dataPeminjaman peminjam[10];
    for(int i = 0;i < 10;i++){
        cout<<"Peminjam ke-"<<i+1<<endl;
        cout<<"Data Anggota"<<endl;
        cout<<"Masukkan nomor anggota = "; cin>>peminjam[i].anggota.nomorAnggota;
        cin.ignore(); 
        cout<<"Masukkan nama anggota = "; getline(cin,peminjam[i].anggota.namaAnggota);
        cin.ignore();
        cout<<"Masukkan alamat anggota = "; getline(cin,peminjam[i].anggota.alamatAnggota);
        cout<<"\nData peminjaman"<<endl;
        cout<<"Masukkan nomor pinjam = "; cin>>peminjam[i].nomorPinjam;
        cout<<"Masukkan tanggal pinjam = "; cin>>peminjam[i].tanggalPinjam;
        cout<<"Masukkan tanggal harus kembali = "; cin>>peminjam[i].tanggalHarusKembali;
        for(int j = 0;j < 5;j++){
            cout<<"\nData buku ke-"<<j+1<<endl;
            cout<<"Masukkan nomor = "; cin>>peminjam[i].buku[j].nomor;
            cout<<"Masukkan kode buku = "; cin>>peminjam[i].buku[j].kodeBuku;
            cout<<"Masukkan kode copy buku = "; cin>>peminjam[i].buku[j].kodeCopybuku;
            cout<<"Masukkan judul buku = ";
            cin.ignore();
            getline(cin,peminjam[i].buku[j].judulBuku);
            cout<<"Masukkan pengarang buku = ";
            cin.ignore();
            getline(cin,peminjam[i].buku[j].pengarangBuku);
            cout<<"Masukkan penerbit buku = ";
            cin.ignore();
            getline(cin,peminjam[i].buku[j].penerbitBuku);
        }
    }
    return 0;
}
