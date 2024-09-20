#include <iostream>
#include <iomanip>
using namespace std;

    void pemesanan(){
	     string username, password, nama, kode_transaksi, nama_menu;
	     int harga, banyak, total, menu, diskon, uang;
	
			cout << setfill('=') << setw(45) << "=" << endl;
			cout << "||    PROGRAM KASIR IN-N-OUT RESTAURANT    ||" << endl;
			cout << setfill('=') << setw(45) << "=" << endl;
			cout << endl;
			cout << "Username	: "; cin >> username;
			cout << "Password	: "; cin >> password;
			cout << endl;
	
		while (!(username == "naufal" && password == "123220052")) { 
			cout << "=============================================" << endl;
			cout << "|| Perhatian!!!                            ||" << endl;
	        cout << "=============================================" << endl;
			cout << "|| LOGIN GAGAL!                            ||" << endl;
		    cout << "|| Mohon masukkan username dan password    ||" << endl;
		    cout << "|| dengan benar!                           ||" << endl;
		    cout << "=============================================" << endl<< endl;
		    system("pause");
			cout << endl;
	        cout << "Username	: "; cin >> username;
	        cout << "Password	: "; cin >> password;
	        cout << endl; }

		cout << "=============================================" << endl;
		cout << "|| LOGIN BERHASIL!                         ||" << endl;
	    cout << "=============================================" << endl<< endl;
		system("pause");
		system("cls");
		cout << "==================================================" << endl;
		cout << "||                 MENU PESANAN                 ||" << endl;
		cout << "==================================================" << endl;
		cout << endl;
		cout << "Kode Transaksi	 : "; cin >> kode_transaksi;
		cin.ignore();
		cout << "Nama Pembeli	 : "; getline(cin, nama);
		cout << "==================================================" << endl;
		cout << "| NO |     NAMA MENU          |      HARGA      ||" << endl;
		cout << "==================================================" << endl;
		cout << "|1.  | Nasi Goreng Sosis      | Rp50.000,00     ||" << endl;
		cout << "|2.  | Nasi Goreng Udang      | Rp36.000,00     ||" << endl;
		cout << "|3.  | Magelangan             | Rp25.000,00     ||" << endl;
		cout << "|4.  | Lotek                  | Rp18.000,00     ||" << endl;
		cout << "|5.  | Mi Dokdok              | Rp27.000,00     ||" << endl;
		cout << "|6.  | Nutrisari              | Rp10.000,00     ||" << endl;
		cout << "|7.  | Ektra Joss             | Rp20.000,00     ||" << endl;
		cout << "|8.  | Teajuss                | Rp40.000,00     ||" << endl;
		cout << "|9.  | Susu                   | Rp32.000,00     ||" << endl;
		cout << "|10. | Jus Jeruk              | Rp12.000,00     ||" << endl;
		cout << "==================================================" << endl;
		cout << endl;
		cout << "Masukkan Nomor Menu 	: "; cin >> menu;
		cout << endl;
		
		while (!(menu >= 1 && menu <= 10)){
			cout << "==================================================" << endl;
			cout << "|| Perhatian!!!                                 ||" << endl;
			cout << "==================================================" << endl;
			cout << "|| Maaf menu yang anda pilih tidak tersedia.    ||" << endl;
			cout << "|| Silakan masukkan nomor menu lagi!            ||" << endl;
			cout << "==================================================" << endl << endl;
		    cout << "Masukkan Nomor Menu 	: "; cin >> menu;
		    cout << endl; }
		
			switch(menu){
				case 1 :
					nama_menu = "Nasi Goreng Sosis";
					harga = 50000;
					break;
					
				case 2:
					nama_menu = "Nasi Goreng Udang";
					harga = 36000;
					break;
					
				case 3:
					nama_menu = "Magelangan";
					harga = 25000;
					break;
					
				case 4:
					nama_menu = "Lotek";
					harga = 18000;
					break;
					
				case 5:
					nama_menu = "Mi Dokdok";
					harga = 27000;
					break;
					
				case 6:
					nama_menu = "Nutrisari";
					harga = 10000;
					break;
					
				case 7:
					nama_menu = "Ekstra Joss";
					harga = 20000;
					break;
					
				case 8:
					nama_menu = "Teajuss";
					harga = 40000;
					break;
					
				case 9:
					nama_menu = "Susu";
					harga = 32000;
					break;
					
				default:
					nama_menu = "Jus Jeruk";
					harga = 12000;
				
			}
			cout << "==================================================" << endl;
			cout << "Nama Menu\t\t: " << nama_menu << endl;
			cout << "Harga per Porsi\t\t: " << harga << " Rupiah" << endl;
			cout << "Banyak Pesanan\t\t: "; cin >> banyak;
			total = harga*banyak;
			cout << "Total Harga menu\t: " << total << " Rupiah" << endl;
			cout << "==================================================" << endl;
			system("pause");
			
			system("cls");
			cout << "=====================================================" << endl;
			cout << "||                  NOTA PEMBELIAN                 ||" << endl;
			cout << "=====================================================" << endl;
			cout << endl;
			cout << "Kode Transaksi\t: " << kode_transaksi << endl;
			cout << "Nama Pembeli\t: " << nama << endl;
			cout << "Nama Menu\t: " << nama_menu << endl;
			cout << "Banyak Pesanan\t: " << banyak << endl;
			cout << "Harga per Porsi\t: " << harga << endl;
			cout << endl;
			cout << "-----------------------------------------------------" << endl;
			cout << endl;
			
			if(total >= 50000){
				diskon = 0.4*total;
				if(diskon > 30000){
					diskon = 30000;
				}
				
				cout << "Total Harga\t\t: " << total << " Rupiah" << endl;
				cout << endl;
				cout << "-----(Diskon 40% (maks 30rb) min pembelian 50rb)-----" << endl;
				cout << endl;
				cout << "Nominal Diskon\t\t: " << diskon << " Rupiah" << endl;
				cout << "Total Pembayaran Setelah Diskon\t: " << total-diskon << " Rupiah" << endl;
				cout << endl;
				cout << "-----------------------------------------------------" << endl;
				cout << endl;
				cout << "Jumlah uang yang dibayarkan\t: ";
				cin >> uang;
				if(uang < (total-diskon)){
					cout << endl;
					cout << "=====================================================" << endl;
					cout << "|| Perhatian!!!                                    ||" << endl;
					cout << "=====================================================" << endl;
					cout << "|| Uang yang Dibayarkan kurang!                    ||" << endl;
					cout << "|| Silakan cuci semua piring dibelakang!!!         ||" << endl;
					cout << "=====================================================" << endl;
					system("pause");
				}else{
					cout << "Jumlah Kembalian\t\t: " << uang - (total-diskon) << " Rupiah" << endl;
				cout << "-----------------------------------------------------" << endl;
					cout << endl;
				}
				
			}else{
				cout << "Total Harga                 : " << total << " Rupiah" << endl;
				cout << "Total Pembayaran            : " << total << " Rupiah" << endl;
				cout << "Jumlah uang yang dibayarkan : ";
				cin >> uang;
				if(uang < total){
					cout << endl;
					cout << "=====================================================" << endl;
					cout << "|| Perhatian!!!                                    ||" << endl;
					cout << "=====================================================" << endl;
					cout << "|| Uang yang Dibayarkan kurang!                    ||" << endl;
					cout << "|| Silakan cuci semua piring dibelakang!!!         ||" << endl;
					cout << "=====================================================" << endl;
					system("pause");
				}else{
					cout << "Jumlah Kembalian\t\t: " << uang - total << " Rupiah" << endl;
				cout << "----------------------------------------------------" << endl;
					cout << endl;
				}
			}
			
		}

int main () {
	char jawab;
		pemesanan();
		cout<< "Kembali ke menu pemesanan (y/n) ? ";
		cin>> jawab;
		while (jawab == 'y' || jawab == 'Y') {
			system("cls");
			pemesanan();
			cout<< "Kembali ke menu pemesanan (y/n) ? ";
		    cin>> jawab;
		}
		if (jawab =='n' || jawab == 'N') {            
			cout << "======================================================" << endl;
			cout << "| Terima kasih telah makan di restoran sipaling enak |" << endl;
			cout << "| Silakan datang kembali!!!                          |" << endl;
			cout << "======================================================" << endl; 
		}
		
}

	
