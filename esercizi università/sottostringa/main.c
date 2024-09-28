#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void substr(char* dest,char* source, int inizio, int quanti){
   for(int i=0;i<strlen(dest);i++){
    dest[i]=' ';
   }
    int j=0;
    printf("stringa passata: %s inizio: %d quanti %d \n",source,inizio,quanti);
    for(int i=inizio;i<quanti;i++){
        printf("%c ",source[i]);
        dest[j]=source[i];
        j=j+1;

    }
    printf("\n la stringa tagliata: %s",dest);

}

int main()
{
   // printf("Hello world!\n");
   char stringa[40];
   char fine[20];
   int ini=3,quanti;

   printf("Inserisci la stringa: ");
   scanf("%s",&stringa);
   quanti=strlen(stringa);
   substr(fine,stringa,ini,quanti);
    return 0;
}
