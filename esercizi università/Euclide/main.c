#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Euclide!\n");
    int a,b,resto;
    printf("Inserisci a: ");
    scanf("%d",&a);
    printf("\nInserisci b: ");
    scanf("%d",&b);

    do{

        resto=a%b;
        printf("\n a: %d, b: %d, resto:%d ",a,b,resto);
        a=b;
        b=resto;
    }
    while(resto!=0);
    printf("\nMCD e': %d",a);
    return 0;
}
