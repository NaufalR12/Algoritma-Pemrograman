#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float c,f,r,k;
	string jawab;

	cout << "=============================================================================" << endl;
	cout << "||                                                                         ||" << endl;
	cout << "||   PROGRAM KONVERSI SUHU DARI CELCIUS KE FAHRENHEIT, KELVIN DAN REAMUR   ||" << endl;
	cout << "||                                                                         ||" << endl;
	cout << "=============================================================================" << endl;
	cout << endl;
	cout << " Silakan Masukkan suhu (celcius) yang ingin anda konversi : ";
	cin >> c;

	while (!cin.good())
        {
           cin.clear();
           cin.ignore(INT_MAX, '\n');
           cout << "" << endl;
           cout << "=============================================================================" << endl;
		   cout << "||        Maaf, input yang anda masukkan salah. Silakan input lagi!        ||" << endl;
		   cout << "=============================================================================" << endl;
           cout << "" << endl;
           cout << "Silakan Masukkan suhu (celcius) yang ingin anda konversi : ";
           cin >> c;
         }
    cout << endl;
    cout << "=============================================================================" << endl;
	cout << "             Suhu yang akan di konversi "<<c<<" derajat celcius              " << endl;
    cout << "=============================================================================" << endl;

	f = ((9.0/5.0) *c) + 32;
	r = ((4.0/5.0) * c);
	k = 273.15+c;

	cout << endl;
	cout << "=============================================================================" << endl;
	cout << "   Hasil konversi : " << endl;
	cout << fixed;
    cout << setprecision(2);
	cout << "   Fahrenheit     : " <<f<< endl;
	cout << "   Reamur         : " <<r<< endl;
	cout << "   Kelvin         : " <<k<< endl;
	cout << "=============================================================================" << endl;
	cout << " Apakah anda ingin mengkonversi suhu lagi (ya/tidak) ? " ;
	cin >> jawab;

	if ( jawab == "ya")
	{
	while ( jawab == "ya" ){
		cout << endl;
	    cout << "Silakan Masukkan suhu (celcius) yang ingin anda konversi : ";
	    cin >> c;
	    while (!cin.good())
             {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "" << endl;
                cout << "=============================================================================" << endl;
		        cout << "||        Maaf, input yang anda masukkan salah. Silakan input lagi!        ||" << endl;
		        cout << "=============================================================================" << endl;
                cout << "" << endl;
                cout << "Silakan Masukkan suhu (celcius) yang ingin anda konversi : ";
                cin >> c;
             }
        cout << "=============================================================================" << endl;
	    cout << "             Suhu yang akan di konversi "<<c<<" derajat celcius              " << endl;
        cout << "=============================================================================" << endl;

	    f = ((9.0/5.0) * c) + 32;
	    r = ((4.0/5.0) * c);
	    k = 273.15 + c;

	    cout << endl;
	    cout << "=============================================================================" << endl;
	    cout << "   Hasil konversi : " << endl;
	    cout << fixed;
        cout << setprecision(2);
	    cout << "   Fahrenheit     : " <<f<<endl;
	    cout << "   Reamur         : " <<r<< endl;
	    cout << "   Kelvin         : " <<k<< endl;
	    cout << "=============================================================================" << endl;
	    cout << " Apakah anda ingin mengkonversi suhu lagi (ya/tidak) ? " ;
	    cin >> jawab; }

	    if ( jawab == "tidak")
	      {
			 cout << "=============================================================================" << endl;
		     cout << "||                Terima kasih telah menggunakan program ini               ||" << endl;
		     cout << "=============================================================================" << endl;
		  }
	}
	else
	{
		cout << "=============================================================================" << endl;
		cout << "||                Terima kasih telah menggunakan program ini               ||" << endl;
		cout << "=============================================================================" << endl;
	}
	return 0;
}

