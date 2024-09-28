#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rest=0,num=0,conta=0,contag=0,tot=0,fin=0;
    printf("inserisci il numero da convertire ");
    scanf("%d",&num);
    do
    {
        rest=num%2;
        num=num/2;
        if(conta==0)
        {
            tot=rest;
        }
        else
        {
            do
            {
              rest=rest*10;
              contag=contag+1;
            }
            while(contag<conta);
        contag=0;
        tot=tot+rest;
        }

        conta=conta+1;
    }
    while(num>=1);
    printf("%d",tot);
    return 0;
}
