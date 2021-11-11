#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
}fila;

fila *f;

int desenfileira (fila *f, int *y){
    if(f -> p == f -> u)
        return 1;
    *y = f -> dados[f -> p];
    f -> p = (f -> p + 1) % f -> N;
    return 0;
}



// int enfileira (fila *f, int x){
//     if(f -> u < f -> p){
//         if(f -> u <= f -> N - f -> p){
//             for(int i = 0; i < f -> u; i++){
//             f -> dados[f -> N + i] = f -> dados[i];
//             }
//             f -> u = f -> N + f -> u;
//         }else{
//             ...
//         }else{
//             f -> N *= 2;
//             f -> dados = realloc (f -> dados, f -> N * sizeof(int));
//             if(f == NULL || f -> dados == NULL)
//             return 0;
//         }
//         if(f -> p == 0 && f -> u == f -> N - 1 || f -> p == f -> u + 1){
//             if( f -> u <= f -> N - f -> p){
//                 f -> dados = realloc(f -> dados, 2* f -> N *sizeof(int));
//                 return 0;
//             }
//             if(f -> u > f -> N - f -> p){
//                 int C = f -> N - f -> p;
//                 int A = f -> N*2;
//                 for (int i = 0; i <= C; i++){
//                     f -> dados [ A - C + i ] = f -> dados[ f->N - C + i ];
//                 }
//                 f -> p = A - C;
//             }   
//         }
//         f -> dados [f -> u] = x;
//         f -> u = (f -> u + 1) % f -> N;
//     return 1;
// }