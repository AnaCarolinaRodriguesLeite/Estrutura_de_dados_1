#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    return 0;
}

int desempilha (celula *p, char *y){
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
    return 0;
}

int balance(char *caractere, celula *v1, celula *v2){
    char y;
    for(int i = 0; i < strlen(caractere); i++){
        switch(caractere[i]){
        case '(':
            empilha(v1, caractere[i]);
            break;

        case '{':
            empilha(v1, caractere[i]);
            break;

        case '[':
            empilha(v1, caractere[i]);
            break;

        case ')':
            if(desempilha(v1,&y) == 1){
                if(y != '('){
                    return 0;
                }
                break;
            }
            else{
                return 0;
            }
        case ']':
            if(desempilha(v1,&y) == 1){
                if(y != '['){
                    return 0;
                }
                break;
            }
            else{
                return 0;
            }
        case '}':
            if(desempilha(v1,&y) == 1){
                if(y != '{'){
                    return 0;
                }
                break;
            }
            else{
                return 0;
            }
        default:
            empilha(v2,caractere[i]);
            break;
        }
    }
    if (v1->prox == NULL && v2->prox != NULL){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    char eq[501];

    celula *v1 = malloc(sizeof(celula));
    celula *v2 = malloc(sizeof(celula));

    v1->prox =  NULL;
    v2->prox = NULL;

    gets(eq);

    int aux = balance(eq, v1, v2);

    if(aux == 1){
        printf("sim\n");
    }
    else{
        printf("nao\n");
    }
    return 0;
}