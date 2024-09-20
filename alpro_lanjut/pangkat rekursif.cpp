#include <iostream>
using namespace std;

int pangkat(int a, int b);

int main(){
    int a = 0,b = 0;
    cout<<"Menghitung a pangkat b"<<endl;
    cout<<"Masukkan nilai a = ";
    cin>>a;
    cout<<"Masukkan nilai b = ";
    cin>>b;
    cout<<"a^b = "<<pangkat(a,b)<<endl;
    return 0;
}
int pangkat(int a,int b){
    if(b == 1){
        return a;
    }
    else{
        return a * pangkat(a,b-1);
    }
}
