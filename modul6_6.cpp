/*
	Program  	: Modul 6_8
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_8 
*/
#include<stdio.h>
#include "boolean.h"

void BinSearch(int L[10], int N, int X, int*idx);
void inputData(int arr[]);
void bubleSort(int arr[],int N);
main()
{
	int pos,cari,arr[10];
	inputData(arr);
	bubleSort(arr,10);
	printf("\n Elemen yang dicari");
	scanf("%d",&cari);
	BinSearch(arr,10,cari,&pos);
	if(pos!=-1)
	printf("Ketemu di posisi ke-%d",pos);
	else
	printf("tidak ketemu");	
}
void inputData(int arr[])
{
	int i;
	printf("\nMasukan Elemen Array\n");
	for(i=0;i<=10;i++)
	{
		printf("array ke %d :",i+1);
		scanf("%d",&arr[i]);
	}
}
void bubleSort(int arr[],int N)
{
	int a,b,temp;
	for(a=0;a<=(N-2);a++)
	{
		for (b=(N-1);b>=(a+1);b--)
		{
			if(arr[b-1]>arr[b]){
			}
		}
		temp=arr[b-1];
		arr[b-1]=arr[b];
		arr[b]=temp;
	
	}
	printf("\nData terurut");
	for(a=0;a<N;a++)
	{
	printf("\n Array ke-%d",a+1);
	printf("%d",arr[a]);
	
	}
}
void BinSearch(int L[10],int N,int X, int *idx)
{
	int i,j,k;
	bool ketemu;
	i=0;
	j=N;
	ketemu=false;
	while((!ketemu)&&(i<=j))
	{
		k=(i+j)/2;
		if(L[k]==X)
			ketemu=true;
			else
			{
				if(L[k]<X)
				i=k+1;
				else
				j=k-1;
			}
	}
	if(ketemu)
	*idx=k+1;
	else
	*idx=-1;
}
