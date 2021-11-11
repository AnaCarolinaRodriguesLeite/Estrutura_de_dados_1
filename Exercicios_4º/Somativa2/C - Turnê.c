#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct celula {
    char cidade[26];
    struct celula *prox;
} celula;

celula *enfileira (celula *f, char *x){
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL) return NULL;
    else{
        novo -> prox = f -> prox;
        f -> prox = novo;
        strcpy(f -> cidade,x);
        return novo;
    }
}

int desenfileira (celula *f, char *y){
    //celula *aux = f -> prox;
    if (f->prox == f) return 0;
    else{
        strcpy(y,f -> prox -> cidade);
        f->prox = f -> prox -> prox;
        return 1;
    }   
}

int main(){
	//variaveis
	char x[28];
    //alocando p
    celula *p = malloc(sizeof(celula));
    p -> prox = p;
    //processamento e saida
    while(scanf("%s", x)!=EOF){
        p = enfileira(p, x);
    }
    for(celula *elem = p; elem->prox!=elem;){
        desenfileira(elem,x);
        printf("%s\n", x); 
		if(x[strlen(x)-1] == elem -> prox -> cidade[0]+ 32){            
            desenfileira(elem,x);
			elem = enfileira(elem,x);
        }
    }
}
