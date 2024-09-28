#include <stdio.h>
#include <stdlib.h>

int main()
{
   int r=0,cr=1,n=1,c=1;
    printf("inserisci num righe ");
    scanf("%d",&r);

    do
    {

       if(c<=cr)
       {
       printf("%d ",n);
       c=c+1;
      n=n+1;
       }
       else
       {
         printf("\n");
         cr=cr+1;
         c=1;
       }


    }
    while(cr<=r);
    return 0;
}
