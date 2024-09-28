#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,appoggio,termine,conta=2;

    printf("Inserisci che termine vuoi di fibonacci\n");
    scanf("%d",&termine);
    if(termine==1){
        printf("%d\n",a);
    }else{
        if(termine==2){
        printf("%d\n",b);
    }
    else{
    while(conta!=termine){
       appoggio=b;
        b=b+a;
        a=appoggio;
        conta=conta+1;
    }
    printf("%d",b);
    }
    }



    return 0;
}
