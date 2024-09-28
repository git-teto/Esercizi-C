#include <stdio.h>
#include <stdlib.h>

int main()
{   int num_r,pdl,dispari,conta,media;
    printf("Benvenuto nel mio juego\n\n i numeri generati sono... ");
    srand(time(NULL));
    dispari=0;
    conta=0;
    do

   {
       num_r=1+rand()%90;
       printf("%d ",num_r);
       pdl=num_r%2;
       if(pdl==1)
       {
        dispari=dispari+num_r;
       }
        conta=conta+1;
   }
   while(num_r<40||num_r>50);
   media= dispari/conta;
   printf("la media e' %d ",media);

return 0;
}
