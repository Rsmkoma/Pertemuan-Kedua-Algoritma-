#include <iostream>
using namespace std;

int main (){
	// kamus
	int TabInt[3]; int i;
	// algoritma
	// mengisi array
	for (i=0; i<10; i++){
		TabInt[i] = i*10;
	}
	// membaca dan menuliskan isi array ke layar 
	for (i=0; i<10; i++){
		cout << TabInt[i] << endl;
	}
	return 0;
}
