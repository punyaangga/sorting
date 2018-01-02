/*
	Program  	: Modul 6_4
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Modul 6_4 
*/
#include<stdio.h>
#include<string.h>
struct dataMahasiswa
{
	char nim[10];
	char nama[20];	
};
void inputDataMhs(struct dataMahasiswa mhs[]);
void seqSearch(struct dataMahasiswa mhs[],int N,char X[10],int *idx);
main()
{
	int pos;
	char pil;
	char nimCari[10];
	struct dataMahasiswa mhs[5];
	//panggil function
	inputDataMhs(mhs);
	while(1)
	{
		//user input
		printf("\nNim yang dicari :");
		scanf("%s",&nimCari);
		//menjalankan pencarian
		seqSearch(mhs,5,nimCari,&pos);
		if(pos!=-1)
		{
			printf("\nData Mahasiswa Ketemu");
			printf("\nNim siswa : %s",mhs[pos].nim);
			printf("\nNama siswa : %s",mhs[pos].nama);
		}
		else
		printf("\nData Mahasiswa Tidak Ketemu");
		printf("\nCari data lagi[y/n]?");
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
 	printf("\nMasukan Data Mahasiswa\n");
 	//user input
 	for(i=0;i<5;i++)
	 {
	 	printf("\nData Mahasiswa ke :%d\n",i+1);
	 	printf("Nim :");
	 	scanf("%s",&mhs[i].nim);
	 	printf("Nama :");
	 	scanf("%s",&mhs[i].nama);
	 }
 }
 void seqSearch(struct dataMahasiswa L[],int N,char X[10],int *idx)
 {
 int k;
 int i;
 k=0;
 while((k<N)&&(strcmp(L[k].nim,X)!=0))
 {
 	k=k+1;
 }
 if((strcmp(L[k].nim,X)==0)&&(k<N))
 *idx=k;
 else
 *idx=-1;
 }

