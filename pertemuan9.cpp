#include <iostream>
#include "pertemuan9.h"

using namespace std;

int cari(int array[], int key, int nilaiAwal, int nilaiAkhir);
void bublesort();

void pertemuan9()
{
	cout << "Sorting\n";
	bublesort();
}


void bublesort()
{
	int array[] = {1,2,3,4,5,6,7,8,9,0};
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;

	cout << "Masukan angka yang ingin dicari : ";
	int key;
	cin >> key;

	int index = cari(array, key, 0, 10-1);

	if (index != -1)
		cout << key << " - ditemukan pada index : " << index+1 << endl;
	else
		cout << key << " - tidak ditemukan" << endl;
}

int cari(int array[], int key, int nilaiAwal, int nilaiAkhir)
{
	if (nilaiAkhir < nilaiAwal)
		return -1;

	int mid = (nilaiAwal + nilaiAkhir) / 2;
	cout << "nilai awal " << nilaiAwal << ", nilaiAkhir " << nilaiAkhir << ", mid " << (nilaiAwal + nilaiAkhir)/2<< endl;

	cout << "key : " << key << ", array[tengah] : " << array[mid] << endl;
	if (key == array[mid])
		return mid;
	else if (array[mid] > key)
		return cari(array, key, nilaiAwal, (mid-1));
	else
		return cari(array, key, (mid+1), nilaiAkhir);
}
