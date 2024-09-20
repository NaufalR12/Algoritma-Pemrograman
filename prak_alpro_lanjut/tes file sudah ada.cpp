#include <iostream>
#include <fstream>
#include <string>

bool fileExists(const std::string& fileName) {
    std::ifstream file(fileName);
    return file.good();
}

void createFile(const std::string& fileName) {
    std::ofstream file(fileName);
    if (file) {
        std::cout << "File " << fileName << " berhasil dibuat." << std::endl;
    } else {
        std::cout << "Gagal membuat file " << fileName << "." << std::endl;
    }
}

int main() {
    std::string fileName = "data.txt";

    if (fileExists(fileName)) {
        std::cout << "File dengan nama tersebut sudah ada!" << std::endl;
    } else {
        createFile(fileName);
    }

    return 0;
}
