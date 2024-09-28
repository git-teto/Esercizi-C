#include <stdio.h>
#include <stdlib.h>
#define mesi 12
int main()
{
    int mm[mesi],i,max=0,maxm=0;
    printf("Inserisci i mm di pioggia dei 12 mesi\n");
    for(i=0;i<12; i++)
    {
        printf("Inserisci le pioggie del mese %2d: ",i+1);
        scanf("%d",&mm[i]);
    }
    for (i=0; i<mesi; i++)
    {
        printf(" nel mese %d ha piovuto %d\n",i+1, mm[i] );
      if(mm[i]>max)
      {
        maxm=i+1;
        max=mm[i];
      }

    }
    printf(" il mese più piovoso e' %d con %d mm \n",maxm,max);
    return 0;
}
