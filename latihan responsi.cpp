#include <iostream>
#include <iomanip>
using namespace std;
void matkul(),cetak_krs();

string nama_mhs, nama_doswal,nim,kode_prodi,prodi;
string kode_matkul[100],nama_matkul[100],nilai_huruf[100];
int jumlah_matkul,n,sks[100],nilai_akhir[100],total[100];
float total_nilai=0,total_sks=0;
float indexp;

int main () {
	cout << setfill('=') << setw(70) << "=" << endl;
	cout << setfill(' ') << setw(28) << " " << "INPUT DATA KRS" << setfill(' ') << setw(28) << " " << endl;
	cout << setfill('=') << setw(70) << "=" << endl;
	
	cin.sync();
	cout << " Nama                  : "; getline(cin, nama_mhs);
	cout << " NIM                   : "; cin >> nim;
	cin.ignore();
	cout << " Dosen Wali            : "; getline(cin, nama_doswal);
	cout << " Jumlah Mata Kuliah    : "; cin >> jumlah_matkul;
	
	kode_prodi = nim.substr(0, 3);
	
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
    matkul();
	return 0; }
	
void matkul() {
	system("cls");
	for (n = 0; n < jumlah_matkul; n++) {
		cout << setfill('=') << setw(70) << "=" << endl;
		cout << " Mata Kuliah ke-" << n + 1 << endl;
        cin.sync();
        cout << " Kode Mata Kuliah             : "; getline(cin, kode_matkul[n]);
        cout << " Nama Mata Kuliah             : "; getline(cin, nama_matkul[n]);
        cout << " Satuan Kredit Semester (SKS) : "; cin >> sks[n];
        cout << " Nilai Akhir Mata Kuliah      : "; cin >> nilai_akhir[n];
        cout << setfill('=') << setw(70) << "=" << endl;
        cout << endl; }
        
    for (n = 0; n < jumlah_matkul; n++)
    {
        if (nilai_akhir[n] > 80 && nilai_akhir[n] <= 100)
        {
            nilai_huruf[n] = "A";
            total[n] = sks[n] * 4;
        }
        else if (nilai_akhir[n] > 60 )
        {
            nilai_huruf[n] = "B";
            total[n] = sks[n] * 3;
        }
        else if (nilai_akhir[n] > 40 )
        {
            nilai_huruf[n] = "C";
            total[n] = sks[n] * 2;
        }
        else if (nilai_akhir[n] > 20 )
        {
            nilai_huruf[n] = "D";
            total[n] = sks[n] * 1;
        }
        else if (nilai_akhir[n] >= 0)
        {
            nilai_huruf[n] = "E";
            total[n] = sks[n] * 0;
        }
        else
        {
            cout << "Input Salah - Check Nilai (0 - 100)" << endl;
        }
    } 
    system("pause");
    cetak_krs();
}

void cetak_krs() {
	system("cls");
	cout << "Universitas Pembangunan Nasional \"Veteran\" Yogyakarta" << endl;
    cout << "Fakultas Teknik Industri" << endl;
    cout << prodi;
    cout << endl;
    cout << "NIM            : " << nim << endl;
    cout << "Nama           : " << nama_mhs << endl;
    cout << "Angkatan       : 20" << nim.substr(3,2) << endl
         << endl;

    cout << "K A R T U  H A S I L  S T U D I" << endl;
    cout << "+" << setfill('-') << setw(104) << "+" << endl;
    cout << "| No\t"
         << "| Kode Mata Kuliah\t"
         << "| \tMata Kuliah\t"
         << "| SKS\t"
         << "| Nilai Angka\t"
         << "| Nilai Nuruf\t"
         << "| Total\t|" << endl;
    cout << "+" << setfill('-') << setw(104) << "+" << endl;

    for (n = 0; n < jumlah_matkul; n++)
    {
        cout << "| " << n + 1 
			 << "\t| " << kode_matkul[n] 
			 << "\t\t\t| " << nama_matkul[n] 
			 << "\t\t\t| " << sks[n] << "\t| " 
			 << nilai_akhir[n] << "\t\t| " 
			 << nilai_huruf[n] << "\t\t| " 
			 << total[n] << "\t| " << endl;
    }
    cout << "+" << setfill('-') << setw(104) << "+" << endl;

    for (n = 0; n < jumlah_matkul; n++)
    {
        total_sks = total_sks + sks[n];
        total_nilai = total_nilai + total[n];
    }

    indexp = total_nilai / total_sks;

    cout << endl
         << endl;
    cout << "Total SKS       : " << total_sks << endl;
    cout << "Total Nilai     : " << total_nilai << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << "IP              : " << indexp << endl
         << endl
         << endl;

    cout << "Mengetahui," << endl;
    cout << "Dosen Wali" << endl
         << endl
         << endl;
    cout << nama_doswal << endl;
}
