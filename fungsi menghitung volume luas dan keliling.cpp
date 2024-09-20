#include <iostream>
using namespace std;
void vtabung, vkerucut, kldanl_segitiga, kldanl_persegip;
int main () {
	int pil;
	float jari2,tinggi,alas,sisi2,sisi3,panjang,lebar;
	
				system("cls");
				cout << "========================================================================" << endl;
				cout << "||                            PROGRAM RUMUS                           ||" << endl;
				cout << "========================================================================" << endl;
				cout << "||                                 Menu                               ||" << endl;
				cout << "|| 1. VOLUME TABUNG                                                   ||" << endl;
				cout << "|| 2. VOLUME KERUCUT                                                  ||" << endl;
				cout << "|| 3. KELILING DAN LUAS SEGITIGA                                      ||" << endl;
				cout << "|| 4. KELILING DAN LUAS PERSEGI PANJANG                               ||" << endl;
				cout << "========================================================================" << endl;
				cout<<" Pilihan Anda : "; cin>>pil;
				while (pil < 1 && pil > 6) {
						cout << "========================================================================" << endl;
						cout << "||    Maaf menu yang anda pilih tidak tersedia. silakan pilih lagi!   ||" << endl;
						cout << "========================================================================" << endl;
						cout<<" Pilihan Anda : "; cin>>pil; }
				
				switch (pil)  {
					case 1 : 
						cout << "Masukkan jari-jari : "; cin >> jari2;
						cout << "Masukkan tinggi tabung : "; cin >> tinggi;
						vtabung (jari2, tinggi);					
						break;					
					case 2 :		
						cout << "Masukkan jari-jari : "; cin >> jari2;
						cout << "Masukkan tinggi kerucut : "; cin >> tinggi;
						vkerucut(jari2, tinggi);					
						break;					
					case 3 :		
						cout << "Masukkan alas : "; cin >> alas;
						cout << "Masukkan tinggi : "; cin >> tinggi;
						cout << "Masukkan sisi kedua : "; cin >> sisi2;
						cout << "Masukkan sisi ketiga : "; cin >> sisi3;
						kldanl_segitiga(alas,tinggi,sisi2,sisi3);					
						break;											
					default :									
						cout << "Masukkan panjang "; cin >> panjang;
						cout << "Lebar : "; cin >> lebar;
						kldanl_persegip(panjang, lebar);					 
											 
				}
}
											
																	
void vtabung(float jari2, float tinggi) {
	float volume;
	volume = 3.14 * jari2 * jari2 * tinggi;
	cout << "Voleme tabung : "<< volume << endl;
}

void vkerucut (float jari2, float tinggi) {
	float volume;
	volume = 3.14 * (1/3) * jari2* jari2* tinggi;
	cout << "volume kerucut : " << volume << endl;
}

void kldanl_segitiga(float alas,float tinggi, float sisi2, float sisi3) {
	float keliling,luas;
	keliling = alas + sisi2 + sisi3;
	luas = 0.5 * alas * tinggi;
	cout << "Keliling segitiga : " << keliling << endl;
	cout << "luas segitiga : " << luas << endl;
}

void kldanl_persegip (float panjang, float lebar) {
	float keliling,luas;
	keliling = 2 * (panjang + lebar);
	luas = panjang*lebar;
	cout << "Keliling persegi panjang : " << keliling << endl;
	cout << "luas persegi panjang : " << luas << endl;
}
