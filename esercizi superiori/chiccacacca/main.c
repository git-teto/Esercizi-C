#include <stdio.h>
#include <stdlib.h>

int main()
{
   int decresco[20],j,sotto,risp;
   decresco[0]=100;
   srand(time(NULL));
   printf("0) %d\n",decresco[0]);
   for(j=1;j<20;j++)
   {

       sotto=rand()%11;
       decresco[j]=decresco[j-1]-sotto;
       printf("%d) %d\n",j,decresco[j]);
   }

   do
   {
       printf("inserisci la posizione...");
       scanf("%d",&j);
        printf("%d\n",decresco[j]);
        printf("Vuoi continuare 1 si, 2 no...");
        scanf("%d",&risp);

   }
   while(risp==1);






    printf("Hello world!\n");
    return 0;
}
