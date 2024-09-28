#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,max,min,i,diff;
    printf("inserisci 10 numeri e ti diro la diff fra il max e il min\n");
    scanf("%d",&num);
    max=num;
    min=num;
    for(i=0;i<9;i++)
    {

        scanf("%d ",&num);

        if(num>max)
        {
            max=num;
        }
        else
        {
            if(num<min)
            {
                min=num;
            }
        }
    }
    printf("max %d",max);
    printf("min %d\n",min);
    diff=max-min;
    printf("%d",diff);
    return 0;
}
