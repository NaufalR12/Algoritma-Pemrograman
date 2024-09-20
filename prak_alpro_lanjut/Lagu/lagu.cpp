#include <iostream>
#include <fstream>
#include <string>
#include <windows.h> 

using namespace std;

void buatPlaylist(), write(),read();
bool playlistExists();
const string namaPlaylist = "lyrics/playlist.txt" ;

int main() {
	cout << "=================================================" << endl;
	cout << "||      Program menulis dan membaca lirik      ||" << endl;
	cout << "=================================================" << endl;
    cout << endl;
    cout << "Sedang membuat playlist ........ " << endl;
    if (playlistExists()) {
        cout << "=================================================" << endl;
        cout << "||          File playlist sudah ada!           ||" << endl;
        cout << "=================================================" << endl;
        cout << endl;
        cout << "Lanjut ke menu utama : ";
        system("pause");
    } else {
		buatPlaylist();
	}
	
    while (true) {
		system("cls");
		cout << "=================================================" << endl;
        cout << "||                  MENU UTAMA                 ||" << endl;
        cout << "=================================================" << endl;
        cout << "|| 1. Write                                    ||" << endl;
        cout << "|| 2. Read                                     ||" << endl;
        cout << "|| 3. Exit                                     ||" << endl;
        cout << "=================================================" << endl;
        char jawab;
        cout << "Pilih menu (1/2/3): ";
        cin >> jawab;
        
			if (jawab == '1') {
				write();
			}
			else if (jawab == '2') {
				read();
			}
			else if (jawab == '3') {
				cout << endl;
				cout << "=================================================" << endl;
				cout << "|| Terima Kasih, telah menggunakan program ini ||" << endl;
				cout << "=================================================" << endl << endl;
				return 0;
			}
			else {
				cout << "=================================================" << endl;
				cout << "||     Menu yang anda pilih tidak tersedia!    ||" << endl;
				cout << "||             Silakan pilih lagi!             ||" << endl;
				cout << "=================================================" << endl;
				system("pause");
			}
    }

    return 0;
}

bool playlistExists() {
    ifstream playlist(namaPlaylist);
    return playlist.good();
}

void buatPlaylist() {

    ofstream filePlaylist(namaPlaylist);
    if (filePlaylist.is_open()) {
		cout << "=================================================" << endl;
        cout << "File" << namaPlaylist << " telah dibuat." << endl;
        cout << "=================================================" << endl;
        cout << "Lanjut ke menu utama : ";
        system("pause");
        filePlaylist.close();
    } else {
		cout << "=================================================" << endl;
        cout << "||         Gagal membuat file playlist         ||" << namaPlaylist << endl;
        cout << "=================================================" << endl;
        cout << "Lanjut ke menu utama : ";
        system("pause");
    }
}

void write() {
    system("cls");
    string judulLagu;
    cout << "=================================================" << endl;
    cout << "||                    Write                    ||" << endl;
    cout << "=================================================" << endl;
    cout << "Masukkan judul lagu: ";
    cin.ignore();
    getline(cin, judulLagu);
	
	ofstream filePlaylist(namaPlaylist, ios::app);
    if (filePlaylist.is_open())
    {
		filePlaylist << judulLagu << endl;
		filePlaylist.close();
	}
	
    ofstream fileLirik("lyrics/" + judulLagu + ".txt");
    if (fileLirik.is_open()) {
		cout << endl << endl;
        cout << "=================================================" << endl;
        cout << "Masukkan lirik lagu (akhirkan dengan ----):" << endl;
        cout << endl;
        string line;
        while (getline(cin, line) && line != "----") {
            fileLirik << line << endl;
        }
        fileLirik.close();
        cout << endl << endl;
        cout << "=================================================" << endl;
        cout << "File lirik " << judulLagu << ".txt telah dibuat." << endl;
        cout << "=================================================" << endl;
        
    } else {
		cout << endl << endl;
        cout << "=================================================" << endl;
        cout << "Gagal membuat file lirik " << judulLagu << ".txt" << endl;
        cout << "=================================================" << endl;
       
    }
    cout << endl << endl;
	cout << "=================================================" << endl;
    cout << "Lanjut ke menu utama : ";
    system("pause");
}

void read() {
	system("cls");
    string judulLagu;
    int i = 0;
    cout << "=================================================" << endl;
    cout << "||                    Read                     ||" << endl;
    cout << "=================================================" << endl;
    ifstream filePlaylist(namaPlaylist);
    if (filePlaylist.is_open()) {
        string bacaJudul;
        cout << endl;
        cout << "            Judul lagu dalam playlist :          " << endl;
        cout << endl;
        while (getline(filePlaylist, bacaJudul )) {
            ++i;
            cout << i << ". " << bacaJudul << endl;
        }
        filePlaylist.close();
    }
    
    cout << endl << endl;
    cout << "=================================================" << endl;
    cout << "Masukkan judul lagu yang ingin ditampilkan : " << endl;
    cout << "\tJudul lagu : ";
    cin.ignore();
    getline(cin, judulLagu);
	cout << endl;
	
    ifstream fileLirik("lyrics/" + judulLagu + ".txt");
    if (fileLirik.is_open()) {
        cout << "\t\t--- Lirik lagu " << judulLagu << " ---\t\t" << endl;
        string line;
        while (getline(fileLirik, line)) {
            cout << "\t" << line << endl;
            Sleep(1000);
        }
        
        fileLirik.close();
    } else {
		cout << endl << endl;
        cout << "=================================================" << endl;
        cout << "File lirik tidak ditemukan." << endl;
        cout << "=================================================" << endl;
        
    }
    cout << endl << endl;
	cout << "=================================================" << endl;
    cout << "Lanjut ke menu utama : ";
    system("pause");
}


