#include <iostream>
    using namespace std;

    // prototype 
 
 void inputIP (int data[], int b){
  int IP;
  for(0 <= IP <= 4) {
cout<<"masukan data ke ";
cout<<" : ";
cin>>data[IP];
}
    }
 
 
int main () {
/*system ("color f1"); */
int x = 0; 
int i; 
int rata = 0, trb = 0, trk = 0;
 

cout<< "masukkan jumlah data :";
cin>>x;
int data[x];
 input(data,x);

rata = 0;
int *ptr;
ptr = data;
 

cout<<"\n hasil input "; 
trb = trk = *ptr;
for(i=0; i<x; i++) {
cout << *(ptr + i) << ','; 
 
rata = rata + *(ptr + i);
if (trb < *(ptr + i)) {
trb = *(ptr + i);
}
if (trk > *(ptr + i)) {
trk = *(ptr + i);
}
}
cout<<"\n bila dijumlahkan  :  "<<rata;
cout<<"\n Rata-rata    :  "<<rata/x;
cout<<"\n nilai min    :  " <<trk;
cout<<"\n nilai max    :  " <<trb;
return 0; 
}
