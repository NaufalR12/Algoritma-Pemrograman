#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

void create_lyrics_folder() {
    // membuat folder "lyrics" jika belum ada
    if (!fs::exists("lyrics")) {
        fs::create_directory("lyrics");
        cout << "Folder \"lyrics\" telah dibuat.\n";
    }
}

void create_playlist_file() {
    string playlist_name;
    cout << "Masukkan nama playlist: ";
    getline(cin, playlist_name);

    // menambahkan ekstensi ".txt" pada nama playlist
    playlist_name += ".txt";

    // membuka file playlist untuk ditulis
    ofstream playlist_file;
    playlist_file.open(playlist_name);

    if (playlist_file.is_open()) {
        cout << "Playlist " << playlist_name << " telah dibuat.\n";
    } else {
        cerr << "Gagal membuat playlist " << playlist_name << endl;
        exit(1);
    }

    // meminta pengguna memasukkan lirik dan menulisnya ke dalam file playlist
    string lyrics;
    cout << "Masukkan lirik lagu (akhirkan dengan ----):\n";
    getline(cin, lyrics);
    while (lyrics != "----") {
        playlist_file << lyrics << endl;
        getline(cin, lyrics);
    }

    // menutup file playlist
    playlist_file.close();
    cout << "Lirik telah ditulis ke dalam " << playlist_name << endl;
}

void read_playlist_file() {
    string playlist_name;
    cout << "Masukkan nama playlist: ";
    getline(cin, playlist_name);

    // menambahkan ekstensi ".txt" pada nama playlist
    playlist_name += ".txt";

    // membuka file playlist untuk dibaca
    ifstream playlist_file;
    playlist_file.open(playlist_name);

    if (playlist_file.is_open()) {
        string line;
        cout << "Isi " << playlist_name << ":\n";
        while (getline(playlist_file, line)) {
            cout << line << endl;
        }
    } else {
        cerr << "Gagal membuka playlist " << playlist_name << endl;
        exit(1);
    }

    // menutup file playlist
    playlist_file.close();
}

int main() {
    create_lyrics_folder();

    while (true) {
        cout << "\nMENU\n";
        cout << "1. Write\n";
        cout << "2. Read\n";
        cout << "3. Exit\n";
        cout << "Pilih menu: ";

        int menu;
        cin >> menu;
        cin.ignore(); // mengabaikan karakter newline (\n)

        switch (menu) {
            case 1:
                create_playlist_file();
                break;
            case 2:
                read_playlist_file();
                break;
            case 3:
                exit(0);
            default:
                cout << "Menu tidak valid. Silakan coba lagi.\n";
                break;
        }
    }

    return 0;
}
