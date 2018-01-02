/*
	Program  	: Modul 6_2
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_2 
*/
#include<stdio.h>
void seqSearch(int L[10],int N,int X,int *idx);

int main()
{
	int pos,arr[10]={6,7,3,8,2,5,4,1,8,10};
	seqSearch(arr,10,2,&pos);
	
	if(pos!=-1)	
		printf("Ketemu di posisi %d",pos);
	else
		printf("Tidak Ketemu");
}
void seqSearch(int L[10],int N, int X,int *idx)
{
	int k;
	k=0;
	
	while ((k<N)&&(L[k]!=X))
	{
		k=k+1;
	}
	
	if((L[k]==X)&&(k<N))
		*idx=k+1;
	else
		*idx=-1;
}
