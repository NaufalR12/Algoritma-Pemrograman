cout << "\nMasukkan Keyword Nama Penerima: ";
        cin.ignore();
        getline(cin, updateNamaPenerima);
        for (i = 0; i < banyakData; i++)
        {
            if (replaceUnderscore(data[i].namaPenerima) == updateNamaPenerima)
            {
                found = false;
                cout << "\nData dengan Keyword Nama Penerima \"" << updateNamaPenerima << "\" Berada dalam Data Nomor [" << i + 1 << "]" << endl;
                cout << "\tNama Barang\t: " << replaceUnderscore(data[i].namaBarang) << endl;
                cout << "\tNo. Hp Penerima\t: " << data[i].noHpPenerima << endl;
                cout << "\tKota Tujuan\t: " << replaceUnderscore(data[i].kotaTujuan) << endl;
                cout << "\tOpsi Pengiriman\t: " << replaceUnderscore(data[i].opsiPengiriman) << endl;
                cout << "\tHarga Ongkir\t: " << data[i].hargaOngkir << endl;

                cout << "\nReplace(Ganti) Data Baru Nomor [" << i + 1 << "]" << endl;
                cout << "\tNama Barang\t: ";
                getline(cin, dataBaru[i].namaBarang);
                cout << "\tNo. Hp Penerima\t: ";
                cin >> dataBaru[i].noHpPenerima;
                cin.ignore();
                cout << "\tKota Tujuan\t: ";
                getline(cin, dataBaru[i].kotaTujuan);
                cout << "\tOpsi Pengiriman\t: ";
                getline(cin, dataBaru[i].opsiPengiriman);
                cout << "\tHarga Ongkir\t: ";
                cin >> dataBaru[i].hargaOngkir;

                data[i].namaBarang = dataBaru[i].namaBarang;
                data[i].noHpPenerima = dataBaru[i].noHpPenerima;
                data[i].kotaTujuan = dataBaru[i].kotaTujuan;
                data[i].opsiPengiriman = dataBaru[i].opsiPengiriman;
                data[i].hargaOngkir = dataBaru[i].hargaOngkir;

                data[i].namaBarang = replaceSpasi(data[i].namaBarang);
                data[i].namaPenerima = replaceSpasi(data[i].namaPenerima);
                data[i].kotaTujuan = replaceSpasi(data[i].kotaTujuan);
                data[i].opsiPengiriman = replaceSpasi(data[i].opsiPengiriman);
            }
        }

        if (found)
        {
            cout << "\nData Nama Penerima \"" << updateNamaPenerima << "\" Tidak Ditemukan dalam File [" << namaFile << "]" << endl;
            return;
        }

        string namaFileUpdate;
        cout << "\nMasukkan Nama File yang Telah Diubah: ";
        cin.ignore();
        getline(cin, namaFileUpdate);
        ofstream saveDataFile(namaFileUpdate, ios::out); // Membuat File dan Menyimpan data masukkan kedalam file
        if (saveDataFile.is_open())
        {
            for (int i = 0; i < banyakData; i++)
            {
                saveDataFile << data[i].namaBarang << " "
                             << data[i].namaPenerima << " "
                             << data[i].noHpPenerima << " "
                             << data[i].kotaTujuan << " "
                             << data[i].opsiPengiriman << " "
                             << data[i].hargaOngkir << " "
                             << endl;
            }
            saveDataFile.close();
        }
        else
        {
            cout << "File Tidak Dapat Dibuka!" << endl;
            return;
        }

        ifstream openSavedFile(namaFileUpdate);
        if (openSavedFile.is_open())
        {
            i = 0;
            while (!openSavedFile.eof())
            {
                openSavedFile >> data[i].namaBarang;
                openSavedFile >> data[i].namaPenerima;
                openSavedFile >> data[i].noHpPenerima;
                openSavedFile >> data[i].kotaTujuan;
                openSavedFile >> data[i].opsiPengiriman;
                openSavedFile >> data[i].hargaOngkir;
                i++;
            }
            openSavedFile.close();

            banyakData = i - 1;
            cout << "\nData File [" << namaFile << "] Setelah Diupdate Menjadi File [" << namaFileUpdate << "]" << endl;
            cout << "+" << setfill('-') << setw(127) << "+" << endl;
            cout << "| NO\t|"
                 << " Nama Barang\t\t|"
                 << " Nama Penerima\t\t|"
                 << " No. Hp Penerima |"
                 << " Kota Tujuan\t\t|"
                 << " Opsi Kirim\t|"
                 << " Harga Ongkir |" << endl;
            cout << "+" << setfill('-') << setw(127) << "+" << endl;
            cout << setiosflags(ios::left);
            for (int i = 0; i < banyakData; i++)
            {
                cout << "| " << setfill(' ') << setw(6) << i + 1 << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].namaBarang) << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].namaPenerima);
                cout << "| " << setfill(' ') << setw(16) << data[i].noHpPenerima << "| " << setfill(' ') << setw(20) << replaceUnderscore(data[i].kotaTujuan) << "| " << setfill(' ') << setw(14) << replaceUnderscore(data[i].opsiPengiriman);
                cout << "| " << setfill(' ') << setw(13) << data[i].hargaOngkir << "|" << endl;
            }
            cout << resetiosflags(ios::left);
            cout << "+" << setfill('-') << setw(127) << "+" << endl;
        }

        cout << "\nUpdating Data File [" << namaFile << "] Berhasil Tersimpan dalam File Baru [" << namaFileUpdate << "]!" << endl;
    }
