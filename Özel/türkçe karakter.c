#include<stdio.h>

#include<locale.h> 

int main (void){
	
	setlocale(LC_ALL,"TURKISH");
	
	printf("����\n����\n����\n������\n������\n������\n������");
	getche();
	return 0;
	
}
