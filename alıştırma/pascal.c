#include<stdio.h>
#include<conio.h>

int main (void){
    
    int num,c1,c2,c3,t1,t2;
    
    printf("Num:");
    scanf("%d",&num);
    printf("\n");
    t1=1;
    t2=1;
    for(c1=num;c1>=1;c1--){
                           
                           for(c2=c1;c2>=1;c2--){
                                                 printf(" ");
                                                 }
                                                 
                           for(c3=1;c3<=t2;c3++){
                                                  printf("%d ",t1);
                                                 }
                           
                           printf("\n");
                                                  
                           t1++;
                           t2++;
                           
                           }
    
    getche();
    return 0;
}
