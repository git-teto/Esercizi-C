#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,estratto,giocatore=1;
    srand(time(NULL));
    n=(rand()%100)+1;
    k=(rand()%n);
    do{
            printf("E' il turno di giocatore %d",giocatore%2);
        printf("\nestrai un numero da 1 a %d: ",k);
        do{
            scanf("%d",&estratto);
        }while(estratto<0||estratto>k);
        n=n-estratto;
    giocatore++;
    }
    while(n>0);
    printf("\ngiocatore %d ha vinto",giocatore%2);
    return 0;
}
