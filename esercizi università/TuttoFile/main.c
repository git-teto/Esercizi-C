#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define MAXSTR 81
#define NOMI 4
#define NUMNUMERI 4
int main()
{
    //leggo carattere per carattere un file
   /*
    FILE *puntaFile;
    char c;
    puntaFile=fopen("nomi.txt","r");
    if(puntaFile!=NULL){
        c=fgetc(puntaFile);
        while(c!=EOF){
            putchar(c);
            c=fgetc(puntaFile);
        }
        fclose(puntaFile);
    }

    //copia file in un altro file
    char word[MAX+1];
    int cc;
    FILE *in, *out;
    printf("\nNome del file sorgente: ");
    scanf("%s",word);
    if((in=fopen(word,"r"))==NULL){
        printf("%s : File non esiste",word);
        system("PAUSE");
        exit(-1);
    }
    printf("Nome del file destinazione: ");
    scanf("%s",word);
    out=fopen(word,"a");
    while((c=fgetc(in))!=EOF){
        fputc(c,out);
    }
    fclose(in);
    fclose(out);
    printf("\n\n");

    //legge dei nomi e li salva su file nomi.txt
    char buffer[MAXSTR];
    int x;
    puntaFile=fopen("nomi.txt","w");
    if(puntaFile!=NULL){
        for(x=0;x<NOMI;x++){
            printf("\nInserisci il nome  : ");
            scanf("%s",buffer);
            fputs(buffer,puntaFile);
            fputc((int)'\n',puntaFile);
        }
        fclose(puntaFile);
    }
    else{
        printf("Il file non può essere aperto!\n"),
        system("PAUSE");
    }
     */
    //legge il file nomi.txt
    FILE *pFile;
    char buffer[MAXSTR];
    pFile=fopen("nomi.txt","r");
    if(pFile!=NULL){
        while(fgets(buffer,MAXSTR,pFile)!=NULL){
            printf("%s",buffer);
        }
        fclose(pFile);
    }
    else{
        printf("Il file non puo essere letto!\n");
        system("PAUSE");
    }

    //legge dei numeri da tastiera e li salva su fule numeri2.txt
    int num,a;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d",&num);
    pFile=fopen("numeri2.txt","w");
    if(pFile){
        for(;num;num--){
            printf("inserisci un numero: ");
            scanf("%d",&a);
            fprintf(pFile,"%d\t",a);
        }
        fclose(pFile);
    }
    else{
        printf(" Errore durante l'apertura del file. ");
    }


    //lettura numeri da file
    pFile=fopen("numeri2.txt","r");
    if(pFile){
        while(!feof(pFile)){
            fscanf(pFile,"%d\t",&a);
            printf("%d\n",a);
        }
        fclose(pFile);
    }
    else{
        printf("Errore durante lettura file");
    }

    //copia un file carattere per carattere in un altro file

    FILE *in;
    FILE *out;
    char car;
    int letti,scritti;
    scritti=1;
    in=fopen("in.txt","r");
    out=fopen("out.txt","w");
    if(in==NULL||out==NULL){
        printf("Impossibile aprire un file");
    }
    else{
        letti= fscanf(in,"%c",&car);
        while(letti>0&&scritti>0){
            scritti=fprintf(out,"%c",car);
            letti= fscanf(in,"%c",&car);
        }
        if(ferror(in)==1||ferror(out)==1){
            printf("errore di i/o");
        }
        if(fclose(in)==EOF||fclose(out)==EOF){
           printf("Errore di chiusura");
           }
    }


    //scrittura di numeri su file e poi lettura da file
    int i,numm;
    pFile=fopen("numeri.dat","wb");
    if(pFile){
        for(i=0;i<NUMNUMERI;i++){
            printf("Inserisci un nuovo numero: ");
            scanf("%d",&numm);
            fwrite(&numm,sizeof(int),1,pFile);
        }
        fclose(pFile);
    }
    else{
        exit(1);
    }
    pFile=fopen("numeri.dat","rb");
    if(pFile){
        printf("\n\n Nel file ho letto i seguenti valori:\n");
        for(i=0;i<NUMNUMERI;i++){
            fread(&numm,sizeof(int),1,pFile);
            printf("%d\n",numm);
        }
        fclose(pFile);
    }
    else{
        exit(1);
    }



    return 0;
}
