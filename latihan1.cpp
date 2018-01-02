#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
	Program  	: Program Terjemah
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 25-Desember-2017
	Deskripsi 	: Latihan 1 
*/
int main(void)
{
   FILE *its;
   char msg[1000][15];
   char ind[15];
   int a,b;
   if((its = fopen("KAMUS.txt", "r"))==NULL)
   {
    printf("ERROR!!! file KAMUS.txt corrupt");
    getch();
    exit(1);

   }
   puts("Tentukan arah translate");
   puts("1. Indonesia-English");
   puts("2. English-Indonesia");
   b=getch();
   switch(b)
   {
   case '1' :
    {
    for(a=1;a<=1000;a++)
    fgets(msg[a], sizeof(msg),its);
    printf("Indonesia  : ");
    gets(ind);
    strcat(ind,"\n");
    printf("English    : ");
    for(a=1;a<=1000;a++)
    if(strcmp(ind,msg[a])==0)
    printf("%s", msg[a+1]);
    fclose(its);
    getch();
    break;
    }
   case '2' :
    {
    for(a=1;a<=1000;a++)
    fgets(msg[a], sizeof(msg),its);
    printf("English    : ");
    gets(ind);
    strcat(ind,"\n");
    printf("Indonesia  : ");
    for(a=1;a<=1000;a++)
    if(strcmp(ind,msg[a])==0)
    printf("%s", msg[a-1]);
    fclose(its);
    getch();
    break;
    }
   }
   return 0;
}
