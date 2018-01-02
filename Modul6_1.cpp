/*
	Program  	: Modul 6_1
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_1 
*/
#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
//typedef int bool;
#include "boolean.h"

void seqSearch(int L[10], int N, int X, bool *ketemu);
main(){
	int arr[10] = {6, 7, 3, 8, 2, 5, 4, 1, 8, 10};
	bool pos;
	seqSearch(arr,10,10,&pos);
	if(pos) printf("Ketemu");
	else printf("Tidak Ketemu");
}

void seqSearch(int L[10], int N, int X, bool *ketemu){
	int k = 0;
	while((k < N) && (L[k] != X)){
		k = k + 1;
	}
	if((L[k] == X) && (k < 10))
		*ketemu = TRUE;
	else
		*ketemu = FALSE;
}
