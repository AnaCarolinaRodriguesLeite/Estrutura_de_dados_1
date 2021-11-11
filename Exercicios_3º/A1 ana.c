#include <stdlib.h>
#include <stdio.h>

typedef struct celula{
  int dado;
  struct celula *prox;
} celula;

celula *cria_lista()
{
  celula *p = malloc(sizeof(celula));
    if (p == NULL){
        exit(1);
        p->prox = NULL;
    }
    return p;
}

void insere_inicio(celula *le, int x)
{

  celula *novo = malloc(sizeof(celula));
  if (novo == NULL)
  {
    printf("Sair"),
        exit(1);
  };
  novo->dado = x;

  novo->prox = le->prox;

  le->prox = novo;
}

int lista_vazia(celula *le)
{
  return le->prox == NULL;
} 
int remove_inicio(celula *le)
{
  celula *lixo = le->prox;
  int dado = lixo->dado;
  le->prox = lixo->prox;
  free(lixo);
  return dado;
}

void destroi_lista(celula *le)
{
  while (le->prox != NULL)
    remove_inicio(le);
}
void imprime (celula *le) {
  celula *ptr = le->prox;
  //printf ("L -> ");
  while (ptr != NULL) {
    printf ("%d", ptr->dado);
    printf (" -> ");
    ptr = ptr->prox;
  }
  printf ("NULL\n");
  
}
void imprime_rec (celula *le){
  celula *ptr = le->prox;
     
  if (ptr != NULL){
    printf ("%d", ptr->dado);
    printf (" -> ");
    imprime_rec(ptr); 
  }
  else{
    printf ("NULL\n");
  } 
}


int main(){
  int op;
  int dado;

  celula *p = cria_lista();
  celula *ptr = cria_lista();
  printf("O que voce deseja fazer? 
  (I)nserir, (R)emover, im(P)rimir, 
  imprimeRe(C)ursiva , 
  (A)nte, (S)air");
  scanf("%d", &op);
  
  
  while (op != 6)
  { 
    switch (op){
    case 1:
      printf("Digite o dado: ");
      scanf("%d", &dado);
      insere_inicio(p, dado);
      break;
     case 2:
      if (!lista_vazia(p)){
        printf("%d", remove_inicio(p));
        printf("\n");
      }
      else
        printf("A lista esta vazia.\n");
      break;
    case 3:
      imprime(p);
      break;
    case 4:
      imprime_rec(p);
      break;
    case 5:
      default:
        printf("Escolha uma opcao valida.\n");
    }
    printf("O que voce deseja fazer? (I)nserir, (R)emover, im(P)rimir, imprimeRe(C)ursiva , (A)nte, (S)air    ");
    scanf("%d", &op);
  }
  destroi_lista(p);
  free(p);
  return 0;
}