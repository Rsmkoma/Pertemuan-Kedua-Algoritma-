#include <iostream> // perpustakaan untuk input output

using namespace std; 

// prototype
void pilihanA();
void pilihanB();

// var global
// untuk menyimpan besaran angka yang akan dimasukkan
int input = 0;

// program utama
int main(int argc, char const *argv[])
{
	// kita akan menampilkan sebuah string atau kata-kata ke console
	// untuk memasukkan berapa banyak angka yang akan di masukkan
	cout<< " Masukan jumlah Inputan : ";
	cin >> input;

	// Disini kita akan menampilkan string agar user memilih a atau b
	// a untuk nilai minimal dan b untuk nilai maksimal
	char pilih[2];
	cout<< " pilih [A/B] ?";
	cin >> pilih[0];

	// Disini kita akan memilih prosedur berdasarkan pilihan yang user input
	if (pilih[0] == 'A' || pilih[0] == 'a')
	// jika user memasukkan karakter A atau a maka pilihan A/a di panggil
		pilihanA();

	else if (pilih[0] == 'B' || pilih[0] == 'b')
	// jika user memasukkan karakter B atau b maka pilihan B/b di panggil
		pilihanB();

	// pesan ini akan muncul jika user pilihannya bukan A atau B
	else {
		cout << " Pilihan Tidak diketahui " << endl;
		return 1;
	}


	return 0;
}
// kita pakai prosedur karena ini bertype void dan tidak mengembalikkan return
void pilihanA()
{
	int simpan[input];
	// variabel berfungsi untuk menampilkan no inputan user 
	int no = 1;

	// memberitahu user agar segera memasukkan angka sebanyak yang tadi input masukkan
	cout << "Masukkan Angka :" << endl;
	for (int i = 0; i < input; i++, no++)
	{
		cout << no << ". ";
		cin >> simpan[i];

	}

	int min = simpan[0];
	for (int i = 0; i < input; i++)
	{
		// cout << min << " - " << simpan[i] << " = " << min - simpan[i] << endl;
		if ((min - simpan[i]) > 0) 
			min = simpan[i];

	}

	int hitung = 0;
	for (int i = 0; i < input; i++)
	{
		if (min == simpan[i])
			hitung++;
	}

	cout << endl;
	cout << " Nilai min   --> " << min << endl;
	cout << " Jumlah min yang muncul  --> " << hitung << endl;

}

void pilihanB()
{
	int simpan[input];
	int no = 1;
	cout<< "Masukan angka :" <<endl;
	for (int i = 0; i < input; i++, no++)
	{
		cout << no << ". ";
		cin >> simpan[i];
	}

	int max = simpan[0];
	for (int i = 0; i < input; i++)
	{
		if ((max - simpan[i]) < 0)
			max = simpan[i];
	}
	int hitung = 0;
	for (int i = 0; i < input; i++)
	{
		if (max == simpan[i])
			hitung++;
	}

		cout << endl;
		cout << " Nilai Max   --> " << max << endl;
		cout << " Jumlah max yang muncul  -->  " << hitung << endl;
}