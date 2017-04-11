#include <iostream>
using namespace std;



	typedef struct {
		string noKA;
		string namaKA;
	} kereta;

	typedef struct {
		string nama;
		string ktp;
	} penumpang;

	typedef struct {
		string kotaAsalKA;
		string kotatujuanKA;
		jam waktuBerangkat;
		jam waktuTiba;
		tanggal tanggalBerangkat;
		tanggal tanggalTiba;
	} jadwalKA;

	typedef struct {
		int jam;
		int menit;
		int detik;
	} jam;

	int main (){
	penumpang reni;
	kereta KA
	cout << "Masukkan Nama :";
	cin >> reni.nama;
	cout << "Masukkan NO KTP :";
	cin >> reni.ktp;

	cout << " ========= Data Perjalanan ==========" << endl;
	cout << "-------------------------------------" << endl;

	cout << "No Kereta Api :" << endl;
	cout << "Nama Kereta Api :" << endl;
	cout << "Nama Penumpang :" << reni.nama;
	cout << "No KTP :" << reni.ktp;	
	return 0;
}