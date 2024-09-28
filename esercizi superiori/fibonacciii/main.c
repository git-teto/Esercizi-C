#include <stdio.h>
#include <stdlib.h>

int main()
{
    int volont,num,mem,conta,tot;
    printf("inserisci quanti numeri della serie di fibonacci vuoi vedere\n");
    scanf("%d",&volont);
conta=0;
    mem=0;
        num=1;
    do
    {

        tot=mem+num;
        printf("%d ",tot);
        mem=num;
        num=tot;

        conta=conta+1;
    }
    while(conta<volont);
    return 0;
}
