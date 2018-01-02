/*
	Program  	: Modul 6_5
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_5 
*/
#include<stdio.h>
#include "boolean.h"
void BinSearch(int L[7], int N, int X, int *idx);
main()
{
	int pos, arr[7]={0,4,6,7,12,45,67};
	BinSearch(arr,7,7,&pos);
	if(pos!=-1)
		printf("Ketemu di posisis ke- %d",pos);
	else
		printf("Tidak Ketemu");
}
void BinSearch(int L[7],int N, int X, int *idx)
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
