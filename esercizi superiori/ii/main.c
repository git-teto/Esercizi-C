#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,giorno=0,paga,conta=0,tot=0;
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
      conta=conta+1;
       tot=tot+(paga*conta);
   }

   printf("il tot e' di %d ",tot);

    return 0;
}
