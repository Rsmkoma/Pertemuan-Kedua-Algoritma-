#include <iostream>
using namespace std;

// var global
	int x, y;

// program utama 
	int main(int argc, char const *argv[])
	{
		cout << "Masukan Nilai Pertama :";
		cin >> x;
		cout << "Masukan Nilai Kedua : ";
		cin >> y;
		cout << "" << endl;
		cout << "" << endl;
		if (x < y){
			cout << " Nilai Maksimum Adalah --> " << y << endl;
			cout << " Nilai Minimum Adalah  --> " << x << endl;
		}
			else {
			cout << " Nilai Maksimum Adalah --> " << x << endl;
			cout << " Nilai Minimum Adalah  --> " << y << endl;	
			}
		return 0;
	}