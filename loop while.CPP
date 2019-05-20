#include <iostream.h>
#include <conio.h>
main()
{
int totalnilaitugas,nilaiakhir,nilaimid,nilaifinal,totalmid,totalfinal;
char nama[30],nilaihuruf;
int x=1;
int totaltugas;
int nilaitugas=0;
int jumlahtugas=0;
cout<<"masukkan nama: ";cin>>nama;

while(x<=5)
{
cout<<"masukkan nilai tugas "<<x<<":";cin>>nilaitugas;
jumlahtugas=jumlahtugas+nilaitugas;
x++;
}

cout<<"masukkan nilai mid: ";cin>>nilaimid;
cout<<"masukkan nilai final: ";cin>>nilaifinal;
totaltugas=((jumlahtugas/5)*30/100);
totalmid=nilaimid*30/100;
totalfinal=nilaifinal*40/100;
nilaiakhir=totaltugas+totalmid+totalfinal;

if ((nilaiakhir>=80)&&(nilaiakhir<=100))
{nilaihuruf='A';}
else if ((nilaiakhir>=70)&&(nilaiakhir<=79))
{nilaihuruf='B';}
else if ((nilaiakhir>=60)&&(nilaiakhir<=69))
{nilaihuruf='C';}
else if ((nilaiakhir>=50)&&(nilaiakhir<=59))
{nilaihuruf='D';}
else
{nilaihuruf='E';}

cout<<"nama mahasiswa: "<<nama;
cout<<"\nTotal tugas: "<<totaltugas;
cout<<"\ntotal mid: :"<<totalmid;
cout<<"\ntotal final: "<<totalfinal;
cout<<"\nnilai akhir: "<<nilaiakhir;
cout<<"\nnilai huruf: "<<nilaihuruf;
getch();
}