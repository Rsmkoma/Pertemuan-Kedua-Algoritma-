#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char alphabet[10];
	cout << "Masukan 10 karakter" << endl;
	int no = 1;
	for (int a = 0; a < 10; a++, no++) 
	{
		cout << no << ". ";  
		cin >> alphabet[a];
	}

	cout <<  endl;
	int hitung = 0;
	for (int a = 0; a < 10; a++)
	{
		cout << alphabet[a] << " ";
		if (alphabet[a] == 'A')
			hitung++;
	}
	cout << "\n" << endl;

	cout << "Jumlah A : " <<  hitung << endl;
	return 0;
}