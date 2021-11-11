#include <stdio.h>
#include <stdlib.h>

int buscabinaria(int *v, int n,int x){
    int com = -1;
    int fim = n;

    while(com < fim - 1){  /* Condição de parada */
        int i = (com + fim)/ 2;  /* Calcula o meio do sub-vetor */

        if(v[i] == x) return i;  /* Item encontrado */

        if(v[i] < x) com = i;  /* Item está no sub-vetor à direita */

        else fim = i;  /* vector[i] > item. Item está no sub-vetor à esquerda */
    }
    return fim;
}

int main(){
    int n,m,aux;
    //entrada
    scanf("%d %d",&n,&m);

    int *N = malloc(n * sizeof(int));
    int *M = malloc(m * sizeof(int));

    for (int i = 0; i < n; i++){
        scanf("%d",&N[i]);    
    }
    for (int k = 0; k < m; k++){
        scanf("%d",&M[k]);   
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < i; j++){
            if(N[i] > N[j]){
                aux = N[i];
                N[i] = N[j];
                N[j] = aux;
            }
        }
    }

    //processamento e saida
    for (int i = 0; i < m; i++){
        printf("%d\n",buscabinaria(N,n,M[i]));   
    }

    return 0;
}