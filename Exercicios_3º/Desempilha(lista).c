#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desempilha (celula *p, int *y){
    if (p != NULL){
        if (p -> prox == NULL)
            return 0;
        else{
            *y = p -> prox -> dado;// nova variavel com novo dado
            celula *aux = p -> dado; //elemento velho que recebe a cabeca com o dado
            p -> prox = p -> prox -> prox; //pula para o proximos dados, ate apagar e chegar no  y
            free(aux);
            return 1;
        }
    }
}