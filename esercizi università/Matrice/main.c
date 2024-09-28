#include <stdio.h>
#include <stdlib.h>
#define DIMX 4
#define DIMY 2
void leggiMat(int vett[][DIMY],int dimX,int dimY ){
    int i;
    int j;
    for(j=0;j<dimY;j++){
        for(i=0;i<dimX;i++){
        printf("\ninserisci %d,%d elemento: ",i,j);
        scanf("%1d",&vett[i][j]);
       // printf("\ninserito %d elemento: ",vett[i]);
       }
    }

}
void stampaMat(int vett[][DIMY],int dimX,int dimY){
    int i;
    int j;
    printf("\nIndice Elemento");
    for(j=0;j<dimY;j++){
        for(i=0;i<dimX;i++){
        printf("\n %d,%d %d \t",i,j,vett[i][j]);
       // printf("\ninserito %d elemento: ",vett[i]);
       }
       printf("\n");
    }
}


void main()
{
    int vettore[DIMX][DIMY];
    leggiMat(vettore,DIMX,DIMY);
    stampaMat(vettore,DIMX,DIMY);
    return 0;
}

