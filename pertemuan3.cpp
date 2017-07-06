#include <iostream>
#include "pertemuan3.h"

using namespace std;

void ProsesBaca();
void ProsesTampil();
void ProsesTampil();
int tambahkan(int a, int b);

int a;
int b;

void pertemuan3()
{
	cout << "prosedur dan modular\n";
	ProsesBaca();
	ProsesTampil();
}

void ProsesBaca()
{

	cout << "Masukan nilai a : ";
	cin >> a;
	cout << "Masukan niali b : ";
	cin >> b;
}

void ProsesTampil()
{

	cout << "====================" << endl;
	cout << "a + b : " << tambahkan(a, b) << endl;
}

// fungsi penambahan
int tambahkan(int a, int b)
{
	return a + b;
}