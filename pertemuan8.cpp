#include <iostream>
#include "pertemuan8.h"

using namespace std;

void pertemuan8()
{
	int array[100];
	cout << "Masukan Array\n";
	for (int i = 0; i < 100; ++i)
	{
		cin >> array[i];
	}

	cout << "\n" << endl;

	cout << "Sort : " << endl;
	int temp;
	
	// i = -1; i < 98; i++
	for (int i = 0; i < 100; i++)
	{
		// k = 99; k = i+1; i++
		for (int j = 100 - 1; j > 0; j--)
		{
			if (array[j] > array[j-1])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		cout << array[i] << endl;
	}
}