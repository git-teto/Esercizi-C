#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j;
 int array[100];
 for (i=0;i<100;i++)
 array[i]=1;
 for (i=2;i<=100;i++)
 {
 if(array[i]==1) {
 for (j=2;j<(100/i);j++)
 array[i*j]=0;
 }
 }
 printf("\nnumeri primi <100");
 for (i=1;i<100;i++)
 {
 if(array[i]==1) printf("\t%d", i);
 }
    return 0;
}
