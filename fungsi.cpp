#include <iostream>
	 using namespace std;

	 bool genap (int n);

	 int main (){
	 	bool hasil = genap (5);
	 	cout<<" Hasilnya Adalah : " << hasil << endl;
	 	cout<<" Hasilnya Adalah : " << genap (10);
	 	return 0;

	 }

	 bool genap (int n){
	 	return (n % 2 == 0);

	 }
