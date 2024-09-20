#include <iostream>
using namespace std;

int main (){
	float a,b,c;
	char operasi,jawab;

	atas:
	cout<< " =============================================================="<<endl;
	cout<< " |               PROGRAM KALKULATOR SEDERHANA                 |"<<endl;
	cout<< " | 1. Penjumlahan                                             |"<<endl;
	cout<< " | 2. Pengurangan                                             |"<<endl;
	cout<< " | 3. Perkalian                                      	      |"<<endl;
	cout<< " | 4. Pembagian                                      	      |"<<endl;
	cout<< " =============================================================="<<endl;
	oprt:
	cout<< " Pilih operasi yang anda inginkan (1/2/3/4)        : ";
	cin>> operasi;
	if (!(operasi == '1' || operasi== '2' || operasi== '3' || operasi== '4'))
	{   cout<< " =============================================================="<<endl;
		cout<< " | Maaf, input yang anda masukan salah. silakan masukan lagi! |"<<endl;
		cout<< " =============================================================="<<endl;
		goto oprt; } //jika inputan yang masukkan salah maka program akan kembali ke awal untuk meminta input kembali
	cout<< " Apakah operasi yang anda pilih sudah benar (y/t) ?: "; // meminta konfirmasi user
	cin>> jawab;
	if (jawab== 't' || jawab== 'T')
	{ goto atas; } // jika user ingin mengubah inputan maka program akan kembali ke awal
	// goto berfungsi untuk memerintahkan program melompat ke baris manapun berdasarkan label yang telah dibuat.
	nilai:
	cout<< " =============================================================="<<endl;
	cout<< " Masukan nilai yang ingin anda operasikan          : "<<endl;
	cout<< " Nilai pertama  : ";
	cin>> a;
	cout<< " Nilai kedua    : ";
	cin>> b;
	cout<< " Apakah nilai yang anda masukan sudah benar (y/t) ? ";
	cin>> jawab;
	if (jawab== 't' || jawab== 'T')
	{ goto nilai; } // jika user ingin mengubah inputan maka program akan kembali ke awal

	switch (operasi)  { // switch case agar program bisa memilihi rumus sesuai dengan menu yang dipilih diawal
		case ('1') :
		{   c = a + b;
			cout<< " =============================================================="<<endl;
			cout<< " Hasil : "<<a<< " + " <<b<< " = " <<c<<endl;
			cout<< " =============================================================="<<endl; }
			break;
		case ('2') :
		{   c = a - b;
			cout<< " =============================================================="<<endl;
			cout<< " Hasil : "<<a<< " - " <<b<< " = " <<c<<endl;
			cout<< " =============================================================="<<endl;}
			break;
		case ('3') :
		{   c = a * b;
			cout<< " =============================================================="<<endl;
			cout<< " Hasil : "<<a<< " * " <<b<< " = " <<c<<endl;
			cout<< " =============================================================="<<endl; }
			break;
		default :
		    if (b != 0)
		    { c = a / b;
		      cout<< " =============================================================="<<endl;
		      cout<< " Hasil : "<<a<< " / " <<b<< " = " <<c<<endl;
		      cout<< " =============================================================="<<endl; }
		    else
		    { cout<< " Hasil : EROR!!! "<<endl;}
	}

	cout<< " Apakah anda masing ingin menggunakan kalkulator (y/t) ? ";
	cin>> jawab;
	if (jawab== 'y' || jawab== 'Y') //
	{ goto atas; } // jika user ingin menghitung kembali, maka program akan kembali memulai dari awal
	else
	{   cout<< " =============================================================="<<endl;
		cout<< " | Terima kasih telah menggunakan kalkulator.                 |"<<endl;
        cout<< " =============================================================="<<endl; }
}

