cout << "Input Nama File(.txt) Pertama: ";
    cin >> file1;
    ifstream openSavedFile1(file1);
    if (openSavedFile1.is_open())
    {
        while (!openSavedFile1.eof())
        {
            openSavedFile1 >> data[i].namaBarang;
            openSavedFile1 >> data[i].namaPenerima;
            openSavedFile1 >> data[i].noHpPenerima;
            openSavedFile1 >> data[i].kotaTujuan;
            openSavedFile1 >> data[i].opsiPengiriman;
            openSavedFile1 >> data[i].hargaOngkir;
            i++; // dalam bentuk underscore
        }
        openSavedFile1.close();
        banyakData1 = i - 1;

        for (i = 0; i < banyakData1; i++)
        {
            tempFile1[i].namaBarang = data[i].namaBarang;
            tempFile1[i].namaPenerima = data[i].namaPenerima;
            tempFile1[i].noHpPenerima = data[i].noHpPenerima;
            tempFile1[i].kotaTujuan = data[i].kotaTujuan;
            tempFile1[i].opsiPengiriman = data[i].opsiPengiriman;
            tempFile1[i].hargaOngkir = data[i].hargaOngkir;
        }

    }
    else
    {
        cout << "\nFile tidak Ditemukan dalam Directory!" << endl;
        return;
    }

    cout << "\nInput Nama File(.txt) Kedua: ";
    cin >> file2;
    ifstream openSavedFile2(file2);
    if (openSavedFile2.is_open())
    {
        while (!openSavedFile2.eof())
        {
            openSavedFile2 >> data[j].namaBarang;
            openSavedFile2 >> data[j].namaPenerima;
            openSavedFile2 >> data[j].noHpPenerima;
            openSavedFile2 >> data[j].kotaTujuan;
            openSavedFile2 >> data[j].opsiPengiriman;
            openSavedFile2 >> data[j].hargaOngkir;
            j++;
        }
        openSavedFile2.close();
        banyakData2 = j - 1;

        for (j = 0; j < banyakData2; j++)
        {
            tempFile2[j].namaBarang = data[j].namaBarang;
            tempFile2[j].namaPenerima = data[j].namaPenerima;
            tempFile2[j].noHpPenerima = data[j].noHpPenerima;
            tempFile2[j].kotaTujuan = data[j].kotaTujuan;
            tempFile2[j].opsiPengiriman = data[j].opsiPengiriman;
            tempFile2[j].hargaOngkir = data[j].hargaOngkir;
        }

    }
    else
    {
        cout << "\nFile tidak Ditemukan dalam Directory!" << endl;
        return;
    }

    cout << "\nMasukkan Nama File Hasil Merged(Gabungan): ";
    cin >> file3;
    ofstream saveDataFile(file3, ios::out);
    if (saveDataFile.is_open())
    {
        for (int i = 0; i < banyakData1; i++)
        {
            saveDataFile << tempFile1[i].namaBarang << " "
                         << tempFile1[i].namaPenerima << " "
                         << tempFile1[i].noHpPenerima << " "
                         << tempFile1[i].kotaTujuan << " "
                         << tempFile1[i].opsiPengiriman << " "
                         << tempFile1[i].hargaOngkir << " "
                         << endl;
        }
        for (int j = 0; j < banyakData2; j++)
        {
            saveDataFile << tempFile2[j].namaBarang << " "
                         << tempFile2[j].namaPenerima << " "
                         << tempFile2[j].noHpPenerima << " "
                         << tempFile2[j].kotaTujuan << " "
                         << tempFile2[j].opsiPengiriman << " "
                         << tempFile2[j].hargaOngkir << " "
                         << endl;
        }
        saveDataFile.close();
        cout << "\nData Berhasil Digabungkan dalam File [" << file3 << "]" << endl;
    }
