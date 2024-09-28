#include <stdio.h>
#include <stdlib.h>

int main()
{
   int VECTOR[21],DISPARI[21],conta,resto,max=0,conta2=0,num,occ=0,vol;
   srand(time(NULL));
   for(conta=0;conta<21;conta++)
   {
       VECTOR[conta]=0;
   }
   for(conta=0;conta<21;conta++)
   {
       VECTOR[conta]=40+rand()%21;
   }
   printf("l'array di base e':\n ");
    for(conta=0;conta<21;conta++)
   {
    printf("%d ",VECTOR[conta]);
   }
   for(conta=0;conta<21;conta++)
   {
       resto=VECTOR[conta]%2;
       if(resto==0)
       {
          VECTOR[conta]++;
       }
       DISPARI[conta]=VECTOR[conta];
   }
  printf("\nl'array dispari e':\n ");
   for(conta=0;conta<21;conta++)
   {
    printf("%d ",DISPARI[conta]);
   }

   for(conta=0;conta<21;conta++)
   {
      if(DISPARI[conta]>=DISPARI[max])
      {
        max=conta;
      }

      if(conta2==2)
      {
          do
          {
             DISPARI[conta-conta2]=DISPARI[max];
             conta2--;
          }
          while(conta2>=0);
          max=conta+1;
      }
      conta2++;
   }

   printf("\nBertassi Merda ");
   for(conta=0;conta<21;conta++)
   {
    printf("%d ",DISPARI[conta]);
   }

   do
   {

        printf("\nInserisci un numero da cercare: ");
        scanf("%d",&num);
       if(num<41)
       {
           printf("\n Numero %d out of range!!",num);
       }
        else
       {
          for(conta=0;conta<21;conta++)
        {
          if(num==DISPARI[conta])
          {
           occ++;
          }
        }
         printf("\n Numero %d ---%d occorrenze",num,occ);

       }
       printf("\n continuare? 1 si 2 no ");
       scanf("%d",&vol);
       occ=0;

   }
   while(vol==1);




    printf("Hello world!\n");
    return 0;
}
