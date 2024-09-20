#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

bool folderExists(const std::string& folderName) {
    return fs::exists(folderName);
}

bool createFolder(const std::string& folderName) {
    return fs::create_directory(folderName);
}

int main() {
    using namespace std;

    string folderName;
    cout << "Masukkan nama folder: ";
    getline(cin, folderName);

    if (folderExists(folderName)) {
        cout << "Folder dengan nama tersebut sudah ada." << endl;
    } else {
        if (createFolder(folderName)) {
            cout << "Folder berhasil dibuat." << endl;
        } else {
            cout << "Gagal membuat folder." << endl;
        }
    }

    return 0;
}
