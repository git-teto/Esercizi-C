#include <stdio.h>
#include <stdlib.h>
#define DIM 5

void leggiVettore(int vett[],int dim ){
    int i;

    for(i=0;i<dim;i++){
        printf("\ninserisci %d elemento: ",i);
        scanf("%1d",&vett[i]);
       // printf("\ninserito %d elemento: ",vett[i]);
    }
}
void stampaVettore(int vett[],int dim){
    int i;
    printf("\nIndice Elemento");
    for(i=0;i<dim;i++){
        printf("\n %d  %d \t",i,vett[i]);
    }
}


void main()
{
    int vettore[DIM];
    leggiVettore(vettore,DIM);
    stampaVettore(vettore,DIM);
    return 0;
}
