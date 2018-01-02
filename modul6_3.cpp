/*
	Program  	: Modul 6_3
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_3 
*/
#include<stdio.h>
void seqSearch(int L[10],int N, int X,int*idx);
void inputData(int arr[]);
main()
{
	int i,pos,cari,arr[10];
	//p function
	inputData(arr);
	//user input
	printf("\nElemen yang dicari : ");
	scanf("%d",&cari);
	//menjalankan pencarian
	seqSearch(arr,10,cari,&pos);
	
	if(pos!=-1)
		printf("Ketemu di posisi %d",pos);
	else
	printf("Tidak Ketemu");
}
void inputData(int arr[])
{
	int i;
	printf("\nMasukan Elemen Array\n");
	//user input elemen array
	for(i=0;i<10;i++)
	{
		printf("Array ke %d : ",i+1);
		scanf("%d",&arr[i]);
	}
}
void seqSearch(int L[10],int N,int X,int *idx)
{
	int k;
	k=0;
	while((k<N)&&(L[k]!=X))
	{
		k=k+1;
	}
	if((L[k]==X)&&(k<10))
		*idx=k+1;
	else
		*idx=-1;
}
