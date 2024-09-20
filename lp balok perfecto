#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main ()

{

    float p,l,t,V;
    string dimensi;
    
     cout<<"MENGHITUNG_VOLUME_BALOK"<<endl;
   	 cout<<"DALAM_SATUAN_CM"<<endl;
    cout<<"------------------------"<<endl;

    cout<<"Masukkan nilai panjang   = ";
    cin >> p;
    while (!cin.good() || p < 0)
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "" << endl;
        cout << "Salah input, silahkan input lagi" << endl;
        cout << "" << endl;
        cout << "Masukkan nilai panjang	  = "; 
        cin >> p;
    }

    cout<<"Masukkan nilai lebar  	 = ";
    cin>>l;
    while (!cin.good() || l < 0)
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n'); 
        cout << "" << endl;
        cout << "Salah input, silahkan input lagi" << endl;
        cout << "" << endl;
        cout << "Masukkan nilai lebar  	 = "; 
        cin >> l;
    }

    cout<<"Masukkan nilai tinggi  	 = ";
    cin>>t;
    while (!cin.good() || t < 0)
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "" << endl;
        cout << "Salah input, silahkan input lagi" << endl;
        cout << "" << endl;
        cout << "Masukkan nilai tinggi  	 = "; 
        cin >> t;
    }
    do {
	cout << "Masukkan dimensi : ";
	cin >> dimensi;
	
	if (!(dimensi == "mm" || dimensi == "cm" || dimensi == "dm"|| dimensi == "m"|| dimensi == "dam"|| dimensi == "hm"|| dimensi == "km")) {
		cout<<endl;
		cout << "Masukkan satuan yang benar!" << endl;
	}
	} while (!(dimensi == "mm" || dimensi == "cm" || dimensi == "dm" || dimensi == "m"|| dimensi == "dam"|| dimensi == "hm"|| dimensi == "km"));
	

    V = p*l*t;
    cout<<"Volume Balok = "<<V<<""<<dimensi<<"^3";

    return 0;
    }
