#include <iostream>
#include "pertemuan5.h"

using namespace std;

void pertemuan5()
{
	cout << "Array\n";
	string nama[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> nama[i];
	}

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << nama[i] << " ";
	}
	cout << endl;
}