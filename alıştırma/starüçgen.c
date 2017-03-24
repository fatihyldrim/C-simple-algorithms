#include<stdio.h>
#include<conio.h>

int main (void){
 
 int num,a,b;
 printf("Enter a number:");
 scanf("%d",&num);
 
 for(a=1;a<=num;a++){
                     for(b=1;b<=a;b++)printf("*");
                     printf("\n");
                     }
 
 for(a=num-1;a>=1;a--){
                       for(b=a;b>=1;b--)printf("*");
                       printf("\n");
                       }
    
    
getche();
return 0;
}
