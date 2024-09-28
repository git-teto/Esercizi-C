#include <stdio.h>
#include <stdlib.h>

int main()
{
int v=0,cg=0,ct=1,t;
   printf("Inserisci valore ");
   scanf("%d",&v);
   t=v-1;
   do
   {
       if((ct<2||ct>=v)||(cg<1||cg>=t))
       {
           printf("*");
       }
       else
       {
          printf(" ");
       }
       cg=cg+1;

       if(cg==v)
       {
           cg=0;
           ct=ct+1;
           printf("\n");
       }

   }
   while(ct<=v);
    return 0;
}
