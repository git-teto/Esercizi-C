#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


int main()
{
    printf("Hello world!\n");

    struct s_alunno{
        char cognome[20];
        char nome[20];
        int classe;
        char sezione;
        char sesso;
        bool ripetente;
        float mediaVoti;
    };

    struct s_docente{
        char cognome[20];
        char nome[20];
        int eta;
        char materia[20];
    };

    struct s_alunno mario,giovanni;
    strcpy(mario.cognome,"Rossi");
    strcpy(mario.nome,"Matteo");
    mario.classe=3;
    mario.sezione='C';
    mario.sesso='M';
    mario.ripetente=false;
    mario.mediaVoti=6.3;
    printf("cognome : %s\n",mario.cognome);
    printf("nome    : %s\n",mario.nome);
    printf("classe  : %d\n",mario.classe);
    printf("sezione : %c\n",mario.sezione);
    printf("sesso   : %c\n",mario.sesso);
    if(mario.ripetente){
        printf("ripetente  :   SI\n");
    }
    else{
        printf("ripetente  :   NO\n");
    }
    printf("mediaVoti   : %3.1f\n",mario.mediaVoti);
    return 0;
}
