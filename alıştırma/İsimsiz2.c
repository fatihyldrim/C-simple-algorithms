#include<stdio.h>

int main()
{
	int i,x,j,k;
	
	printf("Bir sayi girin:");
	scanf("%d",&x);
	
	for (i=1;i<=x;i++){
		
		for(j=x;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
		
		printf("%d",k);
	}
	printf("\n");
	}
}
