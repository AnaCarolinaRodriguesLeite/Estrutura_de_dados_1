#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

void divide_lista(celula *l, celula *l1, celula *l2){
    celula *le;
    celula *aux = *l;
    //aux = aux -> prox;
    for(celula *elem = le->prox; elem != NULL; elem = elem -> prox){
        if(aux -> dado % 2 == 0){
           l->prox = l1-> prox;
           l1 -> prox= l;
           l = elem;
        }
        else{
           l->prox = l2-> prox;
           l2 -> prox= l;
           l = elem;
        }
    }
    if (aux -> dado % 2 == 0){
        l->prox = l1-> prox;
        l1 -> prox= l;
    }
    else{
        l->prox = l2-> prox;
        l2 -> prox= l;
    }
}