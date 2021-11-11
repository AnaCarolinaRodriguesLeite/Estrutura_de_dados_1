#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int dado;
	struct no *esq, *dir;
}no;

void preordem(no *raiz){
    if(raiz != NULL){
    	printf("%d ",raiz->dado); /* mostra raiz */
        preordem(raiz->esq); /* mostra sae */
        preordem(raiz->dir); /* mostra sad */
    }
}
 
void emordem(no *raiz){
    if(raiz != NULL) {
        emordem(raiz->esq);
        printf("%d ",raiz->dado);
        emordem(raiz->dir);
    }
}
 
void posordem(no *raiz){
    if(raiz != NULL){
        posordem(raiz->esq); /* mostra sae */
        posordem(raiz->dir); /* mostra sad */
        printf("%d ",raiz->dado); /* mostra raiz */
    }
}

no* inserir(no* raiz, int dado){
    if(!raiz){
        no *raiz = malloc(sizeof(no));
        raiz -> dado = dado;
        raiz -> esq = raiz -> dir = NULL;

        return raiz;
    }
    else if(dado > raiz -> dado){
        raiz -> dir = inserir(raiz -> dir, dado);
    }
    else
        raiz -> esq = inserir(raiz -> esq, dado);

    return raiz;
}

int main(){
	//variaveis
    int num;
    no *raiz = NULL;
	
	//entrada	
    while(scanf("%d",&num) != EOF){
        raiz = inserir(raiz,num);
    }
    
    //saida
	preordem(raiz);
    printf(".\n");
    emordem(raiz);
    printf(".\n");
    posordem(raiz);
    printf(".\n");

    return 0;
}
