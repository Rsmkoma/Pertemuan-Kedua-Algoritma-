#include <iostream>
#include "pertemuan1.h"
#include "pertemuan2.h"
#include "pertemuan3.h"
#include "pertemuan4.h"
#include "pertemuan5.h"
#include "pertemuan6.h"
#include "pertemuan7.h"
#include "pertemuan8.h"
#include "pertemuan9.h"
#include "pertemuan10.h"


using namespace std;

int main(int argc, char const *argv[])
{
	int pilih;
	
	for (int i = 1; i <= 10; i++)
		cout << "Pertemuan Ke : " << i << endl;

	cout << "Pilih Program Pertemuan/Tugas Yang Akan Di Jalankan : ";
	cin >> pilih;

	if (pilih < 1 || pilih > 12)
	{
		cout << "Pilihan Tidak Diketahui";
		return -1;
	}

	switch(pilih)
	{
		case 1:
			pertemuan1();
			break;
		case 2:
			pertemuan2();
			break;
		case 3:
			pertemuan3();
			break;
		case 4:
			pertemuan4();
			break;
		case 5:
			pertemuan5();
			break;
		case 6:
			pertemuan6();
			break;
		case 7:
			pertemuan7();
			break;
		case 8:
			pertemuan8();
			break;
		case 9:
			pertemuan9();
			break;
		default:
			pertemuan10();
			break;
	}

	return 0;
}