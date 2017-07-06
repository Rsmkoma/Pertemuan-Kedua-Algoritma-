#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "pertemuan6.h"

using namespace std;

typedef struct 
{
	string 		nama;
	string		noKTP;

} Penumpang;

typedef struct 
{
	string 		noKA;
	string 		namaKA;

} Kereta;

typedef struct 
{
	string		hari;
	int 		tanggal;
	string 		bulan;
	int			tahun;
	string		jam_menit;

} Date;

typedef struct
{
	Penumpang 	penumpangKA;
	string		kota_asal;
	string		kota_tujuan;
	Date		date;
	string		biaya;

} Tiket;

void pertemuan6()
{
	system("clear");

	Kereta express = {"BDG-Parahyangan-3395", "Parahyiangan"};
	Date tgl_berangkat = {"Senin, ", 3, " Maret ", 2017, "07 : 00 WIB"};
	Date tgl_datang = {"Rabu, ", 5, " Maret ", 2017, "13 : 30 WIB"};

	Tiket tiket;

	// memasukan nama penumpang
	cout << endl;
	cout <<"Nama          : ";
	cin >> tiket.penumpangKA.nama;
	cout << "NO KTP        : ";
	cin >> tiket.penumpangKA.noKTP;

	system("clear");

	// memilih jurusan
	cout << endl;
	cout << "            Tiket tersedia" << endl;
	cout << "            --------------" <<  endl;
	cout << "1. Bandung - Jakarta    - Rp 250.000" << endl;
	cout << "2. Bandung - Yogyakarta - Rp 175.000" << endl;
	cout << "\n" << endl;


	int pilih = 0;
	cout << "pilih no : ";
	cin >> pilih;

	switch(pilih)
	{	
		case 1:
			tiket.kota_asal = "Bandung";
			tiket.kota_tujuan = "Jakarta";
			tiket.biaya = "Rp. 250.000";
			break;
		case 2:
			tiket.kota_asal = "Bandung";
			tiket.kota_tujuan = "Yogyakarta";
			tiket.biaya = "Rp. 175.000";
			break;
		default:
			system("clear");
			cout << "\nMaaf Pilihan Tidak Diketahui -- Silahkan Coba Lagi\n" <<  endl;	
			exit(0);
	};

	system("clear");

	// print tiket
	cout << "           *-------------------------------------------------------*" << endl;
	cout << "           *-------------------- Tiket Kereta Api -----------------*" << endl;
	cout << "           *-------------------------------------------------------*" << endl;
	cout << "                NO Kereta Api            : " <<  express.noKA << endl;
	cout << "                Nama Kereta Api          : " << express.namaKA << endl;
	cout << endl;
	cout << "                Nama Penumpang           : " << tiket.penumpangKA.nama << endl;
	cout << "                NO KTP                   : " << tiket.penumpangKA.noKTP << endl;
	cout << endl;
	cout << "                Tujuan                   : " << tiket.kota_tujuan << endl;
	cout << "                Asal                     : " << tiket.kota_asal << endl;
	cout << endl;
	cout << "                Tanggal Berangkat        : " << tgl_berangkat.hari << tgl_berangkat.tanggal << tgl_berangkat.bulan << tgl_berangkat.tahun << endl;
	cout << "                Waktu                    : " << tgl_berangkat.jam_menit << endl;
	cout << endl;
	cout << "                Tanggal Tiba             : " << tgl_datang.hari << tgl_datang.tanggal << tgl_datang.bulan << tgl_datang.tahun << endl;
	cout << "                Waktu                    : " << tgl_datang.jam_menit << endl;
	cout << endl;
	cout << "                Biaya                    : " << tiket.biaya << endl;
	cout << "           *-------------------------------------------------------*" << endl;
	cout << "           *-------------------------------------------------------*" << endl;
}