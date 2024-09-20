#include <iostream>
#include <cstdlib>  // Diperlukan untuk fungsi sistem

int main() {
    std::string folderName;
    std::cout << "Masukkan nama folder: ";
    std::cin >> folderName;

    // Membuat folder menggunakan perintah sistem
    std::string command = "mkdir " + folderName;
    int result = system(command.c_str());

    // Memeriksa apakah pembuatan folder berhasil
    if (result == 0) {
        std::cout << "Folder '" << folderName << "' berhasil dibuat.\n";
    } else {
        std::cout << "Gagal membuat folder.\n";
    }

    return 0;
}
