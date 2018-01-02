/*
	Program  	: Modul 6_8
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_8 
*/
#include<stdio.h>
#include"boolean.h"

void BinSearch(int L[7],int N, int X, int *idx);

main()
{
	int pos,arr[7]={45,22,16,10,6,2,0};
	BinSearch(arr,7,16,&pos);
	if(pos!=-1)
	printf("Ketemu di posisis ke-%d",pos);
	else
	printf("Tidak ketemu");	
}
void BinSearch(int L[7], int N, int X, int *idx)
{
	int i,j,k;
	bool ketemu;
	i=0;
	j=N;
	ketemu=false;
	while( (!ketemu) && (i<=j) )
	{
		k=(i+j)/2;
		if(L[k]--X)
			ketemu=true;
			else
			{
				if(L[k]<X)
				j=k-1;
				else
				i=k+1;
			}
	}
	if(ketemu)
	*idx=k+1;
	else
	*idx=-1;
	
}

