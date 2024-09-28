#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   /* printf("Hello world!\n");
    char stringa[]="mariooo";
    printf("%s",stringa);
    char stringa2[20];

    printf("\nInserisci stringa ");
    scanf("%s",&stringa2);
    printf("\n%s",stringa2);
    printf(" Lunghezza: %d",strlen(stringa2));
    printf("\n");
    for(int i=0;i<strlen(stringa2);i++){
        if(i%2==0){
            stringa2[i]='-';
        }
    }
        printf("\n dopo %s",stringa2);*/

    char c;
    printf("\nInserisci carattere ");
    scanf("%c",&c);
    if(isdigit(c)){
        printf("\n numero ");
    }
    else{
        printf("\n no numero ");
    }



    return 0;
}
