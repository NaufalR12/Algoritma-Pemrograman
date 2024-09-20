#include <iostream>
using namespace std;

struct data_tgl 
{
	int tanggal, bulan, tahun;
};

void cetak_info_tgl(struct data_tgl unit tgl);


int main() {
	struct data_tgl saat_proses = {13,1,1987};
	cetak_info_tgl{saat_proses};
}

void cetak_info_tgl(struct data_tgl unit_tgl)
{
	static char *nama_bln[] = {
		"kode bulan salah!", "Januari","Februari","Maret","April","Mei","Juni","Juli",
		"Agustus","September","Oktober","November","Desember"
	};
}
