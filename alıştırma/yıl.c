#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n;
    printf("n: ");
    scanf("%d",&n);
    
    for(i=1; i<=(n+1)/2; )
    {
             for(k=1; (n+1)/2-i+1>=k; k++)printf(" ");

             for(j=1; j<2*i; j++)printf("*");
    printf("\n");
    i++;
    }

    if(2*i-1>=n)
    {
    
     for(i=(n+1)/2-1; i>=1; i--)
     {
                     for(k=1; (n+1)/2-i+1>=k; k++)printf(" ");
                     
                     for(j=1; j<2*i; j++)printf("*");
     printf("\n");
     }
    }
system("pause");
return(0);
}
