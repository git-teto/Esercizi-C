#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int numeri,tot=0,totVar=0,exp;
    float media,varianza;
    printf("quanti numeri vuoi inserire?");
    scanf("%d",&numeri);
    int numeriInseriti[numeri];
    for(int i=0;i<numeri;i++){
        printf("\ninserisci il %d numero?\n",i);
        scanf("%d",&numeriInseriti[i]);
        printf("\nho inserito %d",numeriInseriti[i]);
        tot=tot+numeriInseriti[i];
    }
     media=(float)tot/numeri;
     for(int i=0;i<numeri;i++){
            exp=numeriInseriti[i]-media;
        totVar=totVar+pow(exp,2);
     }
     varianza=(float)totVar/(numeri-1);
     printf("media %8.2f varianza %8.2f",media,varianza);
    return 0;
}
