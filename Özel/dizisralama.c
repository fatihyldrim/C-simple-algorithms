
// Dizi_Elemanlarini_Siralama

//devinyeri.com

 

#include "stdio.h"
#include "conio.h"
int i,j,n,g,a[100];
 

int main()

{

    printf("Dizinin Eleman Sayisini Giriniz: ");
    scanf("%u",&n);
    
    for(i=0;i<n;i++)
        {
            printf("a(%u)=",i);
            scanf("%d",&a[i]);
        }
    for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
            if(a[j]<a[i])
                {
                 g=a[i];
                    a[i]=a[j];
                    a[j]=g;
                }
            }
        }
    printf("n Sirali Dizi \n");
    for(i=0;i<n;i++)
        printf("a(%u)=%d\n",i,a[i]);


         getch();
    return 0;
}
