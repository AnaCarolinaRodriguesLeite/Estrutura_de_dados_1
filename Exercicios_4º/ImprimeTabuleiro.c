#include <stdio.h>

int main(){
    //variaveis
    int i, j, L, M;
    //entrada
    scanf("%d %d", &L, &M);
    //processamento
    if(L <= 100 && M <= 100){
        for(i = 0; i < L; i++){//linha
            for(j = 0; j < M; j++){//coluna
                printf("[");
                printf("%03d,%03d",i,j);
                printf("]");
            }
            printf("\n");
        }
    }
}