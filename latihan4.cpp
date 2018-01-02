/*
	Program  	: Program Pencarian Barang
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Latihan 4
*/
#include<conio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

struct data{
char kode[30],namaBarang[30],harga[30];};
data batas[100];
int a,b,c,d;

void inputdata()
{    
printf("\nJumlah Data Yang Akan diinput : ");
scanf("%d",&b);
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   printf("\nData ke-%d",d);
   printf("\nKode barang\t: ");
   scanf("%s",&batas[a].kode);
   printf("Nama barang\t: ");
   scanf("%s",&batas[a].namaBarang);
   printf("Harga barang\t: ");
   scanf("%s",&batas[a].harga);
   a++;}
   system("CLS");
   }



void lihatdata()
{int i,j;
 printf("\n================================Menampilkan Data===============================\n\n");
 printf("===============================================================================\n");
 printf("||\tNO\t||\tKode Barang\t||\tNama Barang\t||\tHarga Barang\t||\n");
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  printf("===============================================================================\n");
  printf("||\t %d\t||",j);
  printf("%s\t\t",batas[i].kode);
  printf("\t%s\t\t\t||",batas[i].namaBarang);
  printf("\t%s\t\t||",batas[i].harga);
  }
  printf("=============================================================================== ");
  getch();
  system("CLS");
  }

void hapusdata()
{
int x,y;
 printf("Hapus data ke-");
 scanf("%d",&x);
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 system("CLS");
 printf("\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-%d Terhapus ++++++++++++++++++++++++++++++",x);
 getch();
 system("CLS");
}


int main()
{     
int pilih;
 char w;
 printf("\n\n\n\n\n=============================PROGRAM DATA BARANG=============================");
 getch();system("CLS");
  awal:
  printf("\n================================ PILIHAN MENU =================================");
  printf("\n1. Masukkan data");
  printf("\n2. Hapus Data");
  printf("\n3. Cari Data");
  printf("\n4. Keluar");
  printf("\n\nMasukkan Pilihan : ");
  scanf("%d",&pilih);
  if(pilih==1)
   {system("CLS");inputdata();goto awal;}
  if(pilih==2)
   {system("CLS");hapusdata();goto awal;}
  if(pilih==3)
   {system("CLS");lihatdata();goto awal;}
  if(pilih==4)
   {system("CLS");
    printf("\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n");
    printf("                         [Y]                         [N]                  \n");
    printf("                                         ");
	scanf("%c",&w);
    if(w=='y'||w=='Y')
    {
	 system("CLS");
     printf("\n\n\n\n\n******************************* PROGRAM SELESAI *******************************");
	 }
    if(w=='n'||w=='N')
           {system("CLS");goto awal;}}
  else
   {system("CLS");cout<<"Pilihan 1-4";getch();system("CLS");goto awal;}
}

