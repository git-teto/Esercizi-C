#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,num_case[10],j,cont;


   for(j=0;j<10;j++){num_case[j]=0;}
   for(j=0;j<10;j++) {printf("Inserisci un numero "); scanf("%d",&num_case[j]);}

 for(j=0;j<10;j++)
   {
      cont=j;

         do
       {
         cont--;
       }
       while((num_case[j]!=num_case[cont])&&(cont>=0));

      if(cont<0)
      {
          printf("\n %d",num_case[j]);
      }
   }
    return 0;
}
