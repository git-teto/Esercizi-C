#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lanc_dad[30],freq[6],num_lanc=0,conta=0,conta2=0,num_gen=0,lanci=0;

    do
    {
        printf("Quanti lanci? (tra 10 e 30 ) ");
        scanf("%d",&num_lanc);
    }
    while((num_lanc<10)||(num_lanc>30));
        for(conta=0;conta<6;conta++)
     {
         freq[conta]=0;
     }


    for(conta=0;conta<30;conta++)
     {
         lanc_dad[conta]=0;
     }

     srand(time(NULL));
    for(conta2=0;conta2<num_lanc;conta2++)
     {
       num_gen=1+rand()%6;
       lanc_dad[conta2]=num_gen;
       freq[num_gen-1]++;
     lanci++;

     }
      printf("\nLanci=%d\n\nValori usciti: ",lanci);


    for(conta2=0;conta2<num_lanc;conta2++)
    {
         printf("%d, ",lanc_dad[conta2]);
    }

     for(num_gen=1;num_gen<=6;num_gen++)
     {

       printf("\n\nQuante volte %d e' uscito: %d\n",num_gen,freq[num_gen-1]);

     }






    printf("Hello world!\n");
    return 0;
}
