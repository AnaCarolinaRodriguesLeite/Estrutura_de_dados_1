#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
}celula;

void Imprime(){
  celula *ptr;
  if (dado == NULL)
  {
    printf("--- fim da lista ---\n\n");
    return NULL;
  }
  // Caso a lista nao esteja vazia
  celula *ptr = le -> prox;
  while (ptr !=NULL) {
     printf("Info = %d\n",ptr->info);
     ptr = ptr->prox;
  }
  printf("--- fim da lista ---\n\n");
}




void imprime1 (celula *le){
    celula *num;
    for(num = le; num != NULL; num = num -> prox){
        printf("%d",num -> dado);
        printf("->");
    }
    printf("NULL\n");
}


void imprime (celula *le){
    celula *num = le;
    while(num != NULL){
        printf("%d",num -> dado);
        printf("->");
        num = num -> prox;
    }
    printf("NULL");
}

int main(){
    celula *le;
    le = NULL;
    imprime(le);
    //imprime1(le);
    //imprime_rec(le);
    return 0;
}