#include <stdlib.h>
#include <stdio.h>

void imprimevetor(int *numeros, int qtd){
    for (int i = 0; i < qtd; i++){
        printf(" %d", numeros[i]);
    }
}
void selecao(int *vetor, int n){ //n é tamanho do vetor
    int i, j, min, aux; //variaveis para ordena conforme a seleção
   
    for (i = 0; (i <  (n-1)) ; i++) {
        min = i;
        for (j = (i + 1); j < n; j++) {
            if (vetor[j] < vetor[min])
                min = j;
        }
        if (vetor[i] != vetor[min]){
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
}

main(){
    //variaveis
    int  qtd, *numeros;
    //entrada
    scanf("%d", &qtd);
    //processamento de reorganizar
    numeros = (int *)malloc(qtd * sizeof(int));
    // leitura um por um
    for (int i = 0; i < qtd; i++){
        scanf("%d", &numeros[i]);
    }
    //imprimevetor(numeros, qtd);
    //faz a organização de modo a seleção
    selecao(numeros, qtd);
    //vetor ordenado
    //saida
    imprimevetor(numeros, qtd);
}