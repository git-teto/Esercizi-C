#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero,amico_1,amico_2,maggiore,differenza,volume_p,volume_c;
    printf("Inserisca un numero fra 0 e 100 compresi!!\n");
    scanf("%d",&numero);
    if(numero<0||numero>100)
    {
        if(numero<0)
        {
            printf("e' negativo cazo!!\n");
        }
        else
        {
            printf("e' piu' grande di 100 pirla!!\n");
        }
    }
    else
    {
        srand(time(NULL));
        amico_1=rand()%101;
        amico_2=100-amico_1;
        volume_c=amico_1*amico_2*numero;
        if(numero>amico_1)
        {
            if(numero>amico_2)
            {
                maggiore=numero;
            }
            else
            {
                maggiore=amico_2;
            }
        }
        else
        {
          if(amico_1>amico_2)
          {
              maggiore=amico_1;
          }
          else
          {
              maggiore=amico_2;
          }
        }
        differenza=volume_c-volume_p;
        printf("il numero da te inserito e'=%d , amico1= %d , amico2= %d , volumep= %d , volumec= %d , diff= %d\n", numero,amico_1,amico_2,volume_p,volume_c,differenza);

        }

    return 0;
}
