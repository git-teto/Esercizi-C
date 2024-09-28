#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,contag,conta;
    printf("inserisci base del triangolo\n");
    scanf("%d",&num);
    conta=1;
    do
    {
       do
       {
           printf("*");
           contag=contag+1;
       }
       while(contag<conta);
        contag=0;
       printf("\n");
       conta=conta+1;
    }
    while(conta<=num);
    return 0;
}
