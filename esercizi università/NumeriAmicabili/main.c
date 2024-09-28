#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b=1,divisore=1,sommaDivisoriA=0,sommaDivisoriB=0;
   /*printf("Inserisci a: ");
   scanf("%d",&a);
   printf("Inserisci b: ");
   scanf("%d",&b);*/
  while(a!=sommaDivisoriB||b!=sommaDivisoriA||a==b){
     sommaDivisoriA=0;
     sommaDivisoriB=0;
      if(a>b){
        b=b+1;
    }
    else{
        a=a+1;
        b=1;
    }

    do{
        if(a%divisore==0&&divisore!=a){
            sommaDivisoriA=sommaDivisoriA+divisore;
            printf("\n a:%d Divisore: %d SommaDivisoriA %d",a,divisore,sommaDivisoriA);
        }
        divisore=divisore+1;
    }
    while(a>divisore);
    divisore=1;
    printf("\nfuori ciclo valA: %d Divisore: %d SommaDivisoriA %d",a,divisore,sommaDivisoriA);
    do{
        if(b%divisore==0&&divisore!=b){
            sommaDivisoriB=sommaDivisoriB+divisore;
            printf("\n b: %d Divisore: %d SommaDivisoriB %d",b,divisore,sommaDivisoriB);
        }
        divisore=divisore+1;
    }
    while(a>divisore);
    divisore=1;
    printf("\nfuori ciclo valB: %d Divisore: %d SommaDivisoriB %d",b,divisore,sommaDivisoriB);

    }
    printf("\nI due numeri %d e %d sono amicali!",a,b);



   // sommaDivisori=0;
   // a=a+1;

  // printf("I numeri amicali sono %d %d",a,sommaDivisori);

    return 0;
}
