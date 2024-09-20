#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct datakaroke
{
    string nama;
    string tipe_room;
    int durasi;
    int total_pembayaran;
    int uang_bayar;
    int uang_kembalian;
};

int harga_room = 0;

void menuUtama(), menuSearch(), menuUrut (), menuTransaksi ();
string gantiSpasi(string str), gantiUnderscore(string str);
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
void splitData(datakaroke data[], string file);
void hasilTransaksi(datakaroke data[], string file);

datakaroke karoke[100], tempkaroke[100];
int jawab;
string namaFile;
char inginLagi;

int main()
{ menuUtama();
	return 0;
}

void menuUtama (){
	
	
	system("cls");
	cout << "==============================================" << endl;
    cout << "||      Tugas Project Algo Lanjut 2023      ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Input Data                            ||" << endl;
    cout << "|| 2. Tampilkan Data                        ||" << endl;
    cout << "|| 3. Searching Data                        ||" << endl;
    cout << "|| 4. Sorting Data                          ||" << endl;
    cout << "|| 5. Transaksi                             ||" << endl;
    cout << "|| 6. Keluar                                ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih Menu: "; cin >> jawab;
    
    while (!(jawab >=1 && jawab <= 6 )) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Pilih Menu : "; cin >> jawab; }
	
	switch (jawab)  {
		case 1 : 
			inputData(karoke);	
			break;					
		case 2 :					
			outputData(tempkaroke);					
			break;					
		case 3 :					
			menuSearch ();					
			break;				
		case 4 :					
			menuUrut ();					
			break;			
		case 5 :
			menuTransaksi ();
			break;
		default :
			cout << "========================================================================" << endl;
			cout << "||            TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI             ||" << endl;
			cout << "========================================================================" << endl; 	
			exit(0);}	
}
       
void menuSearch() {
    system("cls");
    cout << "==============================================" << endl;
    cout << "|| Cari Data Karoke                         ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Sequential                            ||" << endl;
    cout << "|| 2. Binary                                ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih Menu: "; cin >> jawab;
    
    if (jawab == 1) {
        cout << "Masukkan Nama File : "; cin >> namaFile;
        ifstream ifs(namaFile);
        if (ifs.is_open()) {
            sequentialSearch(tempkaroke, namaFile);
        }
        else {
            cout << "File tidak ditemukan" << endl;
        }
    }
	else if (jawab == 2 ){
        cout << "Masukkan Nama File : "; cin >> namaFile;
        ifstream ifs(namaFile);
        if (ifs.is_open())
        {
            binarySearch(tempkaroke, namaFile);
        }
        else
        {
            cout << "File tidak ditemukan" << endl;
        }
    }
    else {
		cout << "========================================================================" << endl;
		cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
		cout << "========================================================================" << endl;
		system("pause");
		menuSearch();
	}
                
}    

       
void menuUrut() {
    system("cls");
    cout << "==============================================" << endl;
    cout << "|| Pengurutan Data karoke					 ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Bubble Sort							 ||" << endl;
    cout << "|| 2. Selection Sort						 ||" << endl;
    cout << "|| 3. Insertion Sort						 ||" << endl;
    cout << "|| 4. Shell Sort							 ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih Menu: "; cin >> jawab;
    
    while (!(jawab >=1 && jawab <= 4 )) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Pilih Menu : "; cin >> jawab; }
				
	if (jawab == 1) {
        cout << "Masukkan Nama File : "; cin >> namaFile;
        ifstream ifs(namaFile);
        if (ifs.is_open()) {
            bubbleSort(tempkaroke, namaFile); }
        else {
            cout << "File tidak ditemukan" << endl; }
    }
	else if (jawab == 2) {
        cout << "Masukkan Nama File : "; cin >> namaFile;
        ifstream ifs(namaFile);
        if (ifs.is_open()) {
            selectionSort(tempkaroke, namaFile); }
        else {
            cout << "File tidak ditemukan" << endl; }
	}
    else if (jawab == 3) {
		cout << "Masukkan Nama File : "; cin >> namaFile;
        ifstream ifs(namaFile);
        if (ifs.is_open()) {
            insertionSort(tempkaroke, namaFile); }
        else {
            cout << "File tidak ditemukan" << endl; }
	}
    else if (jawab == 4) {
        cout << "Masukkan Nama File : "; cin >> namaFile;
        ifstream ifs(namaFile);
        if (ifs.is_open()) {
            shellSort(tempkaroke, namaFile); }
        else {
            cout << "File tidak ditemukan" << endl; }
    }
}                
                        
void menuTransaksi() {
    cout << "==============================================" << endl;
    cout << "|| Transaksi                                ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Merging Sambung                       ||" << endl;
	cout << "|| 2. Updating                              ||" << endl;
	cout << "|| 3. Splitting                             ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih Menu: "; cin >> jawab;
    
    if (jawab == 1) {
        mergeSambung(tempkaroke, namaFile);
    }
    else if (jawab == 2) {
        updatingData(tempkaroke, namaFile);
    } 
    else if (jawab == 3) {
		splitData(tempkaroke, namaFile);
	}
	else {
		cout << "========================================================================" << endl;
		cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
		cout << "========================================================================" << endl;
		menuTransaksi(); }
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

void inputData(datakaroke data[]) {
    system("cls");
    string namaFile;
    int banyakData = 0;
    cout << "==============================================" << endl;
    cout << "||           INPUT DATA KAROKE              ||" << endl;
    cout << "==============================================" << endl;
    cout << "Masukkan Nama File : "; cin >> namaFile;
    cout << "Banyaknya Data\t: "; cin >> banyakData;
    cout << "==============================================" << endl;
	
	cout << "==============================================" << endl;
	cout << "||                Harga Ruang               ||" << endl;
	cout << "|| 1. Small  : 50000/jam                    ||" << endl;
	cout << "|| 2. Medium : 100000/jam                   ||" << endl;
	cout << "|| 3. Large  : 200000/jam                   ||" << endl;
	cout << "==============================================" << endl;
	
    for (int i = 0; i < banyakData; i++)
    {
        cin.ignore();
        cout << "\t Nama\t\t\t: "; getline(cin, data[i].nama);
        cout << "\t Tipe Ruang\t\t: "; cin >> data[i].tipe_room;
        cout << "\t Durasi\t\t\t: "; cin >> data[i].durasi;
        if (data[i].tipe_room == "small" || data[i].tipe_room == "Small" || data[i].tipe_room == "SMALL") {
			harga_room = 50000; }
		else if (data[i].tipe_room == "medium" || data[i].tipe_room == "Medium" || data[i].tipe_room == "MEDIUM") {
			harga_room = 100000; }
		else if (data[i].tipe_room == "large" || data[i].tipe_room == "Large" || data[i].tipe_room == "LARGE" ){
			harga_room = 200000; }
		else {
			cout << "Ruang yang anda pilih tidak tersedia!" << endl;}
        data[i].total_pembayaran = harga_room*data[i].durasi; 
        cout << "\t Total Pembayaran\t: " << data[i].total_pembayaran << endl;
        cout << "\t Pembayaran \t\t: "; cin >> data[i].uang_bayar;
        data[i].uang_kembalian = data[i].uang_bayar-data[i].total_pembayaran;
        cout << "\t Kembalian \t\t: " << data[i].uang_kembalian << endl;
        cout << endl;
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
                << data[i].uang_bayar << " "
                << data[i].uang_kembalian << " "
                << endl;
        }
        ofs.close();
    }
    cout << endl;
    cout << "Anda ingin input lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'y' || inginLagi == 'Y')  // if jika hanya satu baris perintah tidak perlu pakai kurung kurawal
		inputData(karoke);
    else {
		cout << "Kembali ke menu utama : " ;
		system("pause");
		menuUtama ();
    }
}
////2

void outputData(datakaroke data[])
{
	system("cls");
    int i = 0;
    int banyakData = 0;
    string namaFile;
    cout << "==============================================" << endl;
    cout << "OUTPUT DATA KAROKE" << endl;
    cout << "==============================================" << endl;
    cout << "Masukkan Nama File : "; cin >> namaFile;
    ifstream ifs(namaFile);
    if (ifs.is_open()) {
		while (!ifs.eof()) {
			ifs >> data[i].nama;
			ifs >> data[i].tipe_room;
			ifs >> data[i].durasi;
			ifs >> data[i].total_pembayaran;
			ifs >> data[i].uang_bayar;
            ifs >> data[i].uang_kembalian;
			i++;
		}
		ifs.close();
	}
	else {
		cout << "==============================================" << endl;
		cout << "||           File tidak ditemukan           ||" << endl;
		cout << "==============================================" << endl;
		cout << "Silakan Ulangi : ";
		system("pause");
		outputData(tempkaroke);
	}
	
    banyakData += i - 1;
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
    
    cout << endl;
    cout << "Anda ingin menampilkan data lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'y' || inginLagi == 'Y')  // if jika hanya satu baris perintah tidak perlu pakai kurung kurawal
		outputData(tempkaroke);
    else {
		cout << "Kembali ke menu utama :  " ;
		system("pause");
		menuUtama ();
	}
}

void sequentialSearch(datakaroke data[], string file)
{
	bool lagi = true;
    while (lagi) {
    system("cls");
    cout << "==============================================" << endl;
    cout << "|| Pencarian Dengan Sequential              ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Nama                                  ||" << endl;
    cout << "|| 2. Tipe Ruang                            ||" << endl;
    cout << "|| 3. Durasi                                ||" << endl;
    cout << "|| 4. Total Pembayaran                      ||" << endl;
    cout << "|| 5. Pembayaran                            ||" << endl;
    cout << "|| 6. Kembalian                             ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih : "; cin >> jawab;
    
    while (!(jawab >=1 && jawab <= 6 )) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Pilih Menu : "; cin >> jawab; }
			
    int i = 0, banyakData = 0;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        ifs >> data[i].uang_bayar;
        ifs >> data[i].uang_kembalian;
        i++;
    }
    ifs.close();
    banyakData += i - 1;
	int indeksDitemukan[banyakData];	// variabel buat menyimpan no array yang datanya sama dengan yang kita cari
    
    if (jawab == 1) {
		int n = 0;
        string cari_nama;
        cout << "Masukkan Nama : ";
        cin.ignore();
        getline(cin, cari_nama);
        bool ketemu = false;
        for (i = 0; i < banyakData; i++)
        {
            if (gantiSpasi(data[i].nama) == gantiSpasi(cari_nama))
            {
                ketemu = true;
                indeksDitemukan[n] = i;  // variabel buat menyimpan no array yang datanya sama dengan yang kita cari
				n++;
            }
        }
        if (ketemu) {
			for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[k].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[k].tipe_room << endl;
				cout << "Durasi\t\t: " << data[k].durasi << endl;
				cout << "Total Pembayaran\t: " << data[k].total_pembayaran << endl; 
				cout << endl; }
        }
        else {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 2) {
		int n = 0;
        string cari_tipe_room;
        cout << "Masukkan Tipe Ruang : ";
        cin.ignore();
        getline(cin, cari_tipe_room);
        bool ketemu = false;
        for (i = 0; i < banyakData; i++)
        {
            if (gantiSpasi(data[i].tipe_room) == gantiSpasi(cari_tipe_room))
            {
                ketemu = true;
                indeksDitemukan[n] = i;			// variabel buat menyimpan no array yang datanya sama dengan yang kita cari
				n++;
            }
        }
        if (ketemu) {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl;
				cout << "Pembayaran\t\t: " << data[indeksDitemukan[k]].uang_bayar << endl;
				cout << "Kembalian\t\t: " << data[indeksDitemukan[k]].uang_kembalian; 
				cout << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 3) {
		int n = 0;
        int cari_durasi;
        cout << "Masukkan Durasi : ";
        cin >> cari_durasi;
        bool ketemu = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].durasi == cari_durasi)
            {
                ketemu = true;
                indeksDitemukan[n] = i;			// variabel buat menyimpan no array yang datanya sama dengan yang kita cari
				n++;
            }
        }
        if (ketemu) {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl;
				cout << "Pembayaran\t\t: " << data[indeksDitemukan[k]].uang_bayar << endl;
				cout << "Kembalian\t\t: " << data[indeksDitemukan[k]].uang_kembalian; 
				cout << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 4) {
		int n = 0;
        int cari_total_pembayaran;
        cout << "Masukkan Total Pembayaran : ";
        cin >> cari_total_pembayaran;
        bool ketemu = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].total_pembayaran == cari_total_pembayaran)
            {
                ketemu = true;
                indeksDitemukan[n] = i;  // variabel buat menyimpan no array yang datanya sama dengan yang kita cari
				n++;
            }
        }
        if (ketemu) {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl;
				cout << "Pembayaran\t\t: " << data[indeksDitemukan[k]].uang_bayar << endl;
				cout << "Kembalian\t\t: " << data[indeksDitemukan[k]].uang_kembalian; 
				cout << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 5) {
		int n = 0;
        int cari_uangbayar;
        cout << "Masukkan Pembayaran : ";
        cin >> cari_uangbayar;
        bool ketemu = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].uang_bayar == cari_uangbayar)
            {
                ketemu = true;
                indeksDitemukan[n] = i;  // variabel buat menyimpan no array yang datanya sama dengan yang kita cari
				n++;
            }
        }
        if (ketemu) {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl;
				cout << "Pembayaran\t\t: " << data[indeksDitemukan[k]].uang_bayar << endl;
				cout << "Kembalian\t\t: " << data[indeksDitemukan[k]].uang_kembalian; 
				cout << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }    
    else  {
		int n = 0;
        int cari_kembalian;
        cout << "Masukkan Kembalian : ";
        cin >> cari_kembalian;
        bool ketemu = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].uang_kembalian == cari_kembalian)
            {
                ketemu = true;
                indeksDitemukan[n] = i;  // variabel buat menyimpan no array yang datanya sama dengan yang kita cari
				n++;
            }
        }
        if (ketemu) {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl;
				cout << "Pembayaran\t\t: " << data[indeksDitemukan[k]].uang_bayar << endl;
				cout << "Kembalian\t\t: " << data[indeksDitemukan[k]].uang_kembalian; 
				cout << endl; }
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    cout << endl;
    cout << "Anda ingin mencari lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'n' || inginLagi == 'N') {  
		lagi = false;
		//sequentialSearch(tempkaroke, namaFile); 
	}
	}
    //else {
		cout << "Kembali ke menu utama : " ;
		system("pause");
		menuUtama ();
    //}
	//}
}

///edit ini
void binarySearch(datakaroke data[], string file) {
    bool lagi = true;
    while (lagi) {
    system("cls");
    cout << "==============================================" << endl;
    cout << "|| Pencarian Dengan Binary                  ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Nama                                  ||" << endl;
    cout << "|| 2. Tipe Ruang                            ||" << endl;
    cout << "|| 3. Durasi                                ||" << endl;
    cout << "|| 4. Total Pembayaran                      ||" << endl;
    cout << "|| 5. Pembayaran                            ||" << endl;
    cout << "|| 6. Kembalian                             ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih : "; cin >> jawab;
    while (!(jawab >=1 && jawab <= 6 )) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Pilih Menu : "; cin >> jawab; }
			
    int i = 0;
    int banyakData = 0;
    
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
    
    if (jawab == 1)
    {
		int n =0;
		int indeksDitemukan[banyakData];
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
        int awal = 0, akhir = banyakData - 1, tengah;
        //bool ketemu = false;
        while (awal <= akhir)
        {
            tengah = (awal + akhir) / 2;
            if (gantiSpasi(data[tengah].nama) == gantiSpasi(cari_nama)) {
				//ketemu=true;
				indeksDitemukan[n] = tengah;
				n++;
				int i = tengah-1, j = tengah+1;
				while (i >= awal && gantiSpasi(data[i].nama) == gantiSpasi(cari_nama)) {
					indeksDitemukan[n] = i;
					n++;
					i--;
				}
				while (j <= akhir && gantiSpasi(data[j].nama) == gantiSpasi(cari_nama)) {
                indeksDitemukan[n] = j;
                n++;
                j++;
				}
				break; 
			}
			
            else if (gantiSpasi(data[tengah].nama) < gantiSpasi(cari_nama))
            {
                awal = tengah + 1;
                
            }
            else
            {
                akhir = tengah - 1;
            }
		}
    
        if (n>0)
        {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; 
				cout << endl; 
			}
        } 
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 2)
    {
		int n =0;
		int indeksDitemukan[banyakData];
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
        int awal = 0, akhir = banyakData - 1, tengah;
        //bool ketemu = false;
        while (awal <= akhir)
        {
            tengah = (awal + akhir) / 2;
            if (gantiSpasi(data[tengah].tipe_room) == gantiSpasi(cari_tipe_room))
            {
                //ketemu = true;
                indeksDitemukan[n] = tengah;
				n++;
				int i = tengah-1, j = tengah+1;
				while (i >= awal && gantiSpasi(data[i].tipe_room) == gantiSpasi(cari_tipe_room)) {
					indeksDitemukan[n] = i;
					n++;
					i--;
				}
				while (j <= akhir && gantiSpasi(data[j].tipe_room) == gantiSpasi(cari_tipe_room)) {
                indeksDitemukan[n] = j;
                n++;
                j++;
				}
                break;
            }
            else if (gantiSpasi(data[tengah].tipe_room) < gantiSpasi(cari_tipe_room))
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }
        if (n>0)
        {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; 
				cout << endl; 
			}
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 3)
    {
		int n =0;
		int indeksDitemukan[banyakData];
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
        int awal = 0, akhir = banyakData - 1, tengah;
        //bool ketemu = false;
        while (awal <= akhir)
        {
            tengah = (awal + akhir) / 2;
            if (data[tengah].durasi == cari_durasi)
            {
                //ketemu = true;
                indeksDitemukan[n] = tengah;
				n++;
				int i = tengah-1, j = tengah+1;
				while (i >= awal && data[i].durasi == cari_durasi) {
					indeksDitemukan[n] = i;
					n++;
					i--;
				}
				while (j <= akhir && data[j].durasi == cari_durasi) {
                indeksDitemukan[n] = j;
                n++;
                j++;
				}
                break;
            }
            else if (data[tengah].durasi < cari_durasi)
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }
        if (n>0)
        {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; 
				cout << endl; 
			}
				
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 4)
    {
		int n =0;
		int indeksDitemukan[banyakData];
        for (int i = 0; i < banyakData - 1; i++)            //Selection Sort
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
        
        cout << "banyak data :" << banyakData;
        //bool ketemu= false;
        int awal = 0, akhir = banyakData - 1, tengah=0;
       
        while (awal <= akhir) {
            tengah = (awal + akhir) / 2;
            if (data[tengah].total_pembayaran == cari_total_pembayaran) {
                //ketemu=true;
                indeksDitemukan[n] = tengah;
				n++;
				int i = tengah-1, j = tengah+1;
				while (i >= awal && data[i].total_pembayaran == cari_total_pembayaran) {
					indeksDitemukan[n] = i;
					n++;
					i--;
				}
				while (j <= akhir && data[j].total_pembayaran == cari_total_pembayaran) {
                indeksDitemukan[n] = j;
                n++;
                j++;
				}
                break;
            }
            else if (data[tengah].total_pembayaran < cari_total_pembayaran)
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }
  
        if (n>0)
        {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl; 
				cout << endl; }
			
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (jawab == 5)
    {
		int n =0;
		int indeksDitemukan[banyakData];
        for (int i = 0; i < banyakData - 1; i++)            //Selection Sort
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].uang_bayar < data[min].uang_bayar)
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        
        int cari_pembayaran;
        cout << "Masukkan Pembayaran : ";
        cin >> cari_pembayaran;
        
        cout << "banyak data :" << banyakData;
        //bool ketemu= false;
        int awal = 0, akhir = banyakData - 1, tengah=0;
       
        while (awal <= akhir) {
            tengah = (awal + akhir) / 2;
            if (data[tengah].uang_bayar == cari_pembayaran) {
                //ketemu=true;
                indeksDitemukan[n] = tengah;
				n++;
				int i = tengah-1, j = tengah+1;
				while (i >= awal && data[i].uang_bayar == cari_pembayaran) {
					indeksDitemukan[n] = i;
					n++;
					i--;
				}
				while (j <= akhir && data[j].uang_bayar == cari_pembayaran) {
                indeksDitemukan[n] = j;
                n++;
                j++;
				}
                break;
            }
            else if (data[tengah].uang_bayar < cari_pembayaran)
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }
  
        if (n>0)
        {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl;
				cout << "Pembayaran\t\t: " << data[indeksDitemukan[k]].uang_bayar << endl;
				cout << "Kembalian\t\t: " << data[indeksDitemukan[k]].uang_kembalian; 
				cout << endl; }
			
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }    
    else 
    {
		int n =0;
		int indeksDitemukan[banyakData];
        for (int i = 0; i < banyakData - 1; i++)            //Selection Sort
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].uang_kembalian < data[min].uang_kembalian)
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        
        int cari_kembalian;
        cout << "Masukkan Kembalian : ";
        cin >> cari_kembalian;
        
        cout << "banyak data :" << banyakData;
        //bool ketemu= false;
        int awal = 0, akhir = banyakData - 1, tengah=0;
       
        while (awal <= akhir) {
            tengah = (awal + akhir) / 2;
            if (data[tengah].uang_kembalian == cari_kembalian) {
                //ketemu=true;
                indeksDitemukan[n] = tengah;
				n++;
				int i = tengah-1, j = tengah+1;
				while (i >= awal && data[i].uang_kembalian == cari_kembalian) {
					indeksDitemukan[n] = i;
					n++;
					i--;
				}
				while (j <= akhir && data[j].uang_kembalian == cari_kembalian) {
                indeksDitemukan[n] = j;
                n++;
                j++;
				}
                break;
            }
            else if (data[tengah].uang_kembalian < cari_kembalian)
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }
  
        if (n>0)
        {
            for (int k = 0; k < n; k++) {
				cout << "==============================================" << endl;
				cout << "\nNama\t: " << gantiUnderscore(data[indeksDitemukan[k]].nama) << endl;
				cout << "Tipe Ruang\t\t: " << data[indeksDitemukan[k]].tipe_room << endl;
				cout << "Durasi\t\t: " << data[indeksDitemukan[k]].durasi << endl;
				cout << "Total Pembayaran\t: " << data[indeksDitemukan[k]].total_pembayaran << endl;
				cout << "Pembayaran\t\t: " << data[indeksDitemukan[k]].uang_bayar << endl;
				cout << "Kembalian\t\t: " << data[indeksDitemukan[k]].uang_kembalian; 
				cout << endl; }
			
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    cout << endl;
    cout << "Anda ingin mencari lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'n' || inginLagi == 'N') {  
		lagi = false;
	}
}    
    cout << "Kembali ke menu utama : " ;
		system("pause");
		menuUtama ();
}

void bubbleSort(datakaroke data[], string file)
{
	bool lagi = true;
while(lagi) {
    system("cls");
    cout << "==============================================" << endl;
    cout << "||          Pengurutan Data Bubble          ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Nama                                  ||" << endl;
    cout << "|| 2. Tipe Ruang                            ||" << endl;
    cout << "|| 3. Durasi                                ||" << endl;
    cout << "|| 4. Total Pembayaran                      ||" << endl;
    cout << "|| 5. Pembayaran                            ||" << endl;
    cout << "|| 6. Kembalian                             ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih : ";
    int i = 0, banyakData = 0;
    cin >> jawab;
    
    while (!(jawab >=1 && jawab <= 6 )) {
			cin.clear();
			cin.sync();
			cout << "========================================================================" << endl;
			cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
			cout << "========================================================================" << endl;
			cout << "Pilih Menu : "; cin >> jawab; }
			
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        ifs >> data[i].uang_bayar;
        ifs >> data[i].uang_kembalian;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (jawab == 1)
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
    else if (jawab == 2)
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
    else if (jawab == 3)
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
    else if (jawab == 4)
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
     else if (jawab == 5)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            for (int j = 0; j < banyakData - i - 1; j++)
            {
                if (data[j].uang_bayar > data[j + 1].uang_bayar)
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
        for (int i = 0; i < banyakData - 1; i++)
        {
            for (int j = 0; j < banyakData - i - 1; j++)
            {
                if (data[j].uang_kembalian > data[j + 1].uang_kembalian)
                {
                    datakaroke temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
    
    cout << "\nData setelah diurutkan" << endl;
	cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
	
	cout << endl;
    cout << "Anda ingin mencari lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'n' || inginLagi == 'N') {  
		lagi = false;
	}
}    
    cout << "Kembali ke menu utama : " ;
	system("pause");
	menuUtama ();
}

void selectionSort(datakaroke data[], string file)
{	
	bool lagi = true;
while (lagi) {
    system("cls");
    cout << "==============================================" << endl;
    cout << "||        Pengurutan Data Selection         ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Nama                                  ||" << endl;
    cout << "|| 2. Tipe Ruang                            ||" << endl;
    cout << "|| 3. Durasi                                ||" << endl;
    cout << "|| 4. Total Pembayaran                      ||" << endl;
    cout << "|| 5. Pembayaran                            ||" << endl;
    cout << "|| 6. Kembalian                             ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih : ";
    int i = 0, banyakData = 0;
    cin >> jawab;
    
    while (!(jawab >=1 && jawab <= 6 )) {
		cin.clear();
		cin.sync();
		cout << "========================================================================" << endl;
		cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
		cout << "========================================================================" << endl;
		cout << "Pilih Menu : "; cin >> jawab; }
			
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        ifs >> data[i].uang_bayar;
        ifs >> data[i].uang_kembalian;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (jawab == 1)
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
    else if (jawab == 2)
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
    else if (jawab == 3)
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
    else if (jawab == 4)
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
    else if (jawab == 5)
    {
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].uang_bayar < data[min].uang_bayar)
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
        for (int i = 0; i < banyakData - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < banyakData; j++)
            {
                if (data[j].uang_kembalian < data[min].uang_kembalian)
                {
                    min = j;
                }
            }
            datakaroke temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    cout << "\nData setelah diurutkan" << endl;
    
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
    
    cout << endl;
    cout << "Anda ingin mencari lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'n' || inginLagi == 'N') {  
		lagi = false; }
}    
    cout << "Kembali ke menu utama : " ;
	system("pause");
	menuUtama ();
}

void insertionSort(datakaroke data[], string file)
{	
	bool lagi = true;
	while (lagi) {
    system("cls");
    cout << "==============================================" << endl;
    cout << "||        Pengurutan Data Insertion         ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Nama                                  ||" << endl;
    cout << "|| 2. Tipe Ruang                            ||" << endl;
    cout << "|| 3. Durasi                                ||" << endl;
    cout << "|| 4. Total Pembayaran                      ||" << endl;
    cout << "|| 5. Pembayaran                            ||" << endl;
    cout << "|| 6. Kembalian                             ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih : ";
    int i = 0, banyakData = 0;
    cin >> jawab;
    
    while (!(jawab >=1 && jawab <= 6 )) {
		cin.clear();
		cin.sync();
		cout << "========================================================================" << endl;
		cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
		cout << "========================================================================" << endl;
		cout << "Pilih Menu : "; cin >> jawab; }    
    
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        ifs >> data[i].uang_bayar;
        ifs >> data[i].uang_kembalian;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (jawab == 1)
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
    else if (jawab == 2)
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
    else if (jawab == 3)
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
    else if (jawab == 4)
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
	else if (jawab == 5)
    {
        for (int i = 1; i < banyakData; i++)
        {
            datakaroke temp = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].uang_bayar > temp.uang_bayar)
            {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = temp;
        }
    }	
	else 
    {
        for (int i = 1; i < banyakData; i++)
        {
            datakaroke temp = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].uang_kembalian > temp.uang_kembalian)
            {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = temp;
        }
    }
	cout << "Data setelah diurutkan" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << endl;
    cout << "Anda ingin mencari lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'n' || inginLagi == 'N') {  
		lagi = false; }
}    
    cout << "Kembali ke menu utama : " ;
	system("pause");
	menuUtama ();
}

void shellSort(datakaroke data[], string file)
{
    bool lagi = true;
    while (lagi) {
    system("cls");
    cout << "==============================================" << endl;
    cout << "||           Pengurutan Data Shell          ||" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Nama                                  ||" << endl;
    cout << "|| 2. Tipe Ruang                            ||" << endl;
    cout << "|| 3. Durasi                                ||" << endl;
    cout << "|| 4. Total Pembayaran                      ||" << endl;
    cout << "|| 5. Pembayaran                            ||" << endl;
    cout << "|| 6. Kembalian                             ||" << endl;
    cout << "==============================================" << endl;
    cout << "Pilih : ";
    int
     i = 0, banyakData = 0;
    cin >> jawab;
    
    while (!(jawab >=1 && jawab <= 6 )) {
		cin.clear();
		cin.sync();
		cout << "========================================================================" << endl;
		cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
		cout << "========================================================================" << endl;
		cout << "Pilih Menu : "; cin >> jawab; }
    
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        ifs >> data[i].uang_bayar;
        ifs >> data[i].uang_kembalian;
        i++;
    }
    ifs.close();
    banyakData += i - 1;
/////// sampe sini 4
    if (jawab == 1)
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
    else if (jawab == 2)
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
    else if (jawab == 3)
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
    else if (jawab == 4)
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
    else if (jawab == 5)
    {
        int banyak = banyakData / 2;
        while (banyak > 0)
        {
            for (int i = banyak; i < banyakData; i++)
            {
                datakaroke temp = data[i];
                int j = i;
                while (j >= banyak && data[j - banyak].uang_bayar > temp.uang_kembalian)
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
        int banyak = banyakData / 2;
        while (banyak > 0)
        {
            for (int i = banyak; i < banyakData; i++)
            {
                datakaroke temp = data[i];
                int j = i;
                while (j >= banyak && data[j - banyak].uang_kembalian > temp.uang_kembalian)
                {
                    data[j] = data[j - banyak];
                    j -= banyak;
                }
                data[j] = temp;
            }
            banyak /= 2;
        }
    }
    cout << "Data setelah diurutkan" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
    
    cout << endl;
    cout << "Anda ingin mencari lagi ? (y/n) : "; cin >> inginLagi;
    if (inginLagi == 'n' || inginLagi == 'N') {  
		lagi = false; }
}    
    cout << "Kembali ke menu utama : " ;
	system("pause");
	menuUtama ();
}


void mergeSambung(datakaroke data[], string file)
{
	bool lagi = true;
	datakaroke tempkaroke1[100], tempkaroke2[100];
    int i = 0, j = 0, banyakData1 = 0, banyakData2 = 0;
    string file1, file2;
    string file3;
    
while (lagi) {
	
    system("cls");
    cout << "==============================================" << endl;
    cout << "||            Merging Sambung               ||" << endl;
    cout << "==============================================" << endl;
    cout << "Nama File : ";
    
    cin >> file1;

    ifstream ifs1(file1);
    if (ifs1.is_open()) {
		while (!ifs1.eof())
			{
				ifs1 >> data[i].nama;
				ifs1 >> data[i].tipe_room;
				ifs1 >> data[i].durasi;
				ifs1 >> data[i].total_pembayaran;
				ifs1 >> data[i].uang_bayar;
				ifs1 >> data[i].uang_kembalian;
				i++;
			}
		ifs1.close();
		banyakData1 = i -1;
		
		for (i=0; i < banyakData1; i++) {
			tempkaroke1[i].nama = data[i].nama;
			tempkaroke1[i].tipe_room = data[i].tipe_room;
			tempkaroke1[i].durasi = data[i].durasi;
			tempkaroke1[i].total_pembayaran = data[i].total_pembayaran;
			tempkaroke1[i].uang_bayar = data[i].uang_bayar;
			tempkaroke1[i].uang_kembalian = data[i].uang_kembalian;
		}
		
	cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData1; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
	}
	else {
		cout << "File tidak ditemukan!" << endl;
		cout << endl;
		cout << "Kembali ke menu utama : " ;
		system("pause");
		menuUtama ();
	}
    
    cout << "\nNama File kedua : ";
    cin >> file2;
    ifstream ifs2(file2);
    if (ifs2.is_open()) {
		while (!ifs2.eof()) {
			ifs2 >> data[j].nama;
			ifs2 >> data[j].tipe_room;
			ifs2 >> data[j].durasi;
			ifs2 >> data[j].total_pembayaran;
			ifs2 >> data[j].uang_bayar;
			ifs2 >> data[j].uang_kembalian;
			j++;
		}
		ifs2.close();
		banyakData2 = j - 1;
		
		for (j=0; j < banyakData2; j++) {
			tempkaroke2[j].nama = data[j].nama;
			tempkaroke2[j].tipe_room = data[j].tipe_room;
			tempkaroke2[j].durasi = data[j].durasi;
			tempkaroke2[j].total_pembayaran = data[j].total_pembayaran;
			tempkaroke1[j].uang_bayar = data[i].uang_bayar;
			tempkaroke1[j].uang_kembalian = data[i].uang_kembalian;
		}
    
    
	cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData1; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
	}
	else {
		cout << "File tidak ditemukan!" << endl;
		cout << endl;
		cout << "Kembali ke menu utama : " ;
		system("pause");
		menuUtama ();
	}
	
    cout << "\nMasukkan nama file hasil merge : ";
    
    cin >> file3;
    ofstream ofs(file3);
    if (ofs.is_open())
    {
        for (int i = 0; i < banyakData1; i++)
        {
            ofs << tempkaroke1[i].nama << " "
				<< tempkaroke1[i].tipe_room << " "
				<< tempkaroke1[i].durasi << " "
				<< tempkaroke1[i].total_pembayaran << " "
				<< tempkaroke1[i].uang_bayar << " "
				<< tempkaroke1[i].uang_kembalian
				<< endl;
        }
  
		for (int j = 0; j < banyakData2; j++)
        {
            ofs << tempkaroke2[j].nama << " "
				<< tempkaroke2[j].tipe_room << " "
				<< tempkaroke2[j].durasi << " "
				<< tempkaroke2[j].total_pembayaran 
				<< tempkaroke1[i].uang_bayar
				<< tempkaroke1[i].uang_kembalian
				<< endl;
        }
        ofs.close();
    }
    else {
		cout << "File gagal disimpan!" << endl;
		cout << endl;
		cout << "Kembali ke menu utama : " ;
		system("pause");
		menuUtama ();
	}
    cout << endl;
    cout << "Data berhasil disimpan di file " << file3 << "!" <<  endl;
    cout << endl;
    char pilih;
    cout << "Jawab 'y' untuk merge lagi atau 'n' untuk lihat langsung hasil : "; cin >> pilih;
    if (jawab == 'y' || jawab == 'Y') {
		lagi = true; }
	else {
		lagi = false; }
}
    cout << "Hasil : " << endl;
    hasilTransaksi(tempkaroke, file3);
    
}

void updatingData(datakaroke data[], string file)
{
    string tipe_room, durasi, total_pembayaran;
    system("cls");
    cout << "==============================================" << endl;
    cout << "||                Update Data               ||" << endl;
    cout << "==============================================" << endl;
    int i = 0, banyakData = 0;
    int ganti = 0;
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
            ifs >> data[i].uang_bayar;
            ifs >> data[i].uang_kembalian;
            i++;
        }
        ifs.close();
    }
    else
    {
        cout << "File tidak ditemukan" << endl;
        cout << endl;
    cout << "Kembali ke menu utama : " ;
	system("pause");
	menuUtama ();
    }
    
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;

    cout << "Masukkan Nama\t: ";
    string nama;
    cin >> nama;
    cin.ignore();
    bool update = false;
    for (i = 0; i < banyakData; i++)
    {
        if (gantiUnderscore(data[i].nama) == nama)
        {
            update = true;
            ganti = i;
            break;
            
        }
    }
    if (update)
    {
        cout << "Tipe Ruang\t\t\t: " << gantiUnderscore(data[i].tipe_room) << endl;
        cout << "Durasi\t\t\t: " << data[i].durasi << endl;
        cout << "Total Pembayaran\t: " << data[i].total_pembayaran << endl;
        cout << "Pembayaran \t\t: " << data[i].uang_bayar << endl;
        cout << "Kembalian \t\t: " << data[i].uang_kembalian << endl;
        cout << endl;
		
    }
    else
    {
        cout << "NAMA tidak ditemukan";
    }
    
    string gantiTipe_room;
    int gantiDurasi, gantiTotal_pembayaran,gantiUang_bayar,gantiUang_kembalian;
    cout << "\nMasukkan Data Update : " << endl;
    cout << "\n\tTipe Ruang\t\t: "; cin >> gantiTipe_room;
    cout << "\tDurasi\t\t: ";  cin >> gantiDurasi;
	
	if (gantiTipe_room == "small" || gantiTipe_room == "Small" || gantiTipe_room == "SMALL") {
		harga_room = 50000; }
	else if (gantiTipe_room == "medium" || gantiTipe_room == "Medium" || gantiTipe_room == "MEDIUM") {
			harga_room = 100000; }
	else if (gantiTipe_room == "large" || gantiTipe_room == "Large" || gantiTipe_room == "LARGE" ){
			harga_room = 200000; }
	else {
		cout << endl;
		cout << "Ruang yang anda pilih tidak tersedia!" << endl << endl;}
    
    gantiTotal_pembayaran = harga_room * gantiDurasi; 
    
    cout << "\t Total Pembayaran\t: " << gantiTotal_pembayaran << endl;
    cout << "\t Pembayaran \t\t: "; cin >> gantiUang_bayar;
    
    gantiUang_kembalian = gantiUang_bayar - gantiTotal_pembayaran;
    
    cout << "\t Kembalian \t\t: " << gantiUang_kembalian << endl;
    cout << endl;    
	
	data[ganti].tipe_room = gantiSpasi(gantiTipe_room);
	data[ganti].durasi = gantiDurasi;
	data[ganti].total_pembayaran = gantiTotal_pembayaran;
	data[ganti].uang_bayar = gantiUang_bayar;
	data[ganti].uang_kembalian = gantiUang_kembalian;
	
    cout << "\nMasukkan Nama File Hasil Updating : ";
    string fileUpdate;
    cin >> fileUpdate;
    ofstream ofs(fileUpdate);
    if (ofs.is_open())
    {
        for (i =0; i < banyakData; i++) {
        ofs << data[i].nama << " " 
        << data[i].tipe_room << " " 
        << data[i].durasi << " " 
        << data[i].total_pembayaran << " "
        << data[i].uang_bayar << " "
        << data[i].uang_kembalian 
        << endl;
		}
    }
    else
    {
        cout << "File tidak dapat dibuka" << endl;
    }
    ofs.close();
    cout << "\nUpdating Berhasil!" << endl;
    cout << endl;
    cout << "Hasil : " << endl;
    hasilTransaksi(tempkaroke, fileUpdate);
}

void splitData(datakaroke data[], string file)
{
    int i = 0, banyakData = 0;
    system("cls");
    cout << "==============================================" << endl;
    cout << "||             Splitting Data               ||" << endl;
    cout << "==============================================" << endl;
    cout << "Nama File : ";
    string inputFile;
    cin >> inputFile;

    ifstream ifs(inputFile);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        ifs >> data[i].uang_bayar;
        ifs >> data[i].uang_kembalian;
        i++;
    }
    ifs.close();

    banyakData += i - 1;
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;

    cout << "\nMasukkan nama file pertama untuk menyimpan data: ";
    string outputFile1;
    cin >> outputFile1;
    ofstream ofs1(outputFile1);
    if (ofs1.is_open())
    {
        for (int i = 0; i < banyakData / 2; i++)
        {
            ofs1 << data[i].nama << " ";
            ofs1 << data[i].tipe_room << " ";
            ofs1 << data[i].durasi << " ";
            ofs1 << data[i].total_pembayaran << " ";
            ofs1 << data[i].uang_bayar << " ";
            ofs1 << data[i].uang_kembalian 
            << endl;
        }
        ofs1.close();
    }
    cout << "Data berhasil disimpan di file " << outputFile1 << endl;
    cout << endl;
    cout << "Hasil : " << endl;
    hasilTransaksi(tempkaroke, outputFile1);
	

    cout << "\nMasukkan nama file kedua untuk menyimpan data: ";
    string outputFile2;
    cin >> outputFile2;
    ofstream ofs2(outputFile2);
    if (ofs2.is_open())
    {
        for (int i = banyakData / 2; i < banyakData; i++)
        {
            ofs2 << data[i].nama << " ";
            ofs2 << data[i].tipe_room << " ";
            ofs2 << data[i].durasi << " ";
            ofs2 << data[i].total_pembayaran << " ";
            ofs2 << data[i].uang_bayar << " ";
            ofs2 << data[i].uang_kembalian 
            << endl;
        }
        ofs2.close();
	}
    cout << "Data berhasil disimpan di file " << outputFile2 << endl;
    cout << endl;
    cout << "Hasil : " << endl;
    hasilTransaksi(tempkaroke, outputFile2);
}

void hasilTransaksi(datakaroke data[], string file) {
	int i = 0;
    int banyakData = 0;
	ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nama;
        ifs >> data[i].tipe_room;
        ifs >> data[i].durasi;
        ifs >> data[i].total_pembayaran;
        ifs >> data[i].uang_bayar;
        ifs >> data[i].uang_kembalian;
        i++;
    }
    ifs.close();
    banyakData += i - 1;
    cout << setfill('-') << setw(122) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nama"
         << "|" << setfill(' ') << setw(23);
    cout << " Tipe Ruang"
         << "|" << setfill(' ') << setw(19) << " Durasi"
         << "|" << setfill(' ') << setw(19);
    cout << " Total Pembayaran"
		<< "|" << setfill(' ') << setw(19) << " Pembayaran "
		<< "|" << setfill(' ') << setw(19);
	cout << "Kembalian"
         << "|" << endl;
    cout << setfill('-') << setw(122) << "-" << endl;
    for (int i = 0; i < banyakData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << gantiUnderscore(data[i].nama) << "| " << setfill(' ') << setw(22) << gantiUnderscore(data[i].tipe_room);
        cout << "| " << setfill(' ') << setw(18) << data[i].durasi << "| " << setfill(' ') << setw(18) << data[i].total_pembayaran 
        << "| " << setfill(' ') << setw(18) << data[i].uang_bayar << "| " << setfill(' ') << setw(18) << data[i].uang_kembalian;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(122) << "-" << endl;
    
    cout << endl;
    cout << "Kembali ke menu utama : " ;
	system("pause");
	menuUtama ();
}
