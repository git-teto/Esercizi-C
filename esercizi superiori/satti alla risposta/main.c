#include <stdio.h>
#include <stdlib.h>

int main()
{
   float scatti1,scatti2,scatti3,costo,tot,canone;
   printf("inserisci gli scatti del mese 1:\n");
   scanf("%f",&scatti1);
   printf("inserisci gli scatti del mese 2:\n");
   scanf("%f",&scatti2);
   printf("inserisci gli scatti del mese 3:\n");
   scanf("%f",&scatti3);
   printf("Quanto costa uno scatto:\n");
   scanf("%f",&costo);
   printf("Quanto costa il canone mensile?\n");
   scanf("%f",&canone);
   tot=(scatti1+scatti2+scatti3)*costo+canone*3;
   printf("il costo è di=%f\n",tot);
    return 0;
}
