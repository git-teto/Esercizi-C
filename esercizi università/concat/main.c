#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void concat(char s1[],char s2[],char s3[]){
    strcat(s1,s2);
    strcat(s3,s1);
    printf("\n%s",s3);
}

int main()
{
    char parola1[25];
    char parola2[25];
    printf("inserisci due parola1: ");
    scanf("%s",&parola1);
    printf("\ninserisci  parola2: ");
    scanf("%s",&parola2);
    char parola3[50];
    concat(parola1,parola2,parola3);
    return 0;
}
