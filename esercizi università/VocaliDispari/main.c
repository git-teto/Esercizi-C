#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int VocaliDispari(char str[]){
    int conta=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
           // printf("\nvocale");
            conta++;
        }
    }
    printf("conta vocali %d ",conta);
    return conta%2;
}


int main()
{
    printf("Hello world!\n");
   char parola[30];
   scanf("%s",&parola);
    int result=VocaliDispari(parola);
    printf("\nresult: %d ",result);
    return 0;
}
