#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sommapa=0,num=0,min=50,num2;
    srand(time(NULL));
   do
   {
     num=-10+rand()%31;
     sommapa=sommapa+num;
    num2=num;
     if(num2<0)
   {
       num2=num2+num2*-2;
   }
   if(num2<min)
   {
       min=num2;
   }
     printf("NUM %d\t  SOMMAPA %d\n",num,sommapa);
   }
   while(sommapa<60);
   printf("\n MIN: %d\n",min);






    printf("Hello world!\n");
    return 0;
}
