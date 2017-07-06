#include <iostream>
#include "pertemuan7.h"

using namespace std;

void pertemuan7()
{
	int m[3][3];
	int baris;
	int kolom;
	cout <<"masukan baris : ";
	cin >>baris;
	cout <<"masukan kolom : ";
	cin >>kolom;
	cout <<"masukan nilai" << endl;
	cout << "-------------" << endl;

	int no_baris = 1;
	int no_kolom = 1;
	for (int i= 0; i < baris; i++, no_baris++)
	{
		for (int j= 0; j<kolom; j++, no_kolom++)
		{
				cout<<"baris "<< no_baris <<" kolom "<< no_kolom <<" = "; 
				cin >> m[i][j];
		}
	}

	cout << endl;
	for (int i= 0; i < baris; i++)
	{
		for (int j= 0; j < kolom; j++)
		{
	 		cout<< " | "<<m[i][j];
		}
		cout << " | ";
		cout<< endl;
	}
}