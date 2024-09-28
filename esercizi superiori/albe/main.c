#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0,giorno=0,prezzo=0,giorno_old=0,tot=0,paga=0;
   srand(time(NULL));
   for(i=0;i<7;i++)
   {

       giorno=1+rand()%7;
       paga=0;
       switch(giorno)
       {
           case 1:
           paga=10;
           break;
            case 2:
           paga=20;
           break;
            case 3:
           paga=30;
           break;
            case 4:
           paga= 40;
           break;
            case 5:
           paga= 50;
           break;
            case 6:
           paga= 60;
           break;
            case 7:
           paga= 70;
           break;
       }
          if(giorno==giorno_old)
       {
           paga=paga*2;

       tot=tot+paga;
       printf("Giorno= %d, giorno_old= %d, paga= %d, tot= %d\n",giorno,giorno_old,paga,tot);
       giorno_old=giorno;

       }
       else
       {

       tot=tot+paga;
       printf("Giorno= %d, giorno_old= %d, paga= %d, tot= %d\n",giorno,giorno_old,paga,tot);
       giorno_old=giorno;

       }



   }

    return 0;
}
