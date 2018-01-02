/*
	Program  	: Program Pencarian Barang
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Latihan 2
*/
#include<stdio.h>
#include<string.h>
struct dataBarang
{
	char kode[10];
	char namaBarang[50];
	char hargaBarang[25];	
};
void inputDataBrg(struct dataBarang brg[]);
void seqSearch(struct dataBarang brg[],int N,char X[10],int *idx);
main()
{
	int pos;
	char pil;
	char nimCari[10];
	struct dataBarang brg[5];
	//panggil function
	inputDataBrg(brg);
	while(1)
	{
		//user input
		printf("\nKode Barang yang dicari :");
		scanf("%s",&nimCari);
		//menjalankan pencarian
		seqSearch(brg,5,nimCari,&pos);
		if(pos!=-1)
		{
			printf("\nData Barang Ketemu");
			printf("\nKode Barang : %s",brg[pos].kode);
			printf("\nNama Barang : %s",brg[pos].namaBarang);
			printf("\nHarga Barang : %s",brg[pos].hargaBarang);
		}
		else
		printf("\nData Barang Tidak Ketemu");
		printf("\nCari data lagi[y/n]?");
		scanf("%s",&pil);
		if((pil=='y')||(pil=='Y'))
			continue;
		else
				break;
	}
 } 
 void inputDataBrg(struct dataBarang brg[])
 {
 	int i;
 	int n;
 	printf("Masukan jumlah input = ");
 	scanf("%d",&n);
 	printf("\nMasukan Data Barang\n");
 	//user input
 	for(i=0;i<n;i++)
	 {
	 	printf("\nData Barang ke- %d\n",i+1);
	 	printf("Kode barang :");
	 	scanf("%s",&brg[i].kode);
	 	printf("Nama barang:");
	 	scanf("%s",&brg[i].namaBarang);
	 	printf("Harga barang:");
	 	scanf("%s",&brg[i].hargaBarang);
	 }
 }
 void seqSearch(struct dataBarang L[],int N,char X[10],int *idx)
 {
 int k;
 int i;
 k=0;
 while((k<N)&&(strcmp(L[k].kode,X)!=0))
 {
 	k=k+1;
 }
 if((strcmp(L[k].kode,X)==0)&&(k<N))
 *idx=k;
 else
 *idx=-1;
 }

