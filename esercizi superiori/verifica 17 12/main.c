#include <stdio.h>
#include <stdlib.h>

int main()
{
   int   perfetto[8],j,min,app,k,z;
   srand(time(NULL));
   for(j=0;j<8;j++)
   {
       perfetto[j]=10+rand()%81;
   }
   printf("I numeri generati sono\n");
   for(j=0;j<8;j++)
   {
       printf("%d ",perfetto[j]);
   }
    printf("\n");
   for(j=0;j<8;j++)
   {
       min=j;
       for(k=j;k<7;k++)
       {
          if(perfetto[k+1]<=perfetto[min])
          {
              min=k+1;
          }
       }
          app=perfetto[min];
          perfetto[min]=perfetto[j];
          perfetto[j]=app;
          for(z=0;z<8;z++)
          {
            if(z<=j)
            {
             printf("%d ",perfetto[z]);
            }
            else
            {
               printf(" 0 ");
            }
           }
     printf("  \n");
   }







    return 0;
}
