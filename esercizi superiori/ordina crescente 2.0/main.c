#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrey[5],conta=0,indice=0,app,i;
    srand(time(NULL));
   printf("I Numeri sono: \n");
    for(conta=0;conta<5;conta++)
    {
        arrey[conta]=1+rand()%90;
        printf("%d ",arrey[conta]);
    }

   for(conta=0;conta<4;conta++)
   {
     for(indice=(conta+1);indice<5;indice++)
     {
          printf("\n\n \n %d<%d  \n ",arrey[conta],arrey[indice]);
      for(i=0;i<5;i++)
      {

        printf("%d ",arrey[i]);
      }
        if(arrey[conta]>=arrey[indice])
       {
         app=arrey[conta];
         arrey[conta]=arrey[indice];
         arrey[indice]=app;
       }
      }
   }


    printf("\n\nI Numeri ordinati sono: \n");
    for(conta=0;conta<5;conta++)
    {

        printf("%d ",arrey[conta]);
    }

    return 0;
}
