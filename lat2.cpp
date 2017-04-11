#include <iostream>
	using namespace std;

	int main()
	{
		float ip[100];
			int i=0;
			int lulus=0;
			float jumlah=0;

			cout<<"Pengecekan Nilai IP Mahasiswa"<<endl<<endl;
			cout<<"============================="<<endl<<endl;

				while (ip[i-1]!=-999){ //input -999 untuk mengakhiri

			cout<<"Masukan IP Mahasiswa  :";
			cin>>ip[i];
				if (ip[i]>=0, ip[i]<=4){ // filter IP yang Valid
					if (ip[i]>=2.75){  //batas lulus dan tidak lulus
						lulus++;

					}
					jumlah=jumlah+ip[i-1];
					i++;

				}

				}

			cout<<endl<<"==========================="<<endl<<endl;

				if (i!=1){ //cek jumlah i

			cout<<"-------------OUTPUT HASIL DATA---------------"<<endl<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Jumlah Mahasiswa :"<<i-1<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Jumalah Mahasiswa yang Lulus :"<<lulus<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Jumalah Mahasiswa yang Tidak Lulus :"<<i-1-lulus<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Jumalah Nilai Mahasiswa :"<<jumlah<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"Nilai Rata-Rata Mahasiswa :"<<jumlah/(i-1)<<endl;
			cout<<"---------------------------------------------------"<<endl;


			cout<<"|=====================|"<<endl;
			cout<<"|   Jumlah Mahasiswa	 |"<<endl;
			cout<<		  "		 "   <<i-1<<endl;
			
			


			

				}
				else{
					cout<<"Tidak Ada Data";

				}
				return 0;
	} 
