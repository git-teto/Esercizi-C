#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int x;
    scanf("%d",&x);
    int y;
    y= x>0 ? 90 : 70;
    printf("%d",y);*/

   /* float totale,sconto,sconto2,differenza;
    printf("Inserisci totale: ");
    scanf("%f",&totale);
    if(totale<500){
       printf("sconto 10\n");
        sconto=totale/100*10;
        totale-=sconto;
        printf("sconto: %f totale: %f\n",sconto,totale);
    }
    else{
            printf("sconto 20\n");
        sconto=totale/100*20;
        totale-=sconto;
        printf("sconto: %f totale: %f\n",sconto,totale);
    }

     if(totale<300){
      // printf("sconto2 10\n");
        sconto2=totale/100*10;
        totale-=sconto2;
        printf("sconto2: %f totale: %f\n",sconto2,totale);
    }
    else{
            printf("sconto2 20\n");
        differenza=totale-300;
        sconto2=differenza/100*20;
        totale-=sconto2-30;
        printf("sconto: %f totale: %f\n",sconto2,totale);
    } */

    float prezzo1,prezzo2,sconto;
    printf("Inserisci prezzo1\n");
    scanf("%f",&prezzo1);
    printf("Inserisci prezzo1\n");
    scanf("%f",&prezzo2);
    if(prezzo1<prezzo2){
       sconto=prezzo1/2;
       prezzo1-=sconto;
       printf("totale: %f",prezzo2+prezzo1);
    }
    else{
        sconto=prezzo2/2;
       prezzo2-=sconto;
       printf("totale: %f",prezzo2+prezzo1);
    }
    return 0;

}
