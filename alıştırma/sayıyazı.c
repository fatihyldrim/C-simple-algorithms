#include<stdio.h>
#include<conio.h>
int main()
{
	int a,ib,sb;
	printf("Enter a two basmakli sayi:");
	scanf("%d",&a);
	
	switch(ib=a/10){
		case 0: printf(""); break;
		case 1: printf("on"); break;
		case 2: printf("yirmi"); break;
		case 3: printf("otuz"); break;
		case 4: printf("kýrk"); break;
		case 5: printf("elli"); break;
		case 6: printf("altmýþ"); break;
		case 7: printf("yetmiþ"); break;
		case 8: printf("seksen"); break;
		case 9: printf("doksan"); break;
	}
	switch( sb=a%10){
		case 0: printf(""); break;
		case 1: printf(" bir"); break;
		case 2: printf(" iki"); break;
		case 3: printf(" uc"); break;
		case 4: printf(" dort"); break;
		case 5: printf(" beþ"); break;
		case 6: printf(" altý"); break;
		case 7: printf(" yedi"); break;
		case 8: printf(" sekiz"); break;
		case 9: printf(" doksan"); break;
	}

getche();
return 0;	
}
