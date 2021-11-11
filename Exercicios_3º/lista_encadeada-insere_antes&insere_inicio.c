#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
}celula;

void insere_inicio (celula *le, int x){
    celula *novo = malloc(sizeof(celula));
    celula *num;
    num = le -> prox;
    if(novo == NULL)return NULL;
    novo -> dado = x;
    novo -> prox = num -> prox;
    num -> prox = novo;
}

// void insere_antes(celula *le, int x,int y){
//     celula *ultimo = le -> prox;
//     celula *novo = malloc(sizeof(celula));

//     novo -> dado = y;
//     novo -> prox = le -> prox;
//     le -> prox = novo;
//     novo -> dado = x;
    
//     if(le->ultimo != le->prox){
//         le->ultimo = x; 
//     }
// }

void insere_antes(celula *le, int x, int y){
    celula *ptr = malloc (sizeof (celula));
    ptr -> dado = x;
    celula *ptr1 = le -> prox; //previous
    celula *ptr2 = le -> prox -> prox;//current
    int flagOne=0;
    
    if (ptr1 == NULL || ptr1->dado==y){
        insere_inicio(le, x);
        return
    }
    else if(ptr2->dado==y){
        ptr1 -> prox = ptr;
        ptr -> prox = ptr2;
    }
    else if(ptr2==NULL){
        insere_final(le, x);
    }
    else{
        ptr1 = ptr1 -> prox;
        ptr2 = ptr2 -> prox;

        while(ptr2!=NULL){
            if(ptr2->dado == y){
                ptr1 -> prox = ptr;
                ptr -> prox = ptr2;
                flagOne=1;
            }
            ptr1 = ptr1 -> prox;
            ptr2 = ptr2 -> prox;
        }
        if(flagOne==0){
            insere_final(le, x);
            return;
        }
    }
}