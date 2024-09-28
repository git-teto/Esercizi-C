#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],num,i;
    srand(time(NULL));
    printf("cose di culocane  arrayose :");
      for(i=0;i<10;i++)
    {
     a[i]=0;
    }

    a[0]=100;

    for(i=1;i<10;i++)
    {
        num=(rand()%10)+1;
        a[i]=a[i-1]-num;
    }
    for(i=0;i<10;i++){

    printf("\n%d", a[i]);
    }


    return 0;
}
