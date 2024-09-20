#include <iostream>
#include <iomanip>
using namespace std;

void mata_kuliah(), cetak_krs();

string nama_mhs, nama_doswal, nim_mhs, kode_prodi, prodi;
string kode_matkul[100], nama_matkul[100], konversi_nilai[100];
int n, i, point[100], jumlah_matkul, sks[100] = {}, nilai_akhir[100] = {}, total_sks, total_point;
float indexp;

int main()
{
    cout << "[===================] LATIHAN RESPONSI [=====================]" << endl;
    cout << "Nama               : ";
    getline(cin, nama_mhs);
    cout << "NIM                : ";
    cin >> nim_mhs;
    cin.sync();
    cout << "Nama Dosen Wali    : ";
    getline(cin, nama_doswal);
    cout << "Jumlah Mata Kuliah : ";
    cin >> jumlah_matkul;

    kode_prodi = nim_mhs.substr(0, 3);

    if (kode_prodi == "121")
    {
        prodi = "Teknik Kimia D3";
    }
    else if (kode_prodi == "122")
    {
        prodi = "Teknik Industri";
    }
    else if (kode_prodi == "123")
    {
        prodi = "Teknik Informatika";
    }
    else if (kode_prodi == "124")
    {
        prodi = "Teknik Kimia";
    }
    else
    {
        cout << "Error";
    }
    system("pause");
    system("cls");
    mata_kuliah();
}

void mata_kuliah()
{
    for (i = 0; i < jumlah_matkul; i++)
    {
        cout << "Mata Kuliah ke-" << i + 1 << endl;
        cin.sync();
        cout << "Kode Mata Kuliah             : ";
        getline(cin, kode_matkul[i]);
        cout << "Nama Mata Kuliah             : ";
        getline(cin, nama_matkul[i]);
        cout << "Satuan Kredit Semester (SKS) : ";
        cin >> sks[i];
        cout << "Nilai Akhir Mata Kuliah      : ";
        cin >> nilai_akhir[i];
        cout << endl;
    }

    for (i = 0; i < jumlah_matkul; i++)
    {
        if (nilai_akhir[i] > 80 && nilai_akhir[i] <= 100)
        {
            konversi_nilai[i] = "A";
            point[i] = sks[i] * 4;
        }
        else if (nilai_akhir[i] > 60)
        {
            konversi_nilai[i] = "B";
            point[i] = sks[i] * 3;
        }
        else if (nilai_akhir[i] > 40)
        {
            konversi_nilai[i] = "C";
            point[i] = sks[i] * 2;
        }
        else if (nilai_akhir[i] > 20)
        {
            konversi_nilai[i] = "D";
            point[i] = sks[i] * 1;
        }
        else if (nilai_akhir[i] >= 0)
        {
            konversi_nilai[i] = "E";
            point[i] = sks[i] * 0;
        }
        else
        {
            cout << "Input Salah - Check Nilai (0 - 100)" << endl;
        }
    }

    system("pause");
    system("cls");
    cetak_krs();
}

void cetak_krs()
{
    cout << "Universitas Pembangunan Nasional \"Veteran\" Yogyakarta" << endl;
    cout << "Fakultas Teknik Industri" << endl;
    cout << prodi;
    cout << endl;
    cout << "NIM            : " << nim_mhs << endl;
    cout << "Nama           : " << nama_mhs << endl;
    cout << "Angkatan       : 20" << nim_mhs[3] << nim_mhs[4] << endl
         << endl;

    cout << "K A R T U  H A S I L  S T U D I" << endl;
    cout << "+" << setfill('-') << setw(96) << "+" << endl;
    cout << "| No\t"
         << "| Kode Mata Kuliah\t"
         << "| Mata Kuliah\t"
         << "| SKS\t"
         << "| Nilai Angka\t"
         << "| Nilai Nuruf\t"
         << "| Total\t|" << endl;
    cout << "+" << setfill('-') << setw(96) << "+" << endl;

    for (i = 0; i < jumlah_matkul; i++)
    {
        cout << "| " << i + 1 << "\t| " << kode_matkul[i] << "\t\t\t| " << nama_matkul[i] << "\t| " << sks[i] << "\t| " << nilai_akhir[i] << "\t\t| " << konversi_nilai[i] << "\t\t| " << point[i] << "\t| " << endl;
    }
    cout << "+" << setfill('-') << setw(96) << "+" << endl;

    for (i = 0; i < jumlah_matkul; i++)
    {
        total_sks = total_sks + sks[i];
        total_point = total_point + point[i];
    }

    indexp = total_point / total_sks;

    cout << endl
         << endl;
    cout << "Total SKS       : " << total_sks << endl;
    cout << "Total Nilai     : " << total_point << endl;
    cout << "IP              : " << indexp << endl
         << endl
         << endl;

    cout << "Mengetahui," << endl;
    cout << "Dosen Wali" << endl
         << endl
         << endl;
    cout << nama_doswal << endl;
}
