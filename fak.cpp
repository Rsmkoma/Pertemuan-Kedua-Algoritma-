#include <iostream>
	using namespace std;

// prototype
int faktorial (int f);

//var global 
int n, f;
int hasil;

// program utama 
	int main (){

		cout<<"Masukan Faktorial : ";
		cin>>f;
		cout<<"Masukan Faktorial : ";
		cout<< " Hasil : " << faktorial (f) << endl;
		return 0;
	}

// proses menghitung nilai faktorial
	int faktorial (int f){
		int hasil=1;
			for(n=f;n>0;n--){
			if(j!=1)
				cout<<j<<"x";
			else
				cout<<"1";
			hasil=hasil*j;
		} 
		cout<<"="<<hasil;
		return 0;
	}