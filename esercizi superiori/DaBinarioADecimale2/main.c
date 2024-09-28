#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v=0,t=0,c=0,r=0,tot=0,k=0,totf=0;
    t=0.1;
    tot=0.5;

    printf("Inserisci binario ");
    scanf("%f32.0",&v);
    do
    {
       r=0;
        t=10*t;
        c=c+1;
        r=v-t;
    }
    while(r>t);
    do
    {
       if(v>=t)
       {
           tot=0.5;
           do
           {
           tot=2*tot;
           k=k+1;
           }
           while(k<c);
       v=v-t;
       }
       c=c-1;
       k=0;
       totf=totf+tot;
       tot=0;

       t=t/10;
        r=v-t;

    }
    while(c>0);
    printf("%f",totf);
    return 0;
}
