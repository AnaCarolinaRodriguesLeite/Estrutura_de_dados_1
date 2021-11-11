#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

celula *reverse(celula *l){
  celula *revHead;
  if(l == NULL || l -> prox == NULL){
    return l;
  }

  revHead = reverse(l->prox);
  l -> prox -> prox = l;
  l -> prox = NULL; 

  return revHead;
}
void divide_lista(celula *l, celula *l1, celula *l2){
  l->prox = reverse(l->prox);
  l = l -> prox;
  for(celula *elem = l -> prox; elem != NULL; elem = elem -> prox){
    if(l -> dado % 2 == 0){
      l -> prox = l2-> prox;
      l2 -> prox= l;
      l = elem;
    }
    else{
      l -> prox = l1 -> prox;
      l1 -> prox= l;
      l = elem;
    }
  }
  if(l -> dado % 2 == 0){
    l -> prox = l2 -> prox;
    l2 -> prox= l;
  }
  else{
    l -> prox = l1 -> prox;
    l1 -> prox= l;
  }
}