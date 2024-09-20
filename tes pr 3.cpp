#include <iostream>
using namespace std;

int main(){
 
    /*float tugas,uts,uas,nakhir;
    cout << "masukkan nilai TUGAS : ";
    cin >> tugas;
    cout << "masukkan nilai UTS : ";
    cin >> uts;
    cout << "masukkan nilai UAS : ";
    cin >> uas;
    nakhir = ((0.20*tugas)+(0.35*uts)+(0.45*uas));
    cout << "Nilai Akhir adalah: " << nakhir;*/
     
    float lp,a; 
    cout << "Masukkan nilai panjang = ";
    cin >> a;                                
    lp = (3*a*a*1.732)/2  ; 
    cout << "luas permukaan segi 6 = "<<lp<<" cm^2";  
    cout << endl;
    return 0;
}
