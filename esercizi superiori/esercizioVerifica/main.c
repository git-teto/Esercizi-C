#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conta=0,conta0=0,conta1=0,conta2=0,conta3=0,conta4=0,conta5=0,conta6=0,conta7=0,conta8=0,conta9=0,num=0,gino=0;
    srand(time(NULL));
    do
    {
        num=rand()%10;
        switch(num)
        {
        case 0:
        conta0=conta0+1;
          if(conta0==4)
          {
              gino=1;
          }
        break;
        case 1:
        conta1=conta1+1;
          if(conta1==4)
          {
              gino=1;
          }
        break;
        case 2:
              conta2=conta2+1;
          if(conta2==4)
          {
              gino=1;
          }
        break;
        case 3:
            conta3=conta3+1;
          if(conta3==4)
          {
              gino=1;
          }

        break;
        case 4:
conta4=conta4+1;
          if(conta4==4)
          {
              gino=1;
          }
        break;
        case 5:
conta5=conta5+1;
          if(conta5==4)
          {
              gino=1;
          }
        break;
        case 6:
conta6=conta6+1;
          if(conta6==4)
          {
              gino=1;
          }
        break;
        case 7:
conta7=conta7+1;
          if(conta7==4)
          {
              gino=1;
          }
        break;
        case 8:
conta8=conta8+1;
          if(conta8==4)
          {
              gino=1;
          }
        break;
        case 9:
        conta9=conta9+1;
          if(conta==4)
          {
              gino=1;
          }


        break;

        }
 conta=conta+1;

    }
    while(conta<20&&gino==0);
    if(conta==20)
    {
       printf("nessun numero ha raggiunto quota 4 ");
    }
    else
    {
      printf("il numero che si e' ripetuto 4 volte e': %d\n 0-%d, 1-%d, 2-%d, 3-%d, 4-%d,\n 5-%d, 6-%d, 7-%d, 8-%d, 9-%d, conta %d ",num,conta0,conta1,conta2,conta3,conta4,conta5,conta6,conta7,conta8,conta9,conta);
    }

    return 0;
}
