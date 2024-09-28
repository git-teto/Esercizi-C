#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
  num=0;
   while(num>=0)
   {
   do
    {
    printf("\nInserisci un numero compreso e che comprende  1 e 100   \n");
    scanf("%d",&num);
    }
    while (num<1||num>100);
  if(num==100)
   {
       printf("C");
   }
   else
   {
  if(num>89)
  {
     printf("XC");
     num=num-90;
     if(num==9)
                {
                    printf("IX");
                }
                else
                {
                    if(num>=5)
                    {
                        printf("V");
                        num=num-5;


                             while(num>0)
                        {
                             printf("I");
                            num=num-1;
                        }
                    }
                    else
                    {
                          if(num==4)
                          {
                              printf("IV");
                          }
                          else
                          {
                          while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                          }
                    }
                }


  }
   else
   {
   if((num>=60)&&(num<=89))
    {
       printf("L");
       num=num-50;
       while(num>10)
            {
               printf("X");
                num=num-10;

            }
                if(num==9)
                {
                    printf("IX");
                }
                else
                {
                    if(num>=5)
                    {

                        num=num-5;

                        printf("V");
                         while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                    }
                    else
                    {
                        if(num==4)
                        {
                            printf("IV");
                        }
                        else
                        {
                         while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                        }
                    }
                }



    }
   else
   {
    if(num>=50)
    {
        printf("L");
        num=num-50;
         if(num==9)
                {
                    printf("IX");
                }
         else
         {
                    if(num>=5)
                    {
                        printf("V");
                        num=num-5;

                             while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                    }
                     else
                    {
                        if(num==4)
                        {
                            printf("IV");
                        }
                        else
                        {
                         while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                        }
                    }
         }

    }
    else
    {
        if(num>=40)
        {
            if(num==40)
            {
                printf("XL");
            }
            else
            {
                printf("XL");
                num=num-40;

                if(num==9)
                {
                    printf("IX");
                }
                else
                {
                    if(num>=5)
                    {
                        printf("V");
                        num=num-5;

                             while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                    }
                    else
                    {
                          while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                    }
                }
            }
        }
        else
        {

            while(num>10)
            {
               printf("X");
                num=num-10;

            }

                if(num==9)
                {
                    printf("IX");
                }
                else
                {
                    if(num>=5)
                    {

                        num=num-5;

                        printf("V");
                         while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                    }
                    else
                    {
                        if(num==4)
                        {
                            printf("IV");
                        }
                        else
                        {
                         while(num>0)
                        {
                             printf("I");
                            num=num-1;


                        }
                        }
                    }
                }

        }

    }
   }
   }
   }
   }

    return 0;
}
