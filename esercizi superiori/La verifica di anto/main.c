#include <stdio.h>
#include <stdlib.h>

int main()
{
   int carta_r,carta,conto,risposta,risultato;
    printf("Ora il saltimbanco estre una carta!\n\n");
    srand(time(NULL));
    carta_r=1+rand()%10;
    printf("La carta e'... ???? Credevi te lo dicessi!!!! sei tu che ....\n ......dovrai indovinare la carta estratta....\n\n");
    do
    {
    printf("....Prova indicandone una tra 1 e 10\n\n");
    scanf("%d",&carta);
    }
    while(carta<=0||carta>=11);
    if(carta==carta_r)
    {
      if(carta>=1&&carta<=7)
      {
          printf("CARTA ESATTA!!\n\n TRENTA EURI\n\n");
          conto=30;
          printf("il tuo capitale vale %d\n\n",conto);
          printf("la carta nascosta era %d\n\n",carta_r);

      }

    }
    else
    {
        printf("hai fallito il primo colpo....\n");
        printf("..dimmi almeno se e' pari < 0 > o dispari < 1 >\n");
        scanf("%d",&risposta);
        risultato=carta_r%2;
        if(risultato==risposta)
        {
            printf("hai indovinato al secondo colpo!!!\n\n non perdi e non guadagni\n\n");
            conto=0;
            printf("il tuo capitale vale : %d Euri\n\n",conto);
              printf("la carta nascosta era %d\n\n",carta_r);
        }
        else
        {
            printf("hai veramente toppato!!\n\n perdi il quintuplo della carta\n\n");
            conto=carta_r*-5;
            printf("il tuo capitale vale : %d\n\n",conto);
              printf("la carta nascosta era %d\n\n",carta_r);
        }

    }

    return 0;

}
