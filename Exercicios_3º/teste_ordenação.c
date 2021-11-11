#include <stdlib.h>
#include <stdio.h>

void imprimevetor(int * numeros, int qtd){
      for (int i = 0; i < qtd; i++){
           printf("%d", numeros[i]);}
}

//função que faz a ordenação
//pela troca de lugar de cada um
void ordenavetor(int * vetor , int tam){
    int aux = 0;
    for(int i = 0; i < EOF; i++){
        for(int j = 0; j < EOF; j++){            
            if(vetor[j]>vetor[i]){
                //troca
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j]= aux;
            }
        }
    }
}

main() {
    //variaveis
    int i, qtd, *numeros;
    //entrada
    scanf("%d", &qtd);
    //processamento de reorganizar
    numeros = (int *)malloc(qtd * sizeof(int));
    // leitura um por um
    for (int i = 0; i < qtd; i++){
        scanf("%d", &numeros[i]);
    }
    ordenavetor(numeros, qtd);
    //saida
    imprimevetor(numeros, qtd);
    printf("\n");
}