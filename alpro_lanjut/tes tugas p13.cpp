#include <iostream>
#include <iomanip>
#include <fstream>
#include <iomanip>
using namespace std;

struct dataPenduduk
{
    string nama;
    int nomorKtp;
    string status;
    string golonganDarah;
};

string replaceSpasi(string str);
string replaceUnderscore(string str);
void inputData(dataPenduduk data[]);
void outputData(dataPenduduk data[]);
void sequentialSearch(dataPenduduk data[], string file);
void binarySearch(dataPenduduk data[], string file);
void bubbleSort(dataPenduduk data[], string file);
void selectionSort(dataPenduduk data[], string file);
void insertionSort(dataPenduduk data[], string file);
void shellSort(dataPenduduk data[], string file);
void mergeSambung(dataPenduduk data[], string file);
void updatingData(dataPenduduk data[], string file);

int main()
{
    dataPenduduk penduduk[100], tempPenduduk[100];
    string menuAwal, menuSearching, menuSorting, menuTransaksi;
    string menuSequentialSearch, menuBinarySearch;
    string menuBubbleSort, menuSelectionSort, menuInsertionSort, menuShellSort, menuQuickSort;
    string menuMergingSambung, menuUpdating;
    string namaFile;
    int pilihMenuAwal, menuSearching2, menuSorting2, menuTransaksi2;

    do
    {
        cout << "Tugas Project Algo Lanjut 2022" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Searching Data" << endl;
        cout << "4. Sorting Data" << endl;
        cout << "5. Transaksi" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih Menu: ";
        cin >> pilihMenuAwal;
        system("cls");

        if (pilihMenuAwal == 1)
        {
            inputData(penduduk);
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 2)
        {
            outputData(tempPenduduk);
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 3)
        {
            do
            {
                system("cls");
                cout << "Cari Data Kependudukan" << endl;
                cout << "1. Sequential" << endl;
                cout << "2. Binary" << endl;
                cout << "Pilih Menu: ";
                cin >> menuSearching2;
                system("cls");
                if (menuSearching2 == 1)
                {
                    do
                    {
                        system("cls");
                        cout << "Masukkan Nama File : ";
                        cin >> namaFile;
                        ifstream ifs(namaFile);
                        if (ifs.is_open())
                        {
                            sequentialSearch(tempPenduduk, namaFile);
                        }
                        else
                        {
                            cout << "File tidak ditemukan" << endl;
                        }
                        cout << "\nKembali ke Menu Sequential Search? (y/n) ";
                        cin >> menuSequentialSearch;
                    } while (menuSequentialSearch == "y");
                }
                else if (menuSearching2 == 2)
                {
                    do
                    {
                        system("cls");
                        cout << "Masukkan Nama File : ";
                        cin >> namaFile;
                        ifstream ifs(namaFile);
                        if (ifs.is_open())
                        {
                            binarySearch(tempPenduduk, namaFile);
                        }
                        else
                        {
                            cout << "File tidak ditemukan" << endl;
                        }

                        cout << "\nKembali ke Menu Binary Search? (y/n) ";
                        cin >> menuBinarySearch;
                    } while (menuBinarySearch == "y");
                }
                else
                {
                    cout << "Pilihan tidak ada" << endl;
                }
                cout << "\nKembali ke Menu Searching? (y/n) ";
                cin >> menuSearching;

            } while (menuSearching == "y");
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 4)
        {
            do
            {
                system("cls");
                cout << "Pengurutan Data Penduduk" << endl;
                cout << "1. Bubble Sort" << endl;
                cout << "2. Selection Sort" << endl;
                cout << "3. Insertion Sort" << endl;
                cout << "4. Shell Sort" << endl;
                cout << "Pilih Menu: ";
                cin >> menuSorting2;
                if (menuSorting2 == 1)
                {
                    do
                    {
                        system("cls");
                        cout << "Masukkan Nama File : ";
                        cin >> namaFile;
                        ifstream ifs(namaFile);
                        if (ifs.is_open())
                        {
                            bubbleSort(tempPenduduk, namaFile);
                        }
                        else
                        {
                            cout << "File tidak ditemukan" << endl;
                        }

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuBubbleSort;
                    } while (menuBubbleSort == "y");
                }
                else if (menuSorting2 == 2)
                {
                    do
                    {
                        system("cls");
                        cout << "Masukkan Nama File : ";
                        cin >> namaFile;
                        ifstream ifs(namaFile);
                        if (ifs.is_open())
                        {
                            selectionSort(tempPenduduk, namaFile);
                        }
                        else
                        {
                            cout << "File tidak ditemukan" << endl;
                        }

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuSelectionSort;
                    } while (menuSelectionSort == "y");
                }
                else if (menuSorting2 == 3)
                {
                    do
                    {
                        system("cls");
                        cout << "Masukkan Nama File : ";
                        cin >> namaFile;
                        ifstream ifs(namaFile);
                        if (ifs.is_open())
                        {
                            insertionSort(tempPenduduk, namaFile);
                        }
                        else
                        {
                            cout << "File tidak ditemukan" << endl;
                        }

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuInsertionSort;
                    } while (menuInsertionSort == "y");
                }
                else if (menuSorting2 == 4)
                {
                    do
                    {
                        system("cls");
                        cout << "Masukkan Nama File : ";
                        cin >> namaFile;
                        ifstream ifs(namaFile);
                        if (ifs.is_open())
                        {
                            shellSort(tempPenduduk, namaFile);
                        }
                        else
                        {
                            cout << "File tidak ditemukan" << endl;
                        }

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuShellSort;
                    } while (menuShellSort == "y");
                }
                else
                {
                    cout << "Pilihan tidak ada" << endl;
                }
                cout << "\nKembali ke Menu Sorting? (y/n) ";
                cin >> menuSorting;
            } while (menuSorting == "y");
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 5)
        {
            do
            {
                system("cls");
                cout << "Transaksi" << endl;
                cout << "1. Merging Sambung" << endl;
                cout << "2. Updating" << endl;
                cout << "Pilih Menu: ";
                cin >> menuTransaksi2;
                system("cls");
                if (menuTransaksi2 == 1)
                {
                    do
                    {
                        system("cls");
                        mergeSambung(tempPenduduk, namaFile);
                        cout << "Ulangi? (y/n) ";
                        cin >> menuMergingSambung;
                    } while (menuMergingSambung == "y");
                }
                else if (menuTransaksi2 == 2)
                {
                    do
                    {
                        system("cls");
                        updatingData(tempPenduduk, namaFile);
                        cout << "Ulangi? (y/n) ";
                        cin >> menuUpdating;
                    } while (menuUpdating == "y");
                }
                else
                {
                    cout << "Pilihan tidak ada" << endl;
                }
                cout << "\nKembali ke Menu Transaksi? (y/n) ";
                cin >> menuTransaksi;
            } while (menuTransaksi == "y");
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 6)
        {
            cout << "Terima kasih telah menggunakan program ini" << endl;
            return 0;
        }
        else
        {
            cout << "Pilihan tidak ada" << endl;
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }

    } while (menuAwal == "y");
}
string replaceSpasi(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '_';
        }
    }
    return str;
}
string replaceUnderscore(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            str[i] = ' ';
        }
    }
    return str;
}
void inputData(dataPenduduk data[])
{
    string namaFile;
    int banyakData = 0;

    cout << "========================" << endl;
    cout << "INPUT DATA KEPENDUDUKAN" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Nama File : ";
    cin >> namaFile;
    cout << "Banyaknya Data\t: ";
    cin >> banyakData;

    for (int i = 0; i < banyakData; i++)
    {
        cout << "\t Nomor KTP\t: ";
        cin >> data[i].nomorKtp;
        cin.ignore();
        cout << "\t Nama\t\t: ";
        getline(cin, data[i].nama);
        cout << "\t Status\t\t: ";
        cin >> data[i].status;
        cout << "\t Golongan Darah\t: ";
        cin >> data[i].golonganDarah;
        cout << "\n";
    }
    for (int i = 0; i < banyakData; i++)
        data[i].nama = replaceSpasi(data[i].nama);

    ofstream ofs(namaFile, ios::app);
    if (ofs.is_open())
    {
        for (int i = 0; i < banyakData; i++)
        {
            ofs << data[i].nomorKtp << " "
                << data[i].nama << " "
                << data[i].status << " "
                << data[i].golonganDarah << " "
                << endl;
        }
        ofs.close();
    }
}
void outputData(dataPenduduk data[])
{
    int i = 0;
    int jumlahData = 0;
    string namaFile;
    cout << "========================" << endl;
    cout << "OUTPUT DATA KEPENDUDUKAN" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Nama File : ";
    cin >> namaFile;
    ifstream ifs(namaFile);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    jumlahData += i - 1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < jumlahData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}
void sequentialSearch(dataPenduduk data[], string file)
{
    system("cls");
    cout << "============================" << endl;
    cout << "Pencarian Dengan Sequential" << endl;
    cout << "============================" << endl;
    cout << "1. NIK" << endl;
    cout << "2. Nama" << endl;
    cout << "3. Status" << endl;
    cout << "4. Golongan Darah" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (pilih == 1)
    {
        int nik;
        cout << "Masukkan Nomor KTP : ";
        cin >> nik;
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].nomorKtp == nik)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 2)
    {
        string nama;
        cout << "Masukkan Nama : ";
        cin.ignore();
        getline(cin, nama);
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (replaceSpasi(data[i].nama) == replaceSpasi(nama))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 3)
    {
        string status;
        cout << "Masukkan Status : ";
        cin.ignore();
        getline(cin, status);
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (replaceSpasi(data[i].status) == replaceSpasi(status))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 4)
    {
        string golonganDarah;
        cout << "Masukkan Golongan Darah : ";
        cin.ignore();
        getline(cin, golonganDarah);
        bool found = false;
        for (int i = 0; i < banyakData; i++)
        {
            if (replaceSpasi(data[i].golonganDarah) == replaceSpasi(golonganDarah))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }
}
void binarySearch(dataPenduduk data[], string file)
{
    system("cls");
    cout << "============================" << endl;
    cout << "Pencarian Dengan Binary" << endl;
    cout << "============================" << endl;
    cout << "1. NIK" << endl;
    cout << "2. Nama" << endl;
    cout << "3. Status" << endl;
    cout << "4. Golongan Darah" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    banyakData += i - 1;
    if (pilih == 1)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].nomorKtp < data[min].nomorKtp)
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }

        int nik;
        cout << "Masukkan Nomor KTP : ";
        cin >> nik;
        int low = 0, high = banyakData - 1, mid;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (data[mid].nomorKtp == nik)
            {
                found = true;
                break;
            }
            else if (data[mid].nomorKtp < nik)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[mid].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[mid].nama) << endl;
            cout << "Status\t\t: " << data[mid].status << endl;
            cout << "Golongan Darah\t: " << data[mid].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 2)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (replaceSpasi(data[j].nama) < replaceSpasi(data[min].nama))
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        string nama;
        cout << "Masukkan Nama : ";
        cin.ignore();
        getline(cin, nama);
        int low = 0, high = banyakData - 1, mid = 0;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (replaceSpasi(data[mid].nama) == replaceSpasi(nama))
            {
                found = true;
                break;
            }
            else if (replaceSpasi(data[mid].nama) < replaceSpasi(nama))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[mid].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[mid].nama) << endl;
            cout << "Status\t\t: " << data[mid].status << endl;
            cout << "Golongan Darah\t: " << data[mid].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 3)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (replaceSpasi(data[j].status) < replaceSpasi(data[min].status))
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        string status;
        cout << "Masukkan Status : ";
        cin.ignore();
        getline(cin, status);
        int low = 0, high = banyakData - 1, mid;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (replaceSpasi(data[mid].status) == replaceSpasi(status))
            {
                found = true;
                break;
            }
            else if (replaceSpasi(data[mid].status) < replaceSpasi(status))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[mid].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[mid].nama) << endl;
            cout << "Status\t\t: " << data[mid].status << endl;
            cout << "Golongan Darah\t: " << data[mid].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 4)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].golonganDarah < data[min].golonganDarah)
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        string golonganDarah;
        cout << "Masukkan Golongan Darah : ";
        cin >> golonganDarah;
        int low = 0, high = banyakData - 1, mid;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (data[mid].golonganDarah == golonganDarah)
            {
                found = true;
                break;
            }
            else if (data[mid].golonganDarah < golonganDarah)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[mid].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[mid].nama) << endl;
            cout << "Status\t\t: " << data[mid].status << endl;
            cout << "Golongan Darah\t: " << data[mid].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }
}
void bubbleSort(dataPenduduk data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Bubble" << endl;
    cout << "============================" << endl;
    cout << "1. NIK" << endl;
    cout << "2. Nama" << endl;
    cout << "3. Status" << endl;
    cout << "4. Golongan Darah" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (pilih == 1)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            for (int j = 0; j < banyakData - i - 1; j++)
            {
                if (data[j].nomorKtp > data[j + 1].nomorKtp)
                {
                    dataPenduduk temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
    else if (pilih == 2)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            for (int j = 0; j < banyakData - i - 1; j++)
            {
                if (replaceSpasi(data[j].nama) > replaceSpasi(data[j + 1].nama))
                {
                    dataPenduduk temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
    else if (pilih == 3)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            for (int j = 0; j < banyakData - i - 1; j++)
            {
                if (replaceSpasi(data[j].status) > replaceSpasi(data[j + 1].status))
                {
                    dataPenduduk temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
    else if (pilih == 4)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            for (int j = 0; j < banyakData - i - 1; j++)
            {
                if (data[j].golonganDarah > data[j + 1].golonganDarah)
                {
                    dataPenduduk temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }

    cout << "\nData setelah diurutkan" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}
void selectionSort(dataPenduduk data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Selection" << endl;
    cout << "============================" << endl;
    cout << "1. NIK" << endl;
    cout << "2. Nama" << endl;
    cout << "3. Status" << endl;
    cout << "4. Golongan Darah" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (pilih == 1)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].nomorKtp < data[min].nomorKtp)
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    else if (pilih == 2)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (replaceSpasi(data[j].nama) < replaceSpasi(data[min].nama))
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    else if (pilih == 3)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (replaceSpasi(data[j].status) < replaceSpasi(data[min].status))
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    else if (pilih == 4)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].golonganDarah < data[min].golonganDarah)
                {
                    min = j;
                }
            }
            dataPenduduk temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }

    cout << "\nData setelah diurutkan" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}
void insertionSort(dataPenduduk data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Insertion" << endl;
    cout << "============================" << endl;
    cout << "1. NIK" << endl;
    cout << "2. Nama" << endl;
    cout << "3. Status" << endl;
    cout << "4. Golongan Darah" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (pilih == 1)
    {
        for (int i = 1; i < banyakData; i++)
        {
            dataPenduduk temp = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].nomorKtp > temp.nomorKtp)
            {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = temp;
        }
    }
    else if (pilih == 2)
    {
        for (int i = 1; i < banyakData; i++)
        {
            dataPenduduk temp = data[i];
            int j = i - 1;
            while (j >= 0 && replaceSpasi(data[j].nama) > replaceSpasi(temp.nama))
            {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = temp;
        }
    }
    else if (pilih == 3)
    {
        for (int i = 1; i < banyakData; i++)
        {
            dataPenduduk temp = data[i];
            int j = i - 1;
            while (j >= 0 && replaceSpasi(data[j].status) > replaceSpasi(temp.status))
            {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = temp;
        }
    }
    else if (pilih == 4)
    {
        for (int i = 1; i < banyakData; i++)
        {
            dataPenduduk temp = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].golonganDarah > temp.golonganDarah)
            {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = temp;
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }

    cout << "Data setelah diurutkan" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}
void shellSort(dataPenduduk data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Shell" << endl;
    cout << "============================" << endl;
    cout << "1. NIK" << endl;
    cout << "2. Nama" << endl;
    cout << "3. Status" << endl;
    cout << "4. Golongan Darah" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (pilih == 1)
    {
        int gap = banyakData / 2;
        while (gap > 0)
        {
            for (int i = gap; i < banyakData; i++)
            {
                dataPenduduk temp = data[i];
                int j = i;
                while (j >= gap && data[j - gap].nomorKtp > temp.nomorKtp)
                {
                    data[j] = data[j - gap];
                    j -= gap;
                }
                data[j] = temp;
            }
            gap /= 2;
        }
    }
    else if (pilih == 2)
    {
        int gap = banyakData / 2;
        while (gap > 0)
        {
            for (int i = gap; i < banyakData; i++)
            {
                dataPenduduk temp = data[i];
                int j = i;
                while (j >= gap && replaceSpasi(data[j - gap].nama) > replaceSpasi(temp.nama))
                {
                    data[j] = data[j - gap];
                    j -= gap;
                }
                data[j] = temp;
            }
            gap /= 2;
        }
    }
    else if (pilih == 3)
    {
        int gap = banyakData / 2;
        while (gap > 0)
        {
            for (int i = gap; i < banyakData; i++)
            {
                dataPenduduk temp = data[i];
                int j = i;
                while (j >= gap && replaceSpasi(data[j - gap].status) > replaceSpasi(temp.status))
                {
                    data[j] = data[j - gap];
                    j -= gap;
                }
                data[j] = temp;
            }
            gap /= 2;
        }
    }
    else if (pilih == 4)
    {
        int gap = banyakData / 2;
        while (gap > 0)
        {
            for (int i = gap; i < banyakData; i++)
            {
                dataPenduduk temp = data[i];
                int j = i;
                while (j >= gap && data[j - gap].golonganDarah > temp.golonganDarah)
                {
                    data[j] = data[j - gap];
                    j -= gap;
                }
                data[j] = temp;
            }
            gap /= 2;
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }

    cout << "Data setelah diurutkan" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}
void mergeSambung(dataPenduduk data[], string file)
{
    int i = 0, j = 0, banyakData1 = 0, banyakData2 = 0;
    system("cls");
    cout << "============================" << endl;
    cout << "Merging Sambung" << endl;
    cout << "============================" << endl;
    cout << "Nama File : ";
    string file1, file2;
    cin >> file1;

    ifstream ifs1(file1);
    while (!ifs1.eof())
    {
        ifs1 >> data[i].nomorKtp;
        ifs1 >> data[i].nama;
        ifs1 >> data[i].status;
        ifs1 >> data[i].golonganDarah;
        i++;
    }
    ifs1.close();

    banyakData1 += i - 1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData1; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;

    cout << "\nNama File kedua : ";
    cin >> file2;
    ifstream ifs2(file2);
    while (!ifs2.eof())
    {
        ifs2 >> data[j].nomorKtp;
        ifs2 >> data[j].nama;
        ifs2 >> data[j].status;
        ifs2 >> data[j].golonganDarah;
        j++;
    }
    ifs2.close();
    banyakData2 += j - 1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData2; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;

    cout << "\nMasukkan nama file hasil merge : ";
    string file3;
    cin >> file3;
    ofstream ofs(file3);
    if (ofs.is_open())
    {
        for (int i = 0; i < banyakData1; i++)
        {
            ofs << data[i].nomorKtp << " ";
            ofs << data[i].nama << " ";
            ofs << data[i].status << " ";
            ofs << data[i].golonganDarah << endl;
        }
        for (int j = 0; j < banyakData2; j++)
        {
            ofs << data[j].nomorKtp << " ";
            ofs << data[j].nama << " ";
            ofs << data[j].status << " ";
            ofs << data[j].golonganDarah << endl;
        }
        ofs.close();
    }
    cout << "Data berhasil disimpan di file " << file3 << endl;
}
void updatingData(dataPenduduk data[], string file)
{
    string nama, golonganDarah, status;
    system("cls");
    cout << "===============" << endl;
    cout << "Update Data" << endl;
    cout << "===============" << endl;
    int i = 0, banyakData = 0;
    cout << "Masukkan Nama File : ";
    cin >> file;
    ifstream ifs(file);
    if (ifs.is_open())
    {
        while (!ifs.eof())
        {
            ifs >> data[i].nomorKtp;
            ifs >> data[i].nama;
            ifs >> data[i].status;
            ifs >> data[i].golonganDarah;
            i++;
        }
        ifs.close();
        banyakData += i - 1;
    }
    else
    {
        cout << "File tidak ditemukan" << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;

    cout << "Masukkan Nomor KTP\t: ";
    int nik;
    cin >> nik;
    cin.ignore();
    bool update = false;
    for (i = 0; i < banyakData; i++)
    {
        if (data[i].nomorKtp == nik)
        {
            update = true;
            break;
        }
    }
    if (update)
    {
        cout << "Nama\t\t\t: " << replaceUnderscore(data[i].nama) << endl;
        cout << "Status\t\t\t: " << data[i].status << endl;
        cout << "Golongan Darah\t\t: " << data[i].golonganDarah << endl;
    }
    else
    {
        cout << "NIK tidak ditemukan";
    }
    int j = 0;
    cout << "\nMasukkan Data Update : " << endl;
    cout << "\n\tNama\t\t: ";
    getline(cin, data[j].nama);
    cout << "\tStatus\t\t: ";
    getline(cin, data[j].status);
    cout << "\tGolongan Darah\t: ";
    getline(cin, data[j].golonganDarah);

    cout << "\nMasukkan Nama File Hasil Updating : ";
    string fileUpdate;
    cin >> fileUpdate;
    ofstream ofs(fileUpdate);
    if (ofs.is_open())
    {
        ofs << data[i].nomorKtp << " " << data[j].nama << " " << data[j].status << " " << data[j].golonganDarah << endl;
    }
    else
    {
        cout << "File tidak dapat dibuka" << endl;
    }
    ofs.close();
    cout << "\nUpdating Berhasil, lihat file hasil dengan kembali ke menu utama" << endl;
}
