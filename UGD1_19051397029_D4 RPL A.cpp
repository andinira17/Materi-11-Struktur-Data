
#include<iostream>
#include<conio.h>
using namespace std;
main() {
cout<<endl;
cout<<"  Nama        : Tania Nastika P.M. "<<endl;
cout<<"  NIM         : 19051397026 "<<endl;
cout<<"  Prodi       : D4 Manajemen Informatika"<<endl;
cout<<endl;

int Nilai[20];
int i,N,angka,bilangan;
cout<<"  Masukkan banyak Angka = ";cin>>N;

//membaca elemen array
for(i=0;i<N;i++){
cout<<"  Masukan Angka Ke -"<<i<<" = ";cin>>Nilai[i]; }

//mencetak elemen arrray 
cout<<"  Deretan Bilangan       = ";
for(i=0;i<N;i++)
cout<<Nilai[i]<<" ";
cout<<endl<<endl;
cout<<"  Data yang ingin dicari  = ";
cin>>bilangan;
cout<<endl;  

//melakukan pencarian
i=0;
do{
if(Nilai[i]==bilangan)
angka=Nilai[i];
i++;}
while(i<N);
if(angka==bilangan)
cout<<"  Bilangan "<<bilangan<<" Ditemukan";
else
cout<<"  Bilangan "<<bilangan<<" Tidak Ada";
getch();
}
