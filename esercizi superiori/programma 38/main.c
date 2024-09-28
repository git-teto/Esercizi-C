#include <stdio.h>
#include <stdlib.h>

int main()
{
   int test,conta,doppio;
   printf("Inserisci \n ");

   scanf("%d",&test);
   doppio=test*2;
   int array[test];
    int mario[test];
   int c[doppio];
   srand(time(NULL));



     for(conta=0;conta<test;conta++)
     {
         array[conta]=0;
         mario[conta]=0;
     }
     for(conta=0;conta<test;conta++)
   {
       array[conta]=1+rand()%100;
       mario[conta]=1+rand()%100;
   }
   for(conta=0;conta<test;conta++)
   {
       printf(" %d ",array[conta]);
       printf(" %d\n",mario[conta]);
   }
    for(conta=0;conta<test;conta++)
    {
        c[conta*2]=array[conta];
        c[(conta*2)+1]=mario[conta];
    }
       for(conta=0;conta<doppio;conta++)
   {
       printf(" %d ",c[conta]);

   }
    return 0;
}
