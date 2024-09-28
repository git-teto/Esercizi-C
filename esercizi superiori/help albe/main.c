#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,resto;
    do
    {
        printf("Immetti un numero A compreso fra -5 e 5 ");
        scanf("%d",&A);
        printf("Immetti un numero B compreso fra -5 e 5 ");
        scanf("%d",&B);
    }
    while( ((A<-5)||(A>5)) || ((B<-5)||(B>5)) );
    if(A>=0)
    {
        printf("Il numero e' positivo \n");
    }
    else
    {
        printf("Il numero e' negativo \n");
    }
    resto=B%5;
    if(resto==0)
    {
        printf("Il numero e' divisibile per 5\n");
    }
    else
    {
        printf("Il numero non e' divisibile per 5\n");
    }

    return 0;
}
