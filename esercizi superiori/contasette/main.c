#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0,prov=0,prov2=0,conta7=0;
    printf("Inserici un numero e io ti diro' quanti sette ci sono ");
    scanf("%d",&num);
    for(;num>0;num=num-1)
    {

        prov=(num-7)%10;
        if(prov==0)
        {
        conta7=conta7+1;
        }
         prov2=num-70;
         if(prov2>=0&&prov2<=9)
         {
          conta7=conta7+1;
         }

    }
    printf("i sette sono %d",conta7);


    return 0;
}
