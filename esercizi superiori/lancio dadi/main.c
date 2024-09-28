#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numerolanci,i, cose[30],contieniti[6];
   do {
   printf("inseriscimi un numero tra 10 e 30 ");
   scanf ("%d", & numerolanci);
   }
   while ((numerolanci<10) || (numerolanci >30) );
   // todo bien

printf("Arrei pulito \n");
 for (i=0;i<30;i++) // azzeramento array
 {
     cose[i]=0;
    printf(" %d", cose [i]);
 }


 for (i=0;i<6;i++) // azzeramento array
 {
     contieniti[i]=0;

 }
 srand (time(NULL)) ;

for (i=0;i<numerolanci;i++)
{
    cose[i]= (rand()%6)+1;

}
printf("\nI valori usciti sono: ");
for (i=0;i<numerolanci;i++){
printf(" %d", cose[i]);}

for(i=0;i<numerolanci;i++)

{
   switch (cose[i])
   {
   case 1: contieniti[0]++;
   break;
case 2: contieniti[1]++;
break;
case 3: contieniti[2]++;
break;
case 4: contieniti[3]++;
break;
case 5: contieniti[4]++;
break;
case 6: contieniti[5]++;
break;
}
}

printf("\nGiuseppe\n ");
for(i=0;i<6;i++)
{

   printf( " %d %d\n",i, contieniti[i] );


}







    return 0;
}
