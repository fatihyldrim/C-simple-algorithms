#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
    int x,y;
    system("color A");
    srand(time(NULL));
    getche();
    while(1)
    {
    x=rand()%10;
    printf("%d\t",x);
    y=rand()%3;
    if (y==0) printf("\t");
    
    }
    
    return 0;
}
