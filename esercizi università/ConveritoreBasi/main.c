#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,base,converso,resto[20],i=0;
    printf("Inserisci numeri da converire\n");
    scanf("%d",&numero);
    printf("Inserisci base da 2 a 9\n");
    scanf("%d",&base);
    while(base<2||base>9){
       printf("ERRORE! Inserisci base da 2 a 9\n");
        scanf("%d",&base);
    }
    converso=numero;
    do{
        resto[i]=converso%base;
        converso=converso/base;
        printf("resto: %d converso %d \n",resto[i],converso);
        i=i+1;
    }
    while(converso!=0);

    for(i=0;i<20;i++){
        printf(" %d ",resto[i]);
    }

    return 0;
}
