#include <iostream>
using namespace std;

/*fungsi main*/
int main()
{
    float ip[50], max=0, min=4, jml_ip=0;
	int lulus=0, tdk_lulus=0, error_kebawah=0, error_keatas=0;
	int x=1, bagi;
	cout<<"==========================="<<endl;
	cout<<" DAFTAR NILAI IP MAHASISWA "<<endl;
	cout<<"==========================="<<endl<<endl;


	while (ip[x-1] != -999) {
		
		cout<<"Masukan Nilai IP Mahasiswa =  ";
	
        cin>>ip[x];
		
		//mahasiswa yang LULUS 
		if(ip[x]>=0 && ip[x]<=4){  
			if(ip[x]>=2.75){
				lulus++;	
			}
		//mahasiswa yang TIDAK LULUS 
			else if(ip[x]<2.75){ 
				tdk_lulus++;	
			}
			
			if (ip[x] > max){ max = ip[x]; }
			if (ip[x] < min){ min = ip[x]; }
			
		//range 1-4
			jml_ip+=ip[x];
			bagi	=	x; 
		}
		else if(ip[x] < 0 || ip[x] > 4){

			if(ip[x] > -11 && ip[x] < 1){
				error_kebawah++;	
			}
			else if(ip[x] > 4 && ip[x] < 11){
				error_keatas++;	
			}
		}
		x++;
		
    }
	
	
	float rata 		= (jml_ip/bagi);
	int jml_m		= x-2; 
	int error		= error_kebawah + error_keatas;
	
        
	cout<<endl;

	//cek jumlah x
    if(x!=1){ 
		//cout<<" "<<endl<<endl;
		cout<<"*********************************************"<<endl;
		cout<<"**  Jumlah Mahasiswa                  "<<jml_m<<endl;
		cout<<"*********************************************"<<endl<<endl;

		cout<<"*********************************************"<<endl;
		cout<<"**  Mahasiswa Yang Lulus              "<<lulus<<endl;
		cout<<"*********************************************"<<endl<<endl;

		cout<<"*********************************************"<<endl;
		cout<<"**  Mahasiswa Yang Tidak Lulus        "<<tdk_lulus<<endl;
		cout<<"*********************************************"<<endl<<endl;

		cout<<"*********************************************"<<endl;
		cout<<"**  Nilai Tertinggi                   "<<max<<endl;
		cout<<"*********************************************"<<endl<<endl;

		cout<<"*********************************************"<<endl;
		cout<<"**  Nilai Terendah                    "<<min<<endl;
		cout<<"*********************************************"<<endl<<endl;

		cout<<"*********************************************"<<endl;
		cout<<"**  Rata-Rata Nilai                  "<<rata<<endl;
		cout<<"*********************************************"<<endl<<endl;

		cout<<"*********************************************"<<endl;
		cout<<"**  Data Tidak Sesuai                 "<<error<<endl;
		cout<<"*********************************************"<<endl<<endl;

	}
	else {
		cout<<"Data Tidak Ada";
	}
    
	return 0;
}