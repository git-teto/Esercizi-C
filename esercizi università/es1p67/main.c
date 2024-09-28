#include <stdio.h>
#include <stdlib.h>

void visualizza(FILE *file){
    int ch;
    fseek(file,0L,0);
    while((ch=getc(file))!=EOF){
        printf("%c",ch);
    }
}

int main()
{
    FILE *pFile, *pDivisi;
    int a;
    pFile=fopen("interi.txt","r+");
    pDivisi=fopen("divisi.txt","w+");
    visualizza(pFile);
    fseek(pFile,0L,0);
    if(pFile){
        while(!feof(pFile)){
            fscanf(pFile,"%d ",&a);
            if(a%2==0){
                printf("\n%d pari",a);
                a=a/2;
                //fseek(pFile,ftell(fil))
                fprintf(pDivisi,"%d ",a);
            }
            else{
               printf("\n%d dispari",a);
               fprintf(pDivisi,"%d ",a);
            }

        }
    }
    else{
        printf("Errore durante kettura file!");
    }
    fclose(pDivisi);
    printf("\n");
    //fseek(pDivisi,0L,0);
    pDivisi=fopen("divisi.txt","r");
    visualizza(pDivisi);
     //visualizza(pFile);
    fclose(pFile);
    fclose(pDivisi);



    return 0;
}
