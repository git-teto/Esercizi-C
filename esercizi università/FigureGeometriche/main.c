#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE *puntaFile;
    puntaFile = fopen("prova","w");
    if(puntaFile==NULL){
        printf("impossibile aprire");
        exit(1);
    }
    fclose(*puntaFile);*/

    FILE *puntaFile;
    char c;
    puntaFile=fopen("nomi.txt","r");
    if(puntaFile!=NULL){
        c= fgetc(puntaFile);
        while(c!=EOF){
            putchar(c);
            c=fgetc(puntaFile);
        }
        fclose(puntaFile);
    }
    else{
        printf("il file non puo essere aperto!");
    }
    return 0;
}
