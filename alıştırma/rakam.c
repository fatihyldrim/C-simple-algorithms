#include<stdio.h>
#include<conio.h>
int main(void)
{
	int num,c1,c2,c3,a=1,b=1;
	printf("Enter e number:");
	scanf("%d",&num);
	
	for(c1=num;c1>=1;c1--){
		
		
	        
					for(c2=c1;c2>=1;c2--)printf(" ");					
					
					
		for(c3=1;c3<=a;c3++)printf("%d",b);
	
	printf("\n");
    b++;
	a+=2;
    }

getche();
return 0;
}
