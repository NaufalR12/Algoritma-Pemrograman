#include <iostream>
#include <iomanip> // library untuk menggunakan setfill, setw dan setprecision
using namespace std;

main () {
string username,password,nama,namamenu,souvenir;
int kode_transaksi,nomenu,banyak;
float harga,total_harga_menu,setelahdiskon,bayar,kembalian,diskon;
cout << "======================================" << endl;
cout << "|| PROGRAM KASIR TOKO BESI PAK IMAN ||" << endl;
cout << "======================================" << endl;

cout << " Username\t: "; cin >> username;
cout << " Password\t: "; cin >> password;

if ( username == "naufal" && password == "123220052") { // untuk memeriksa username dan password apakah benar atau tidak
	cout << "======================================" << endl; // jika benar maka akan lanjut ke menu pesanan
	cout << "|| login berhasil!!!                ||" << endl;
	cout << "======================================" << endl<<endl;
	cout << "Selamat datang " <<username<< endl;
	cout << "Selamat bekerja !!!! " << endl;
	system ("pause");
	cout << "======================================" << endl;
	cout << "|| PROGRAM KASIR TOKO BESI PAK IMAN ||" << endl;
	cout << "======================================" << endl;
	system ("cls");

	cout << "======================================" << endl;
	cout << "||            Menu pesanan          ||" << endl;
	cout << "======================================" << endl;

	cout << endl;
	cout << "Kode transaksi\t: "; cin >> kode_transaksi;
	cin.ignore(); // untuk mengatasi getline agar bisa diinput
	cout << "Nama pembeli\t: ";
	getline(cin, nama);
	cout << endl;
	cout << "======================================" << endl;
	cout << "| No | Nama barang    |      Harga   |" << endl;
	cout << "======================================" << endl;
	cout << "| 1  | Palu           | Rp 45.000,00 |" << endl;
	cout << "| 2  | Paku           | Rp 1.000,00  |" << endl;
	cout << "| 3  | Paku beton     | Rp 2.000,00  |" << endl;
	cout << "| 4  | Gergaji        | Rp 65.000,00 |" << endl;
	cout << "| 5  | Cangkul        | Rp 250.000,00|" << endl;
	cout << "| 6  | Obeng          | Rp 30.000,00 |" << endl;
	cout << "| 7  | Pahat          | Rp 190.000,00|" << endl;
	cout << "| 8  | Kuas           | Rp 20.000,00 |" << endl;
	cout << "| 9  | Engsel pintu   | Rp 20.000,00 |" << endl;
	cout << "| 10 | Cat            | Rp 95.000,00 |" << endl;
	cout << "======================================" << endl;
	cout << endl;
	cout << "Masukkan nomor menu\t: "; cin >> nomenu;

	if (nomenu >= 1 && nomenu <= 10 ) {
		switch (nomenu) { // menentukan harga dan nama sesuai dengan menu
			case 1 :
			    namamenu = "Palu";
			    harga = 45000;
			    break;
			case 2 :
			    namamenu = "Paku";
			    harga = 1000;
			    break;
			case 3 :
				namamenu = "Paku beton";
				harga = 2000;
				break;
			case 4 :
				namamenu = "Gergaji";
				harga = 65000;
				break;
			case 5 :
				namamenu = "Cangkul";
				harga = 250000;
				break;
			case 6 :
				namamenu = "Obeng";
				harga = 30000;
				break;
			case 7 :
				namamenu = "Pahat";
				harga = 190000;
				break;
			case 8 :
				namamenu = "Kuas";
				harga = 20000;
				break;
			case 9 :
				namamenu = "Engsel pintu";
				harga = 20000;
				break;
			default :
				namamenu = "Cat";
				harga = 92000;
			}
		cout << fixed;
		cout << setprecision(2); // untuk menampilkan output desimal dua angka dibelakang koma
		cout << endl;
		cout << "Nama menu\t: "<<namamenu<< endl;
		cout << "Harga satuan\t: " <<harga<< " Rupiah" << endl;
		cout << "Banyak satuan\t: "; cin >> banyak;
		total_harga_menu = harga * banyak; // rumus untuk menghitung total dari harga menu dipilih
		cout << "Total harga menu\t: " <<total_harga_menu<<  " Rupiah" << endl;
		system("pause");
		system("cls");

		cout << setfill('-') << setw (58) << "-" << endl; // unutk menampilkan simbol "-" sebanyak 58 kali
		cout << "||           NOTA PEMBELIAN         ||" << endl;
		cout << setfill('-') << setw (58) << "-" << endl;
		cout << endl;
		cout << "kode trasaksi\t: " <<kode_transaksi<< endl;
		cout << "Nama pembeli\t: " <<nama<< endl;
		cout << "Nama menu\t: " <<namamenu<< endl;
		cout << "Banyak pesanan\t: " <<banyak<< endl;
		cout << "Harga persatuan\t: " <<harga<< endl;
		cout << endl;
		cout << setfill('-') << setw (58) << "-" << endl;
		cout << endl;

		if ( total_harga_menu >= 125000 ){ // pembelian dengan minimal 125 ribu akan mendapatkan diskon
			diskon = total_harga_menu * 0.025; // diskon 2.5%
			if (diskon > 21000) { //diskon 2.5% dengan maksimal 21 ribu
				diskon = 21000; }
			if ( total_harga_menu >= 1000000 && total_harga_menu <= 1250000) { // bonus souvenir dengan syarat tertentu
				souvenir = "Selamat anda mendapatkan Gantungan kunci!"; }
			else if ( total_harga_menu >= 1260000 && total_harga_menu <= 1380000) {
				souvenir = "Selamat anda mendapatkan Mobil mainan!"; }
			else if ( total_harga_menu >= 1390000 && total_harga_menu <= 2100000) {
				souvenir = "Selamat anda mendapatkan Bolpoin pilot!"; }
			else if ( total_harga_menu >= 2110000 && total_harga_menu <= 4000000) {
				souvenir = "Selamat anda mendapatkan Voucher makanan Rp. 100.000!"; }
			else if ( total_harga_menu > 4000000) {
				souvenir = "Selamat anda mendapatkan Mobil kijang!"; }
			else {
				souvenir = "Maaf anda tidak mendapatkan souvenir!"; }
			setelahdiskon = total_harga_menu - diskon;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << "Total harga\t: " <<total_harga_menu<< " Rupiah" << endl;
			cout << "Souvenir\t: "<<souvenir<< endl;
			cout << endl;
			cout << "---(DISKON 2.5% (MAKS 21 RIBU ) MIN PEMBELIAN 125 RIBU)---" << endl;
			cout << endl;
			cout << "Nominal diskon\t: "<<diskon<< " Rupiah"<< endl;
			cout << "Total pembayaran setelah diskon\t: "<<setelahdiskon<< " Rupiah" << endl; // total pembayaran yang harus dibayar pelanggan setelah diskon

			cout << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << endl;
			cout << "jumlah uang yang dibayarkan\t: "; cin >> bayar;
			kembalian = bayar - setelahdiskon;
			cout << "Jumlah kembalian\t: "<<kembalian<< " Rupiah" << endl;

			if ( bayar < setelahdiskon ) { // jika uang yang dibayar kurang
			cout << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << endl<< endl << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << "Uang anda kurang!!!" << endl;
			cout << "Silakan bayar kekurangan atau bekerja di toko ini selama seharian "<<nama<< endl;
		}
			else { //jika uang yang dibayar cukup
			cout << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << endl<< endl << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << "Terima kasih telah berbelanja di sini!!!" << endl;
			cout << "Semoga harimu menyenangkan "<<nama<< "!!!" << endl;
		}
			}
		else { // proses pembayaran jika tidak mendapatkan diskon
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << "Total harga\t: " <<total_harga_menu<< " Rupiah" << endl;
			cout << endl;
			cout << "jumlah uang yang dibayarkan\t: "; cin >> bayar;
			kembalian = bayar - total_harga_menu;
			cout << "Jumlah kembalian\t: "<<kembalian<< " Rupiah" << endl;
			if ( bayar < total_harga_menu ) { // jika uang yang dibayarkan tidak cukup
			cout << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << endl<< endl << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << "Uang anda kurang!!!" << endl;
			cout << "Silakan bayar kekurangan atau bekerja di toko ini selama seharian "<<nama<< endl;
		}
			else { // jika uang yang dibayarkan cukup
			cout << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << endl<< endl << endl;
			cout << setfill('-') << setw (58) << "-" << endl;
			cout << "Terima kasih telah berbelanja di sini!!!" << endl;
			cout << "Semoga harimu menyenangkan "<<nama<< "!!!" <<endl;
		}
	}
}
		else { //jika barang yang dipilih tidak ada
			cout << "No menu yang anda masukkan tidak ada" << endl;
			cout << "Silakan masukkan lagi !!! " << endl; }

	}
else // jika username dan password yang digunakan salah
{
	cout << "======================================" << endl;
	cout << "||            login gagal !!!       ||" << endl;
	cout << "||    Harap masukkan username dan   ||" << endl;
	cout << "||       password dengan benar      ||" << endl;
	cout << "======================================" << endl;
 }
}
