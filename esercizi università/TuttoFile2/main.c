#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//visualizza il contenuto di un file
void visualizza(FILE *file){
    int ch;
    fseek(file,0L,0);
    while((ch=getc(file))!=EOF){
           // printf("\n2 ciclo\n");
        printf("%c",ch);
    }
}
//converte in maiuscolo
int main()
{
    int ch;
    FILE *file;
    file=fopen("poesia.txt","r+");
    visualizza(file);
   // printf("\n 1 fuori ciclo\n");
    while((ch=getc(file))!=EOF){
      // printf("\n2 ciclo\n");
        if(islower(ch)){
          //  printf("\nlower\n");
            fseek(file,ftell(file)-1,SEEK_SET);
            putc(toupper(ch),file);
            fseek(file,0,SEEK_CUR);
        }
    }
    visualizza(file);
    fclose(file);

    //accesso casuale a file formattato

    int errore,numeriLetti,x,numeri[1];
    long posiz;
    FILE *pFile;
    pFile=fopen("numeri.dat","rb");
    printf("\nChe posizione vuoi leggere direttamente!");
    scanf("%d",&posiz);
    if(pFile){
        errore=fseek(pFile,posiz*sizeof(int),SEEK_SET);
        if(errore){
            printf("errore, valore non trovato");
        }
        else{
            numeriLetti=fread(numeri,sizeof(int),1,pFile);
            printf("\nIl numero in posizione %d e' %d",posiz,numeri[0]);
        }
        fclose(pFile);
    }
    else{
        printf("errore durante l'apertura del file.");
    }


    return 0;
}
