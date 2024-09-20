
#include<iostream>
#include<iomanip>

using namespace std;

void menu();
void output();
void input();

typedef struct {
	int No,Skor;
	string Nama;
} komponen;

typedef struct {
	int NoMhs, Banyakkomponen;
	string Nama, MTKul;
	komponen Komp[5];
} mahasiswa;



mahasiswa Mhs[100];
int i,j,pilih,banyak;



int main(){
    menu();
    return 0;
    }

void menu(){
	system("cls");
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n";
    cout<<left<<setw(10)<<setfill(' ')<<"|"<<left<<setw(51)<<setfill(' ')<<"Selamat Datang di Program Data Mahasiswa"<<"|"<< endl;
    cout<<"+"<<setfill('=')<<setw(60)<<"="<<"+\n\n";
    cout<<"Menu pilihan : \n";
    cout<<"1. Input Data\n";
    cout<<"2. Output data\n";
    cout<<"3. Keluar\n";
    cout<<"Masukan Pilihan  = ";cin>>pilih;
    switch(pilih){
        case 1: input(); break;
        case 2: output(); break;
        case 3: cout<<"Program Berakhir!\n"; exit(0);
        default: cout<<"Input salah" << endl;
                break;
    }
}

void input(){
	system("cls");
    cout<<"Banyak mahasiswa = "; cin>>banyak;
    cout<<endl;

        for(i=0;i<banyak;i++){
            cout<<"Mhs["<<i<<"].NoMhs          = ";
            cin>>Mhs[i].NoMhs;
            cin.ignore();
            cout<<"Mhs["<<i<<"].Nama           = ";
            getline(cin,Mhs[i].Nama);
            cout<<"Mhs["<<i<<"].MTkul          = ";
            getline(cin,Mhs[i].MTKul);
            cout<<"Mhs["<<i<<"].BanyakKomponen = ";
            cin>>Mhs[i].Banyakkomponen;

            for(j=0;j<Mhs[i].Banyakkomponen;j++){
                cout << "  	Mhs["<<i<<"].Komp["<<j<<"].No   = "; cin >> Mhs[i].Komp[j].No;
                cout << "  	Mhs["<<i<<"].Komp["<<j<<"].Nama = "; cin >> Mhs[i].Komp[j].Nama;
                cout << "	Mhs["<<i<<"].Komp["<<j<<"].Skor = "; cin >> Mhs[i].Komp[j].Skor;
                cout << endl ;

            }
        }
        cout << "========================================================================" << endl;
		cout<<" Kembali Ke Menu Utama (enter) : "; 
        system("pause");                                       
		menu();
}

void output(){
	system("cls");
        cout << setfill('=') << setw(54) << "=" << endl;
        for(i = 0; i < banyak; i++){
            cout<<"|"<<left<<setw(10)<<setfill(' ')<<"No. Mhs   : "<<left<<setw(30)<<setfill(' ');
            cout<<left<<setw(40)<<setfill(' ')<<Mhs[i].NoMhs<<left<<setw(30)<<setfill(' ')<<"|"<< endl;
            cout<<"|"<<left<<setw(10)<<setfill(' ')<<"Nama      : "<<left<<setw(30)<<setfill(' ');
            cout<<left<<setw(40)<<setfill(' ')<<Mhs[i].Nama<<left<<setw(30)<<setfill(' ')<<"|" << endl;
            cout<<"|"<< left<<setw(10)<<setfill(' ')<<"Matakuliah: "<<left<<setw(30)<<setfill(' ');
            cout<<left<<setw(40)<<setfill(' ')<<Mhs[i].MTKul<<left<<setw(30)<<setfill(' ')<<"|" << endl;
            cout<<left<<setw(5)<<setfill(' ')<<setfill(' ')<<"|"<<left<<setw(4) << "No";
            cout<<setfill(' ')<<left<<setw(30)<<"Nama Komponen";
            cout<<setfill(' ')<<left<<setw(14)<<"Nilai"<<left<<setw(30)<<setfill(' ')<<"|"<< endl;

            for (j=0; j<Mhs[i].Banyakkomponen ; j++){
                cout << left<<setw(5)<<setfill(' ') << setfill(' ') << "|" << left << setw(4) << Mhs[i].Komp[j].No;
                cout << setfill(' ') << left << setw(30) << Mhs[i].Komp[j].Nama;
                cout << setfill(' ') << left << setw(14) << Mhs[i].Komp[j].Skor <<left<<setw(30)<<setfill(' ')<<"|" << endl;
            }
                cout << left<<setw(53)<<setfill(' ') << setfill(' ') << "|" <<left<<setw(30)<<setfill(' ')<<"|" << endl;

        }
            cout << setfill('=') << setw(54) << "=" << endl;
        cout << "========================================================================" << endl;
		cout<<" Kembali Ke Menu Utama (enter) : "; 
        system("pause");                                       
		menu();
}
