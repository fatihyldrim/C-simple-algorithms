#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x,i,j,oyuncu,sayi;
    int t[1000];
    
    
    printf("Kac oyuncu olacagini giriniz:");
    scanf("%d",&oyuncu);
    
    
    x=oyuncu*15;
    srand(time(NULL));
    
    for(i=1;i<=x;i++)
    {
           t[i]=rand()%99+1;
    }
     j=1;
    for(i=1;i<=oyuncu;i++)
    {
               
               printf("\n%d. oyuncunun kagidi -->\t",i);
               printf("%d\t%d\t%d\t%d\t%d\n",t[j],t[j+1],t[j+2],t[j+3],t[j+4]);
               printf("\t\t\t%d\t%d\t%d\t%d\t%d\n",t[j+5],t[j+6],t[j+7],t[j+8],t[j+9]);
               printf("\t\t\t%d\t%d\t%d\t%d\t%d\n\n",t[j+10],t[j+11],t[j+12],t[j+13],t[j+14]);
               j=i*15;                
    }
    
    
    
    while(1)
    {
            sayi=rand()%99+1;
            printf("cekilen sayi --> %d\n",sayi);
            getche();
    }
    
    
   return 0;
}
