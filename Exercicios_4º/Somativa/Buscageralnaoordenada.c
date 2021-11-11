#include <stdio.h>
#include <stdlib.h>

typedef struct somativa{
    int d; //dado
    int p; //posicao
}somativa;

void ordenacao(somativa *vetor, int n) {
    for(int i = 0; i < n-1; i++){
        int min=i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j].d < vetor[min].d){
                min=j;
            }
        }
            somativa aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
    }
}

int busca(somativa *vetor, int tam, int d){
    int dir, esq, m, achado = 0;
        dir = tam - 1;
        esq = 0;
    while (esq <= dir && !achado){
        m = (dir + esq) / 2;
        if (vetor[m].d == d)
            achado = 1;
        else if (d < vetor[m].d)
            dir = m - 1;
        else if (d > vetor[m].d)
            esq = m + 1;
    }
    if (achado){
        return vetor[m].p;
    }
    else
        return -1;
}

int main(){
    int n,m;
    //entrada
    scanf("%d %d",&n,&m);
    //alocando espaco
    somativa *N = malloc(n * sizeof(somativa));
    int M;
    //entrada para os vetores
    for (int i = 0; i < n; i++){
        scanf("%d",&N[i].d);
        N[i].p = i;   
    }
    //ordenacao do vetor n
    ordenacao(N,n);
    //saida e processamento
    for (int i = 0; i < m; i++){
        scanf("%d",&M);
        printf("%d\n",busca(N,n,M));   
    }

    return 0;
}