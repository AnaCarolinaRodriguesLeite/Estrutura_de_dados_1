#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void insere_inicio (celula *le, int x) {
  celula *novo = malloc (sizeof (celula));
  if (novo == NULL){ 
    printf("NULL\n");
  }
  novo->dado = x;
  novo->prox = le->prox;
  le->prox = novo;
}

void insere_antes(celula *le, int x, int y)
{
  celula *ptr = le->prox;
  celula *antptr = le;

  if (ptr == NULL)
  {
    insere_inicio(le, x);
  }

  while (ptr != NULL)
  {

    /* if( ptr->prox->dado == y) {
       insere_inicio(ptr->prox, x);
     } */

    if (ptr->dado == y)
    {
      insere_inicio(antptr, x);
      break;
    } 
     if( ptr->prox == NULL) {
       //printf ("%d -", ptr->dado);
       insere_inicio(ptr, x);
       break;
     }/*
    printf ("%d -", ptr->dado); */
    antptr = ptr;
    ptr = ptr->prox;
  }
  
}