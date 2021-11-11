#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int empilha (celula *p, int x){
        if(p != NULL){
        celula *aux = (struct celula*)malloc(sizeof(celula));
        if (aux == NULL)return 0;
        else{
            aux -> dado = x;
            aux -> prox = p -> prox;
            p -> prox = aux;
            return 1;
        }
    }
}