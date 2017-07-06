#include <iostream>
#include "pertemuan2.h"

using namespace std;

void pertemuan2()
{
	cout << "membuat variable, konstanta, SizeTypeData\n";

	// membuat konstanta
	const float PHI = 3.14;

	// deklarasi san inialisasi
	int jari_jari;

	std::cout <<"Masukan jari jari: ";
	std::cin >> jari_jari;

	std::cout << "luasnya lingkaran adalah " << PHI * jari_jari << std::endl;

	cout << "--------------------------------------------------\n";
	std::cout << "Size of short : " << sizeof(short) << std::endl;
	std::cout << "Size of int : " << sizeof(int) << std::endl;
	std::cout << "Size of long : " << sizeof(long) << std::endl;
	std::cout << "Size of float : " << sizeof(float) << std::endl;
	std::cout << "Size of double : " << sizeof(double) << std::endl;

}