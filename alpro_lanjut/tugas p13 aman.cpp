#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct datakaroke
{
    string nama;
    int total_pembayaran;
    string tipe_room;
    int durasi;
};

string gantiSpasi(string str);
string gantiUnderscore(string str);
void inputData(datakaroke data[]);
void outputData(datakaroke data[]);
void sequentialSearch(datakaroke data[], string file);
void binarySearch(datakaroke data[], string file);
void bubbleSort(datakaroke data[], string file);
void selectionSort(datakaroke data[], string file);
void insertionSort(datakaroke data[], string file);
void shellSort(datakaroke data[], string file);
void mergeSambung(datakaroke data[], string file);
void updatingData(datakaroke data[], string file);

int main()
{
    datakaroke karoke[100], tempkaroke[100];
    string menuAwal, menuSearching, menuSorting, menuTransaksi;
    string menuSequentialSearch, menuBinarySearch;
    string menuBubbleSort, menuSelectionSort, menuInsertionSort, menuShellSort, menuQuickSort;
    string menuMergingSambung, menuUpdating;
    string namaFile;
    int pilihMenuAwal, menuSearching2, menuSorting2, menuTransaksi2;

    do
    {
        cout << "Tugas Project Algo Lanjut 2023" << endl;
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
            inputData(karoke);
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 2)
        {
            outputData(tempkaroke);
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 3)
        {
            do
            {
                system("cls");
                cout << "Cari Data Karoke" << endl;
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
                            sequentialSearch(tempkaroke, namaFile);
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
                            binarySearch(tempkaroke, namaFile);
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
                cout << "Pengurutan Data karoke" << endl;
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
                            bubbleSort(tempkaroke, namaFile);
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
                            selectionSort(tempkaroke, namaFile);
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
                            insertionSort(tempkaroke, namaFile);
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
                            shellSort(tempkaroke, namaFile);
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
                        mergeSambung(tempkaroke, namaFile);
                        cout << "Ulangi? (y/n) ";
                        cin >> menuMergingSambung;
                    } while (menuMergingSambung == "y");
                }
                else if (menuTransaksi2 == 2)
                {
                    do
                    {
                        system("cls");
                        updatingData(tempkaroke, namaFile);
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

string gantiSpasi(string str)
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

string gantiUnderscore(string str)
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

/////batas 1 revisi

void inputData(datakaroke data[])
{
    string namaFile;
    int banyakData = 0;

    cout << "========================" << endl;
    cout << "INPUT DATA KAROKE" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Nama File : ";
    cin >> namaFile;
    cout << "Banyaknya Data\t: ";
    cin >> banyakData;

    for (int i = 0; i < banyakData; i++)
    {
        cin.ignore();
        cout << "\t Nama\t\t: ";
        getline(cin, data[i].nama);
        cout << "\t Tipe Ruang\t: ";
        cin >> data[i].tipe_room;
        cout << "\t Durasi\t\t: ";
        cin >> data[i].durasi;
        cout << "\t Total Pembayaran\t: ";
        cin >> data[i].total_pembayaran;
        cout << "\n";
    }
    for (int i = 0; i < banyakData; i++)
        data[i].nama = gantiSpasi(data[i].nama);

    ofstream ofs(namaFile, ios::app);
    if (ofs.is_open())
    {
        for (int i = 0; i < banyakData; i++)
        {
            ofs << data[i].nama << " "
				<< data[i].tipe_room << " "
                << data[i].durasi << " "
                << data[i].total_pembayaran << " "
                << endl;
        }
        ofs.close();
    }
}
////2

void outputData(datakaroke data[])
{
    int i = 0;
    int jumlahData = 0;
    string namaFile;
    cout << "========================" << endl;
    cout << "OUTPUT DATA KAROKE" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Nama File : ";
    cin >> namaFile;
    ifstream ifs(namaFile);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        i++;
    }
    ifs.close();
    jumlahData += i - 1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < jumlahData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}

void sequentialSearch(datakaroke data[], string file)
{
    
    system("cls");
    cout << "============================" << endl;
    cout << "Pencarian Dengan Sequential" << endl;
    cout << "============================" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Tipe Ruang" << endl;
    cout << "3. Durasi" << endl;
    cout << "4. Total Pembayaran" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        i++;
    }
    ifs.close();
    banyakData += i - 1;
	int indeksDitemukan[banyakData];
    int n = 0;
    
    if (pilih == 1)
    {
        string cari_nama;
        cout << "Masukkan Nama : ";
        cin.ignore();
        getline(cin, cari_nama);
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (gantiSpasi(data[i].nama) == gantiSpasi(cari_nama))
            {
                found = true;
                indeksDitemukan[n] = i;
				n++;
            }
        }
        if (found)
        {
			for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[k].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[k].tipe_room << endl;
				cout << "Durasi\t\t: " << data[k].durasi << endl;
				cout << "Total Pembayaran\t: " << data[k].total_pembayaran << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 2)
    {
        string cari_tipe_room;
        cout << "Masukkan Tipe Ruang : ";
        cin.ignore();
        getline(cin, cari_tipe_room);
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (gantiSpasi(data[i].tipe_room) == gantiSpasi(cari_tipe_room))
            {
                found = true;
                indeksDitemukan[n] = i;
				n++;
            }
        }
        if (found)
        {
            for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 3)
    {
        int cari_durasi;
        cout << "Masukkan Durasi : ";
        cin >> cari_durasi;
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].durasi == cari_durasi)
            {
                found = true;
                indeksDitemukan[n] = i;
				n++;
            }
        }
        if (found)
        {
            for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 4)
    {
        int cari_total_pembayaran;
        cout << "Masukkan Durasi : ";
        cin >> cari_total_pembayaran;
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].total_pembayaran == cari_total_pembayaran)
            {
                found = true;
                indeksDitemukan[n] = i;
				n++;
            }
        }
        if (found)
        {
            for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; }
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

/////3 sampai sini//////////////////////////////////////////////////////

void binarySearch(datakaroke data[], string file)
{
    system("cls");
    cout << "============================" << endl;
    cout << "Pencarian Dengan Binary" << endl;
    cout << "============================" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Tipe Ruang" << endl;
    cout << "3. Durasi" << endl;
    cout << "4. Total Pembayaran" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        i++;
    }
    ifs.close();
    banyakData += i - 1;
    int indeksDitemukan[banyakData];
    int n = 0;
    if (pilih == 1)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (gantiSpasi(data[j].nama) < gantiSpasi(data[min].nama))
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        string cari_nama;
        cout << "Masukkan Nama : ";
        cin.ignore();
        getline(cin, cari_nama);
        int low = 0, high = banyakData - 1, mid = 0;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (gantiSpasi(data[mid].nama) == gantiSpasi(cari_nama))
            {
                found = true;
                indeksDitemukan[n] = mid;
				n++;
            }
            else if (gantiSpasi(data[mid].nama) < gantiSpasi(cari_nama))
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
            for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; }
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
                if (gantiSpasi(data[j].tipe_room) < gantiSpasi(data[min].tipe_room))
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        string cari_tipe_room;
        cout << "Masukkan Tipe Ruang : ";
        cin.ignore();
        getline(cin, cari_tipe_room);
        int low = 0, high = banyakData - 1, mid = 0;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (gantiSpasi(data[mid].nama) == gantiSpasi(cari_tipe_room))
            {
                found = true;
                indeksDitemukan[n] = mid;
				n++;
            }
            else if (gantiSpasi(data[mid].nama) < gantiSpasi(cari_tipe_room))
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
            for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; }
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
                if (data[j].durasi < data[min].durasi)
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        int cari_durasi;
        cout << "Masukkan Durasi : ";
        cin >> cari_durasi;
        int low = 0, high = banyakData - 1, mid;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (data[mid].durasi == cari_durasi)
            {
                found = true;
                indeksDitemukan[n] = mid;
				n++;
            }
            else if (data[mid].durasi < cari_durasi)
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
            for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; }
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
                if (data[j].total_pembayaran < data[min].total_pembayaran)
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        int cari_total_pembayaran;
        cout << "Masukkan Total pembayaran : ";
        cin >> cari_total_pembayaran;
        int low = 0, high = banyakData - 1, mid;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (data[mid].total_pembayaran == cari_total_pembayaran)
            {
                found = true;
                indeksDitemukan[n] = mid;
				n++;
            }
            else if (data[mid].total_pembayaran < cari_total_pembayaran)
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
            for (int k = 0; k < n; k++) {
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; }
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

void bubbleSort(datakaroke data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Bubble" << endl;
    cout << "============================" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Tipe Ruang" << endl;
    cout << "3. Durasi" << endl;
    cout << "4. Total Pembayaran" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
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
                if (gantiSpasi(data[j].nama) > gantiSpasi(data[j + 1].nama))
                {
                    datakaroke temp = data[j];
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
                if (gantiSpasi(data[j].tipe_room) > gantiSpasi(data[j + 1].tipe_room))
                {
                    datakaroke temp = data[j];
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
                if (data[j].durasi > data[j + 1].durasi)
                {
                    datakaroke temp = data[j];
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
                if (data[j].total_pembayaran > data[j + 1].total_pembayaran)
                {
                    datakaroke temp = data[j];
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
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}

void selectionSort(datakaroke data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Selection" << endl;
    cout << "============================" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Tipe Ruang" << endl;
    cout << "3. Durasi" << endl;
    cout << "4. Total Pembayaran" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
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
                if (gantiSpasi(data[j].nama) < gantiSpasi(data[min].nama))
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
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
                if (gantiSpasi(data[j].tipe_room) < gantiSpasi(data[min].tipe_room))
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
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
                if (data[j].durasi < data[min].durasi)
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
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
                if (data[j].total_pembayaran < data[min].total_pembayaran)
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
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
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}

void insertionSort(datakaroke data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Insertion" << endl;
    cout << "============================" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Tipe Ruang" << endl;
    cout << "3. Durasi" << endl;
    cout << "4. Total Pembayaran" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (pilih == 1)
    {
        for (int i = 1; i < banyakData; i++)
        {
            datakaroke temp = data[i];
            int j = i - 1;
            while (j >= 0 && gantiSpasi(data[j].nama) > gantiSpasi(temp.nama))
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
            datakaroke temp = data[i];
            int j = i - 1;
            while (j >= 0 && gantiSpasi(data[j].tipe_room) > gantiSpasi(temp.tipe_room))
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
            datakaroke temp = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].durasi > temp.durasi)
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
            datakaroke temp = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].total_pembayaran > temp.total_pembayaran)
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
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}

void shellSort(datakaroke data[], string file)
{
    system("cls");
    cout << "Pengurutan Data Shell" << endl;
    cout << "============================" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Tipe Ruang" << endl;
    cout << "3. Durasi" << endl;
    cout << "4. Total Pembayaran" << endl;
    cout << "============================" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        i++;
    }
    ifs.close();
    banyakData += i - 1;
/////// sampe sini 4
    if (pilih == 1)
    {
        int banyak = banyakData / 2;
        while (banyak > 0)
        {
            for (int i = banyak; i < banyakData; i++)
            {
                datakaroke temp = data[i];
                int j = i;
                while (j >= banyak && gantiSpasi(data[j - banyak].nama) > gantiSpasi(temp.nama))
                {
                    data[j] = data[j - banyak];
                    j -= banyak;
                }
                data[j] = temp;
            }
            banyak /= 2;
        }
    }
    else if (pilih == 2)
    {
        int banyak = banyakData / 2;
        while (banyak > 0)
        {
            for (int i = banyak; i < banyakData; i++)
            {
                datakaroke temp = data[i];
                int j = i;
                while (j >= banyak && gantiSpasi(data[j - banyak].tipe_room) > gantiSpasi(temp.tipe_room))
                {
                    data[j] = data[j - banyak];
                    j -= banyak;
                }
                data[j] = temp;
            }
            banyak /= 2;
        }
    }
    else if (pilih == 3)
    {
        int banyak = banyakData / 2;
        while (banyak > 0)
        {
            for (int i = banyak; i < banyakData; i++)
            {
                datakaroke temp = data[i];
                int j = i;
                while (j >= banyak && data[j - banyak].durasi > temp.durasi)
                {
                    data[j] = data[j - banyak];
                    j -= banyak;
                }
                data[j] = temp;
            }
            banyak /= 2;
        }
    }
    else if (pilih == 4)
    {
        int banyak = banyakData / 2;
        while (banyak > 0)
        {
            for (int i = banyak; i < banyakData; i++)
            {
                datakaroke temp = data[i];
                int j = i;
                while (j >= banyak && data[j - banyak].total_pembayaran > temp.total_pembayaran)
                {
                    data[j] = data[j - banyak];
                    j -= banyak;
                }
                data[j] = temp;
            }
            banyak /= 2;
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }

    cout << "Data setelah diurutkan" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}

//////////////
void mergeSambung(datakaroke data[], string file)
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
        ifs1 >> data[i].nama;
        ifs1 >> data[i].tipe_room;
        ifs1 >> data[i].durasi;
        ifs1 >> data[i].total_pembayaran;
        i++;
    }
    ifs1.close();

    banyakData1 += i - 1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData1; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;

    cout << "\nNama File kedua : ";
    cin >> file2;
    ifstream ifs2(file2);
    while (!ifs2.eof())
    {
        ifs2 >> data[j].nama;
        ifs2 >> data[j].tipe_room;
        ifs2 >> data[j].durasi;
        ifs2 >> data[j].total_pembayaran;
        j++;
    }
    ifs2.close();
    banyakData2 += j - 1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < banyakData2; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
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
            ofs << data[i].nama << " ";
            ofs << data[i].tipe_room << " ";
            ofs << data[i].durasi << " ";
            ofs << data[i].total_pembayaran << endl;
        }
        for (int j = 0; j < banyakData2; j++)
        {
            ofs << data[i].nama << " ";
            ofs << data[i].tipe_room << " ";
            ofs << data[i].durasi << " ";
            ofs << data[i].total_pembayaran << endl;
        }
        ofs.close();
    }
    cout << "Data berhasil disimpan di file " << file3 << endl;
}

void updatingData(datakaroke data[], string file)
{
    string tipe_room, durasi, total_pembayaran;
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
            ifs >> data[i].nama;
            ifs >> data[i].tipe_room;
            ifs >> data[i].durasi;
            ifs >> data[i].total_pembayaran;
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
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << data[i].tipe_room;
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;

    cout << "Masukkan Nama\t: ";
    string nama;
    cin >> nama;
    cin.ignore();
    bool update = false;
    for (i = 0; i < banyakData; i++)
    {
        if (data[i].nama == nama)
        {
            update = true;
            break;
        }
    }
    if (update)
    {
        cout << "Tipe Ruang\t\t\t: " << gantiUnderscore(data[i].tipe_room) << endl;
        cout << "Durasi\t\t\t: " << data[i].durasi << endl;
        cout << "Total Pembayaran\t\t: " << data[i].total_pembayaran << endl;
    }
    else
    {
        cout << "NAMA tidak ditemukan";
    }
    int j = 0;
    cout << "\nMasukkan Data Update : " << endl;
    cout << "\n\tTipe Ruang\t\t: ";
    cin.ignore();
    getline(cin, data[j].tipe_room);
    cout << "\tDurasi\t\t: ";
    cin >> data[j].durasi;
    cout << "\tTotal Pembayaran\t: ";
    cin >> data[j].total_pembayaran;

    cout << "\nMasukkan Nama File Hasil Updating : ";
    string fileUpdate;
    cin >> fileUpdate;
    ofstream ofs(fileUpdate);
    if (ofs.is_open())
    {
        ofs << data[i].nama << " " << data[j].tipe_room << " " << data[j].durasi << " " << data[j].total_pembayaran << endl;
    }
    else
    {
        cout << "File tidak dapat dibuka" << endl;
    }
    ofs.close();
    cout << "\nUpdating Berhasil, lihat file hasil dengan kembali ke menu utama" << endl;
}
