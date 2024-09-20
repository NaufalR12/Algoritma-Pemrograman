#include <iostream>
#include <iomanip>
using namespace std;
main()
{
  char tipepaket,pesanKembali;
  string penyewa,jenismobil;
  int kodemobil,durasi;
  float jml,lamamenyewa,hargasewa,sewa;
  float uangBayar,total,kembali;
  float hargasewatotal,diskon,hargapaket;
  
  atas:
   cout<<"            RENTAL MOBIL SI PALING OKE               ";cout<<endl; 
   cout<<"    JL. Khayangan, Kompleks Bidadari No.20 Bangka    ";cout<<endl;
   cout<<setfill('=')<<setw(52)<<"="<<endl; cout<<endl; 
   
   cout<<" Nama penyewa               : ";
   getline(cin, penyewa);
   
   mobil:
   cout<<" *******DAFTAR MOBIL***********"<<endl;
   cout<<" 1. Brio						"<<endl;
   cout<<" 2. Agya				    	"<<endl;
   cout<<" 3. Avanza						"<<endl;
   cout<<" 4. Ertiga						"<<endl;
   cout<<" 5. Kijang Innova		        "<<endl;
   cout<<" 6. Fortuner					"<<endl;
   cout<<" 7. Alpard						"<<endl;
   cout<<" Jenis mobil [1/2/3/4/5/6/7] : ";cin>>kodemobil;
   if (kodemobil< 1 || kodemobil >7) {
   goto mobil; }
   
   jumlah:
   cout<<" Jumlah mobil                : "; cin>>jml;
   if (jml<1) {
   goto jumlah; }
   
   durasi:
   cout<<" Durasi penyewaan            : 1. Jam  "<<endl;
   cout<<"                               2. Hari "<<endl;
   cout<<" Durasi yang dipilih         : "; cin>>durasi;
   
   if (durasi==1){
   cout<<" Durasi penyewaan (jam)      : "; cin>>lamamenyewa;}
   else if (durasi==2){
   cout<<" Durasi penyewaan (hari)     : ";cin>>lamamenyewa;}
   else
   { cout<<" Durasi yang anda masukan tidak ada, silakan masukan lagi!"<<endl;
     goto durasi; }
   
   paket:  
   cout<<" Tipe paket                  :  1. Dengan supir : biaya tambahan (Rp. 750.OOO/Hari) "<<endl;
   cout<<"                                2. Tanpa sopir                                      "<<endl;
   cout<<" Paket yang dipilih          : "; cin>>tipepaket;
   if (!(tipepaket== '1' || tipepaket== '2')) {
     goto paket; }
 
   cout<<endl; 
   cout<<setfill('=')<<setw(52)<<"="<<endl;
   cout<<" \t  Informasi Pemesanan"<<endl;
   cout<<setfill('=')<<setw(52)<<"="<<endl;
   cout<<" Nama penyewa       : "<<penyewa<<endl;
   
   if (tipepaket==1) {
   cout<<" Paket yang dipilih : Dengan sopir "<<endl;}
   else {
   cout<<" Paket yang dipilih : Tanpa supir "<<endl; }
   cout<<setfill('=')<<setw(52)<<"="<<endl; cout<<endl; 
   
   if (durasi==1)	 
{
    switch(kodemobil) {
     case (1) : {
      hargasewa= 25000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Brio"; }
      break;
     
     case (2) : {
      hargasewa= 25000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Agya"; }
      break;
      
     case (3) : {
      hargasewa= 35000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Avanza";}
      break;
    
     case (4) : {
      hargasewa= 35000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Ertiga"; }
      break;
      
     case (5) : {
	  hargasewa= 50000;
	  hargasewatotal= hargasewa*jml;
	  jenismobil= "Kijang innova"; }
      break;
      
     case (6) : {
	  hargasewa= 100000; 
	  hargasewatotal= hargasewa*jml;
	  jenismobil= "Fortuner"; }
      break;
     
     default:
      hargasewa= 200000;
	  hargasewatotal= hargasewa*jml;
	  jenismobil= "Alphard"; 
     }
    
    
		if (tipepaket== '1') {
		hargapaket= 75000; }
		else {
		hargapaket= 0; }
    
              if(lamamenyewa>=4) {
              diskon=0.2*sewa; }      
              else {
              diskon=0; }
}
   else
{
   switch(kodemobil) {
     case (1) : {
      hargasewa= 250000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Brio"; }
      break;
     
     case (2) : {
      hargasewa= 250000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Agya"; }
      break;
      
     case (3) : {
      hargasewa= 350000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Avanza"; }
      break;
    
     case (4) : {
      hargasewa= 350000;
      hargasewatotal= hargasewa*jml;
      jenismobil= "Ertiga"; }
      break;
      
     case (5) : {
	  hargasewa= 500000;
	  hargasewatotal= hargasewa*jml;
	  jenismobil= "Kijang innova"; }
      break;
      
     case (6) : {
	  hargasewa= 1000000; 
	  hargasewatotal= hargasewa*jml;
	  jenismobil= "Fortuner"; }
      break;
     
     default:
      hargasewa= 2000000;
	  hargasewatotal= hargasewa*jml;
	  jenismobil= "Alphard";
      }
    
  if (tipepaket== '1') {
      hargapaket= 750000; }
  else {
      hargapaket= 0; }
 
             if(lamamenyewa>=4) {
             diskon=0.15*sewa; }
			 else {
			 diskon=0; }
}
  
   sewa=lamamenyewa*(hargasewatotal+hargapaket);
   total=sewa-diskon;
   
   cout<<endl;
   if (durasi==1)
   {
   cout<<" Durasi menyewa               : "<<lamamenyewa; cout<<" jam"<<endl;
   }
   else (durasi==2);
   {
   cout<<" Durasi menyewa               : "<<lamamenyewa; cout<<" Hari"<<endl;
   }
   cout << fixed;
   cout << setprecision(2);
   cout<<" Jumlah mobil                 : "<<jml; cout<<" unit"<<endl;
   cout<<" Jenis mobil                  : "<<jenismobil<<endl;
   cout<<" Biaya sewa mobil/unit        : Rp. "<<hargasewa<<endl;
   cout<<" Total biaya sewa mobil       : Rp. "<<hargasewatotal<<endl;
   cout<<" Biaya paket 			        : Rp. "<<hargapaket<<endl;
   cout<<" Total biaya  		  	    : Rp. "<<sewa<<endl;
   cout<<" Diskon                  		: "<<diskon<<endl;  
   cout<<" Total biaya setelah diskon 	: Rp. "<<total<<endl;
   cout<<setfill('=')<<setw(52)<<"="<<endl; cout<<endl; 
   cout<<" Uang bayar                   : Rp. ";cin>>uangBayar;
   kembali=uangBayar-total;
   cout<<" Uang Kembali                 : Rp. "<<kembali<<endl;
   
   cout<<endl;
   cout<<" Pesan Lagi?[Y/T]             :";cin>>pesanKembali;
	if(pesanKembali=='y'||pesanKembali=='Y'){
	cout<<endl;
	goto atas; }
	else {
	cout<<" Terima kasih telah menggunakan layanan kami, silakan datang kembali."<<endl; }
}
