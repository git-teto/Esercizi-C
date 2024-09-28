#include <stdio.h>
#include <stdlib.h>

int main()
{
     float num1,num2,prodot,gisco,unita,gisco2,decine,centinaia,urca;
    printf("Inserire primo numero\n");
    scanf("%f",&num1);
    printf("Inserire secondo numero\n");
    scanf("%f",&num2);
   prodot=(num1*num2);


    if(prodot<10)
    {
        printf("le unita sono di=%f\n",prodot);
    }
    else
    {
        if(prodot>=100)
         {
          gisco2=prodot;
           while(prodot>=100)
             {

                prodot=prodot-100;
             }

             decine=prodot;
             centinaia=(gisco2-decine)/100;
             while(decine>10)
             {
                 decine=decine-10;
             }

             unita=decine;
            decine=(decine-unita)/10;
             printf("le centinaia sono=%f, le decine sono=%f,  le unita sono=%f",centinaia,decine,unita);
         }
         else
         {
             urca=prodot;


           while(prodot>=10)
            {
            prodot=prodot-10;
            }

   unita=prodot;

   decine=(urca-unita)/10;
   printf("le decine sono di=%f e le unita sono di=%f\n",decine,unita);


         }
    }

    return 0;
}
