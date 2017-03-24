#include<stdio.h>

#include<locale.h> 

int main (void){
	
	setlocale(LC_ALL,"TURKISH");
	
	printf("şşşş\nıııı\nğğğğ\nİİİİİİ\nÇÇÇççç\nÜÜÜÜÜÜ\nÖÖÖÖÖÖ");
	getche();
	return 0;
	
}
