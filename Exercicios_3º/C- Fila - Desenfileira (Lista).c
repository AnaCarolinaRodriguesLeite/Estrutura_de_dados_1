#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desenfileira (celula *f, int *y){
    celula *aux = f -> prox;
    if (f->prox == f) return 0;
    else{
        *y = aux->dado;
        f->prox = aux-> prox;
        return 1;
    }   
}