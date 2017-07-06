#include <iostream>
#include "pertemuan10.h"

using namespace std;

int rekursif(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	else
		return n * rekursif(n - 1);
}

void pertemuan10()
{
	int x;
	cout << "Rekursif\n";
	cin >> x;
	cout << x << "! : " << rekursif(x) << endl;
}