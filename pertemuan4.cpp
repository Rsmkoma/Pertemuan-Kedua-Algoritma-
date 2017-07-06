#include <iostream>
#include "pertemuan4.h"

using namespace std;

bool genap(int n);

void pertemuan4()
{
	cout << "fungsi dan parameter\n";
	cout << "10 adalah (genap/ganjil) : " << genap(10) << endl; 

}

bool genap(int n)
{
	return (n % 2 == 0);
}