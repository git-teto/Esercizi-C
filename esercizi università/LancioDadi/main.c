#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lanci,lancio,frequenze[6];
    float freq;
    srand(time(NULL));
    printf("Quante volte vuoi lanciare i dadi?\n");
    scanf("%d",&lanci);
    for(int i=0;i<6;i++){
        frequenze[i]=0;
    }
    for(int i=0;i<lanci;i++){
       lancio=(rand()%6);
       frequenze[lancio]++;
      // printf("\nlancio: %d, frequenze %d",lancio+1,frequenze[lancio]);
    }

    for(int i=0;i<6;i++){
            freq=(float)frequenze[i]/lanci;
        printf("\n\nnumero: %d, frequenze %8.2f",i+1,freq);
    }

    return 0;
}
