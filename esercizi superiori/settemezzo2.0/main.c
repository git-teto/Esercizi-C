#include <stdio.h>
#include <stdlib.h>

int main()
{
   int conf=1,pcconf;
   float io=0,tio=0,pc=0,tpc=0;
   srand(time(NULL));
   do
   {
       if(conf==1)
       {
           io=1+rand()%10;
            if(io>7)
            {
                io=0.5;
            }
            tio=tio+io;

       }
            pc=1+rand()%10;
            if(pc>7)
            {
                pc=0.5;
            }
            tpc=tpc+pc;
            if(tpc>=7&&tpc<8)
            {
                pcconf=2;
            }
            else
            {

                if(tpc<7)
                {
                    pcconf=1;
                }
                else
                {
                    pcconf=3;
                }
            }
       if(tio>=8)
            {
                conf=2;
                pcconf=4;

            }
       if(conf==1)
       {
        printf("Hai pescato= %1.1f Le tue carte= %1.1f\nVuoi continuare? SI premi 1, NO premi 2\n",io,tio);
        scanf("%d",&conf);
       }

   }
   while(pcconf<2||conf<2);
   if(pcconf==3)
   {
       printf("HAI VINTO!!!!!\n Hai pescato= %1.1f Le tue carte= %1.1f\n carte pc= %1.1f ",io,tio,tpc);
   }
   else
   {
   if(pcconf==4)
   {
       printf("HAI PERSO!!!!\n Hai pescato= %1.1f Le tue carte= %1.1f",io,tio);
   }
   else
   if(tio==tpc)
   {
      printf("PAREGGIO!!!!!\n Hai pescato= %1.1f Le tue carte= %1.1f\n carte pc= %1.1f",io,tio,tpc);
   }
    else
    {
        if((tio>=7&&tio<8)&&(tpc>=7&&tpc<8))
       {
           if(tio>tpc)
           {
                printf("HAI VINTO!!!!!\n Hai pescato= %1.1f Le tue carte= %1.1f\n carte pc= %1.1f ",io,tio,tpc);
           }
           else
           {
                printf("HAI PERSO!!!!!\n Hai pescato= %1.1f Le tue carte= %1.1f\n carte pc= %1.1f ",io,tio,tpc);
           }
       }
       else
       {

             if(tio>tpc)
             {
                printf("HAI VINTO!!!!!\n Hai pescato= %1.1f Le tue carte= %1.1f\n carte pc= %1.1f ",io,tio,tpc);
             }
             else
             {
                printf("HAI PERSO!!!!!\n Hai pescato= %1.1f Le tue carte= %1.1f\n carte pc= %1.1f ",io,tio,tpc);
             }

       }

    }
  }
    return 0;
}
