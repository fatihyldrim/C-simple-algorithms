#include<stdio.h>

int main()
{
    char str[20],x;
    int c,c1;
    printf("ismin ? :");
    scanf("%s",str);
    
    printf("%s sana ",str);
    
    for(c=0;str[c+2] != '\0';c++) printf("%c",str[c]);
    
    printf("os diyebilir miyim ? (e / h)");           
    x=getche();
    if (x=='h'){ printf("\n");
                 for(c1=1;c1<=3;c1++){
                 for(c=0;str[c+2] != '\0';c++) printf("%c",str[c]);
                 printf("os\n");}
                 printf("\npuhahahahaahahaaa :D");
                 }
    if (x=='e') printf("\ndemek istemiyorum bos ver.\n");
    
    
            
    getche();
    return 0;
}
