#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int c,num[81],a,b;
    
    srand(time(NULL));
    
    a=2;
    b=8;
    for(c=0;c<81;c++){
                      num[c]=rand()%9+1;
                      printf("%d",num[c]);
                      if (c==a) {printf(" "); a+=3;}
                      if (c==b) {printf("\n"); b+=9;}
                      }
                      
    getche();
    return 0;
}
                      
