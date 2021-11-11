#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
    int *dados;
    int N, p, u;//p inicio e u fim
}fila;

void organiza(fila *f){
    if( f -> u <= f -> N - f -> p){ //caso 2
        for(int i = 0; i <= f -> u; i++){
            f -> dados[f -> N + i] = f -> dados[i];
        }
        f -> u = f -> N + f -> u;
    }
    else{ //caso 3
        int A = f -> N*2 - 1;
        for (int i = f -> N - 1; i >= f -> u; i--){
            f -> dados[A] = f -> dados[i];
            A--;
        }
        f -> p = f -> N + f -> p;
    }
}


int enfileira (fila *f, int x){
    if(f == NULL) return 0;

    if((f -> p == 0 && f -> u == f -> N-1) || (f -> u == f -> p - 1)){
    //if ((f -> u + 1) % f -> N == f -> p - 1){
        f -> dados = realloc(f -> dados, 2*f -> N *sizeof(int));
        
        if(!(f -> p < f -> u)){
            organiza(f);
        }
        
        f -> N = f -> N*2;
        
        if(f -> dados == NULL) return 0;
    }

    f -> dados[f -> u] = x;
    f -> u = (f -> u + 1) % f -> N;
    
    return 1;
}