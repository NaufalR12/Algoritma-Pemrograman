#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void beranda(),menu_beranda(),pendaftaran(),masuk(),menu(),transfer(),setoran(),penarikan(),info_rekening(),cari_nasabah();

struct nasabah
{
                string nama;
                string alamat;
                int norek;
                double saldo;
                string pin,ttl,nohp,email,noid;
};

 int n=0;
                nasabah nas[100];
                int i,pil,pos,tfpos,p,t,pilih;
                long int no,notf,tmp,cari_no;
                double setor,tarik,tfsaldo;
                bool ketemu=false;
                bool tf=false;
                string inputpin;
                char jawab;

int main()
{
beranda();
                return 0;}

			void beranda() {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                     Selamat datang di Bank WBG                     ||" << endl;
				cout << "||                      Bank Wawasan Guna Bangsa                      ||" << endl;
				cout << "========================================================================" << endl;
				cout << "Nikmati layanan di bank kami dan dapatkan bunga sebesar 10%." << endl << endl;
				cout << "Silakan masuk jika sudah memiliki akun!!!" << endl << endl;
				cout << "Jika belum memiliki akun silakan mendaftar!!!" << endl << endl;
				system("pause");
				menu_beranda();
			}
			
			void menu_beranda() {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                           Menu Layanan                             ||" << endl;
				cout << "|| 1. Daftar                                                          ||" << endl;
				cout << "|| 2. Masuk                                                           ||" << endl;
				cout << "|| 3. Keluar                                                          ||" << endl;
				cout << "========================================================================" << endl;
				cout << "Pilih menu (1/2/3) : "; cin >> pilih;

				while (!(pilih >=1 && pilih <= 3 )) {
					cin.clear();
					cin.sync();
					cout << "========================================================================" << endl;
					cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
					cout << "========================================================================" << endl;
					cout << "Pilih menu (1/2/3) : "; cin >> pilih; }

				if (pilih == 1) {
					pendaftaran();}
					
				if (pilih == 2) {	
					masuk();}
				if (pilih == 3) {	
					cout << "========================================================================" << endl;
					cout << "||            TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI             ||" << endl;
					cout << "========================================================================" << endl; 	
					exit(0);}
		}	
		
			void pendaftaran() {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                     Formulir pendaftaran nasabah                   ||" << endl;
				cout << "========================================================================" << endl;
				cout<<" Masukan Nomer Rekening : "; cin>>no;
				
				for(i=0; i<n; i++) {
					
					if(no==nas[i].norek) {
						ketemu=true;
						break; }
					else {
						ketemu=false; }
				}
				
				if(ketemu) {    
					cout << "========================================================================" << endl;
					cout << "|| Nomor rekening tersebut sudah ada, silakan masuk atau ulangi lagi. ||" << endl;
					cout << "========================================================================" << endl;     
					system("pause");                                                                                                              
					menu_beranda();
				}
				else {
					cout << "========================================================================" << endl;
                    cin.ignore();
                    cout << "Masukan Nama Anda      : "; getline (cin, nas[n].nama); 
                    cout << "Masukan No Identitas   : "; cin >> nas[n].noid;                  
                    cin.ignore();                                        
                    cout << "Masukan Alamat         : "; getline (cin, nas[n].alamat); 
                    cout << "Masukan TTL            : "; getline (cin, nas[n].ttl);
                    cout << "No. Telephone          : "; cin >> nas[n].nohp;
                    cout << "Alamat Email           : "; cin >> nas[n].email;
                    cout << "Masukkan Pin Akun Anda : "; cin >> nas[n].pin;                                                            
                    cout << "Masukan Saldo Awal     : Rp."; cin >> nas[n].saldo;}
				
				n=n+1;
				nas[i].norek=no;
				cout << "========================================================================" << endl;
				cout<<" Kembali Ke Menu Utama : "; 
				system("pause");
				beranda();
			}                      
			
			void masuk() {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                 Selamat datang di halaman masuk                    ||" << endl;
				cout << "========================================================================" << endl; 
				cout << "Silakan masukan no rekening dan pin akun anda!" << endl;
				cout << "No rekening : "; cin >> no;
				cout << "Pin         : "; cin >> inputpin;
				
				nas[99].norek= no;
				i=0;
				while (!ketemu) {
					if (nas[i].norek == no) {
						pos=i;
						ketemu=true;}
					else {
						i=i+1; }
				}
				
							if (i == 99) {
								cout << "========================================================================" << endl;
								cout << "||  Maaf no rekening dan pin yang anda masukan salah, silakan ulangi! ||" << endl;
								cout << "========================================================================" << endl;
								system("pause");
								menu_beranda(); }
							else {
								menu(); }
            }
			
			void menu () {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                      Halaman layanan bank WBG                      ||" << endl;
				cout << "========================================================================" << endl;
				cout << "||                           Menu Layanan                             ||" << endl;
				cout << "|| 1. Transfer                                                        ||" << endl;
				cout << "|| 2. Setor                                                           ||" << endl;
				cout << "|| 3. Penarikan                                                       ||" << endl;
				cout << "|| 4. Info rekening                                                   ||" << endl;
				cout << "|| 5. Cari nasabah                                                    ||" << endl;
				cout << "|| 6. Beranda                                                         ||" << endl; 
				cout << "========================================================================" << endl;
				cout<<" Pilihan Anda : "; cin>>pil;
				while (pil < 1 || pil > 6) {
						cout << "========================================================================" << endl;
						cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
						cout << "========================================================================" << endl;
						cout<<" Pilihan Anda : "; cin>>pil; }
				
				switch (pil)  {
					case 1 : 
						transfer ();					
						break;					
					case 2 :					
						setoran();					
						break;					
					case 3 :					
						penarikan();					
						break;				
					case 4 :					
						info_rekening();					
						break;					
					case 5:					
						cari_nasabah();					
						break;					
					default :									
						beranda();					 
											 
									}										
			}

			                            

			void transfer() {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                             Menu transfer                          ||" << endl;
				cout << "========================================================================" << endl;
                cout << "Nomer Rekening Anda   : "<<no<< endl;
                cout << "Masukan Nomer Rekening Tujuan : "; cin>>notf;
                cout << "Apakah Nomer Rekening sudah benar (y/n) : "; cin >> jawab;
                
                while (jawab == 'n') {
					cout << "Masukan Nomer Rekening Tujuan : "; cin>>notf;
					cout << "Apakah Nomer Rekening sudah benar (y/n) : "; cin >> jawab; }
				
				nas[99].norek= notf;
				i=0;
				while (!tf) {
					if (nas[t].norek == notf) {
						tfpos=t;
						tf=true;}
					else {
						t=t+1; }
				}
				
                    if(t == 99){
						cout << "========================================================================" << endl;
						cout << "||                  Nomer Rekening Tidak Ditemukan                    ||" << endl;
						cout << "========================================================================" << endl;
                        cout<<" Kembali Ke Menu Utama : "; 
                        system("pause");
                        menu();}                            
                    else{
						cout << "========================================================================" << endl;
                        cout << "Masukan Nominal Transfer : Rp."; cin>> tfsaldo;
                        if (tfsaldo > nas[pos].saldo) {
							cout << "========================================================================" << endl;
							cout << "||                   Maaf, saldo anda tidak cukup!                    ||" << endl;
							cout << "========================================================================" << endl;
							system("pause");
							menu();}
						else {
                        nas[pos].saldo=nas[pos].saldo-tfsaldo;
                        nas[tfpos].saldo=nas[tfpos].saldo+tfsaldo;
                        cout << "========================================================================" << endl;
						cout << "||                          Transfer berhasil                         ||" << endl;
						cout << "========================================================================" << endl;
						cout << fixed;
						cout << setprecision(2);
                        cout << "Jumlah Saldo Anda Sekarang       : Rp."<<nas[pos].saldo<<endl;
                        cout << endl; 
                        cout<<" Kembali Ke Menu Utama : ";
                        system("pause");
                        menu();}
					}
			}
			
			void setoran() {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                             Menu setoran                           ||" << endl;
				cout << "========================================================================" << endl;
                cout << " Nomer Rekening  : "<<no<< endl;
					
						cout << "========================================================================" << endl;
                        cout << " Masukan Nominal Setoran : Rp."; cin>>setor;
                        nas[pos].saldo=nas[pos].saldo+setor;
                        cout << "========================================================================" << endl;
						cout << "||                           Setoran berhasil                         ||" << endl;
						cout << "========================================================================" << endl;
						cout << fixed;
						cout << setprecision(2);
                        cout << " Jumlah Saldo Anda       : Rp."<<nas[pos].saldo<<endl;
                        cout << endl;
                        cout<<" Kembali Ke Menu Utama : ";
                        system("pause");
                        menu(); 

                }
            
                       
			void penarikan() {
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                           Menu penarikan                           ||" << endl;
				cout << "========================================================================" << endl;
				cout << "Nomer Rekening   : "<<no<< endl;
				
						cout << "========================================================================" << endl;
						cout << "Masukan Jumlah Penarikan : Rp."; cin>>tarik;
						if(tarik<(nas[pos].saldo)){
							nas[pos].saldo=nas[pos].saldo-tarik;
							cout << "========================================================================" << endl;
							cout << "||                         Penarikan berhasil                         ||" << endl;
							cout << "========================================================================" << endl;
							cout << fixed;
							cout << setprecision(2);
							cout << "Sisa Saldo Anda          : Rp."<<nas[pos].saldo<<endl;
							cout<<endl; }
						else {
						cout << "========================================================================" << endl;
						cout << "||                    Saldo anda tidak mencukupi                      ||" << endl;
						cout << "========================================================================" << endl; }
						cout<<" Kembali Ke Menu Utama (enter) : "; 
                        system("pause");
						menu();

			}
			
			void info_rekening() {
				system("cls");
				cout<<endl;
                cout<< setfill('=') << setw(72) << "="<<endl;
                cout<<"                                                                        "<<endl;
				cout << "========================================================================" << endl;
				cout << "||                           Laporan rekening                         ||" << endl;
				cout << "========================================================================" << endl;
					
					cout << "No rekening      : "<< no << endl;
					cout << "Nama nasabah     : " << nas[i].nama << endl;  
                    cout << "No identitas     : " << nas[i].noid << endl;                                                          
                    cout << "Alamat           : " << nas[i].alamat << endl;
                    cout << "TTL              : " << nas[i].ttl << endl;
                    cout << "No. telephone    : " << nas[i].nohp << endl;
                    cout << "Alamat email     : " << nas[i].email << endl;
                    cout << fixed;
					cout << setprecision(2);
                    cout << "Saldo rekening   : " <<((nas[i].saldo)+(nas[i].saldo*0.1))<<endl; 
					
					cout << "========================================================================" << endl;
					cout<<endl;
					cout<<" Jumlah Total Saldo Diatas Setelah Ditambah Bunga 10%"<<endl<<endl;
					cout<<" Kembali Ke Menu Utama : "; 
					system("pause");
                    menu();
            }

			
			void cari_nasabah () {
				system("cls");
                bool ketemu=false;
				cout<<endl;
                cout << "========================================================================" << endl;
                cout<<" Masukan Nomer Rekening Yang Akan Dicari : "; cin>>cari_no;
                cout<<endl;
					
					nas[99].norek = cari_no;
					i=0;
					while (!ketemu) {
						if(nas[i].norek == cari_no) {
							pos=i;
							ketemu=true;}
						else {
							i=i+1;}
					}
					
                    if(i==99) {
						cout << "========================================================================" << endl;
						cout << "||                     No rekening tidak ditemukan                    ||" << endl;
						cout << "========================================================================" << endl;
						cout<<" Kembali Ke Menu Utama (enter) : "; 
                        system("pause");
                        menu(); }
                    else {
						cout<<" Nomer Rekening             : "<<nas[pos].norek<<endl;
						cout<<" Nama Nasabah               : "<<nas[pos].nama<<endl;     
						cout << "========================================================================" << endl;
						cout<<" Kembali Ke Menu Utama (enter) : "; 
                        system("pause");                                       
						menu();}
						
              }
            
            
				

			






                               


