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
		case 4: printf("k�rk"); break;
		case 5: printf("elli"); break;
		case 6: printf("altm��"); break;
		case 7: printf("yetmi�"); break;
		case 8: printf("seksen"); break;
		case 9: printf("doksan"); break;
	}
	switch( sb=a%10){
		case 0: printf(""); break;
		case 1: printf(" bir"); break;
		case 2: printf(" iki"); break;
		case 3: printf(" uc"); break;
		case 4: printf(" dort"); break;
		case 5: printf(" be�"); break;
		case 6: printf(" alt�"); break;
		case 7: printf(" yedi"); break;
		case 8: printf(" sekiz"); break;
		case 9: printf(" doksan"); break;
	}

getche();
return 0;	
}
