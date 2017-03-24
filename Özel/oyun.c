#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x,y,n1,n2;
      
    srand(time(NULL));    
    x = rand()%100+1;
    y = rand()%100+1;
    
    printf("I have a number between 1 and 100\nNumber of Fatih and Number of Melek is different\
    \nlets see who find the firstly\n");
    
    printf("Fatih, please type your first guess\t");
        
    printf("Melek, please type your first guess\n");
    scanf("%d%d",&n1,&n2);
    
    do
    {
                     if(n1<x) printf("Fatih, Too low. Try again\t");
                     else if (n1>x) printf("Fatih, Too high. Try again\t");
                     else break;
                     
                     if(n2<y) printf("Melek, Too low. Try again\n");
                     else if (n2>y) printf("Melek, Too high. Try again\n");
                     else break;
                                     
                     scanf("%d%d",&n1,&n2);
                     
                     
    }
    while(1);
    
    if(x==n1 && y!=n2)printf("Winner is Fatih");
    else if(x!=n1 && y==n2)printf("Winner is Melek");
    else printf("Winner is Fatih and Melek, You found the same times.");
    
    
    getche();
    return 0;
}
