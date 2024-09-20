#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

typedef struct {
	string namaPasien;
	int noPasien;
	} dataPasien;

typedef struct {
	string namaDokter, pwDokter, usDokter, nomorSIP;
	} dataDokter;

typedef struct {
	string namaKaryawan, usKaryawan, pwDokter;
	} dataKaryawan;

typedef struct {
	int noJadwal;
	string hari;
	dataPasien infoPasien[100];
	
	} infojadwalPasien; 
