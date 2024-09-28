#include <stdio.h>
#include <stdlib.h>

int main()
{
    float voto,tot,votitot,media;
   voto=0;
   tot=0;
   votitot=0;
   media=0;
    while(voto>=0)
   {
    printf("Inserisci voto\n");
    scanf("%f",&voto);
    tot=tot+voto;
    votitot=votitot+1;
    media=tot/votitot;
    printf("la media dei voto finora inseriti e' %f\n",media);

    }

    return 0;
}
