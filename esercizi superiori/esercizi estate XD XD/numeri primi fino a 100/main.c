#include <stdio.h>
#include <stdlib.h>
#define mamma 100
int main()
{
   int num,numA=2,r,vp=2;
    printf("Inserire il quantitativo di numeri da analizzare\n");
    scanf("%d",&num);
   printf(" I numeri primi sono:\n ");
    do
    {
    do
    {
       r=numA%vp;
        if((r==0)&&(numA==vp))
    {
      printf("%4d ",numA);
    }
       vp=vp+1;

    }
    while(r!=0);
    vp=2;

    numA=numA+1;

    }
    while(numA<=num);

    return 0;
}
