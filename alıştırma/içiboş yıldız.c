#include<stdio.h>
#include<conio.h>

int main(void){
    
    int a,b,num;
    
    printf("Enter a nunber");
    scanf("%d",&num);
    
    for(a=1;a<=num;a++){
                        for(b=1;b<=num;b++){
                                            if(a==1 || b==1 || a==num || b==num){
                                                    printf("*");
                                                    }
                                            else printf(" ");
                                            }
                        printf("\n");
                        }
    getche();
    return 0;
}
