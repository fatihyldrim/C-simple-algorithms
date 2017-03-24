#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x,a,count=1;
    char c;
    
    printf("Think a number between the 1 and 100.\n\
    I try to find it!\n\
    if my guess less than your number,you write 'i'\n\
    if my guess bigger than your number,you write 'd'\n\
    if I find,you write 'r'\n");
    
    srand(time(NULL));
    x = rand()%100+1;
    
    printf("%d ?",x);
    scanf("%c",&c);
    
        
    while(c!='r')
    {
            switch(c)
                     {
                     case 'i' :
                          a=100-x;
                          x = rand()%a+x;
                          printf("\n%d ?\n",x);
                          c = getche();
                          break;
                     
                     case 'd' :
                          x = rand()%x+1;
                          printf("\n%d ?\n",x);
                          c = getche();
                          break;
                     
                     default :
                           printf("Please! Enter i,d or r\n");
                           printf("\n%d ?\n",x);
                           c = getche();
                           break;
                     
                           
                           }
                
            count++;
     }
     
      printf("\nI found your number! Try = %d times.",count);
     

               
     
     getche();
     return 0;
}
