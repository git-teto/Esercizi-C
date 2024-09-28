#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decresco[20];
    int j,g,f=100;
    srand(time(NULL));
    for(j=0;j<20;j++)
    {
        g=rand()%10;
        f=f-g;
        decresco[j]=f;
    }

     for(j=0;j<20;j++)
    {

       printf(" %d",decresco[j]);
    }







    return 0;
}
