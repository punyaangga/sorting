/*
	Program  	: Modul 6_7
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_7 
*/
#include<stdio.h>
#include "boolean.h"
#include <conio.h>
#include <string.h>

struct dataMahasiswa
{
	char nim[10];
	char nama[20];
};
void inputDataMhs(struct dataMahasiswa mhs[]);
void BinSearch(struct dataMahasiswa L[],int N,char X[10],int *idx);
void bubbleSort(struct dataMahasiswa mhs[],int N);

main()
{
int pos;
char pil;
char nimCari[10];
struct dataMahasiswa mhs[5];
inputDataMhs(mhs);
bubbleSort(mhs,5);
while(1)
{
	printf("\nNim Yang Dicari :");
	scanf("%s",&nimCari);
	BinSearch(mhs,5,nimCari,&pos);
	if(pos!=-1)
	{
		printf("\nData Mahasiswa Ketemu");
		printf("\nNim Siswa : %s",mhs[pos].nim);
		printf("\nNama Siswa : %s",mhs[pos].nama);
	}
	else
		printf("\nData Mahasiswa Tidak Ketemu");
		printf("\nCari lagi Y/N? ");
		scanf("%s",&pil);
		if((pil=='y')||(pil=='Y'))
		continue;
		else
		break;
		
	}	
}

void inputDataMhs(struct dataMahasiswa mhs[])
{
	int i;
	printf("\nMasukan Data Mahasiswa");
	for(i=0;i<5;i++)
	{
		printf("\nData Mahasiswa ke %d : \n",i+1);
		printf("Nim : ");
		scanf("%s",mhs[i].nim);
		printf("Nama : ");
		scanf("%s",mhs[i].nama);
	}
}

void bubbleSort(struct dataMahasiswa mhs[],int N)
{
	int a,b;
	struct dataMahasiswa temp;
	for(a=0;a<=(N-2);a++)
	{
		for(b=(N-1);b>=(a+1);b--)
		{
			if(strcmp(mhs[b-1].nim,mhs[b].nim)>0)
			{
				temp=mhs[b-1];
				mhs[b-1]=mhs[b];
				mhs[b]=temp;
			}
		}
	}
}

void BinSearch(struct dataMahasiswa L[],int N, char X[10], int *idx)
{
	int i,j,k;
	bool ketemu;
	i=0;
	j=N;
	ketemu=false;
	while((!ketemu)&&(i<=j))
	{
		k=(i+j)/2;
		if(strcmp(L[k].nim,X)==0)
		ketemu=true;
		else
		{
			if(strcmp(L[k].nim,X)<0)
			i=k+1;
			else
			j=k-1;
		}
	}
	if(ketemu)
	*idx=k;
	else
	*idx=-1;
}
