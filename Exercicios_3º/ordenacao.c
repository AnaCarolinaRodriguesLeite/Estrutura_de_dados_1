#include <stdlib.h>
#include <stdio.h>

//  void ordenacaoBolha(int vetor[], int TAM){
//   printf("teste entrou na funcao");
//   printf("\n %d - %d teste boble", TAM, vetor[0]);
  
//   for (int k = 0; k < TAM ; k++){
//    printf("%d", vetor[k]);
//   }
//   printf("imprimindo antes de ordenar");

//     for (int i = 0; i < TAM; i++){
//       for (int j = 0; j < TAM - i - 1; j++){
//         if (vetor[j] > vetor[j + 1]){
//           // troca temp e vetor[i]
//           int temp = vetor[j];
//           vetor[j] = vetor[j + 1];
//           vetor[j + 1] = temp;
//         }
//       }
//     }
//      printf("teste entrou na funcao");
//   }


void ordenacaoBolha(int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
     //   printf("\n[%d] ", k);

        for (j = 0; j < n - k; j++) {
           // printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
  //variaveis
  int qtd = 0, numeros[1000];
  //entrada
  while( scanf("%d",&numeros[qtd]) != EOF){
   // scanf("%d",&numeros[i]);
   printf("\n %d - %d teste while", qtd, numeros[qtd]);
    qtd++;
  }
  printf(" fora do loppin teste while desordenado\n");
  for (int i = 0; i < numeros[qtd] ; i++){
   printf("\n%d", numeros[i]);
  }
  
  // for (int i = 0; i != '\n'; i++){
  //   scanf("%d", &numeros[i]);
  //   qtd++;
  // }
//int *ptr = malloc(x * sizeof(int));
  ordenacaoBolha(numeros,qtd);
  printf(" \n ordenado teste");

  printf(" depois da ordenacao desordenado");
  //ordenado
for (int i = 0; i < qtd ; i++){
  printf("%d ", numeros[i]);
  }
}