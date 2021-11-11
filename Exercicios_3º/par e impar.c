#include <stdio.h>
#include <string.h>
int main(){
   //variaveis
   int N, valor1, valor2, teste = 0, i;
   char fulano[14], ciclano[14];
   //processamento, entrada e saida
   scanf("%d", &N); //numero de partidas
   while (N != 0){
      scanf("%s", &fulano); //nome do jogador1
      scanf("%s", &ciclano); //nome do jogador2
      for (i = 0; i < N; i++){ //começa o jogo
         scanf("%d %d", &valor1, &valor2);
         if(i==0){
         teste++;
         printf("Teste %d\n", teste);
         }
         if ((valor1 + valor2) % 2 == 0){ //verficação se o nº for par ou não
            printf("%s\n", fulano);
         }
         else{
            printf("%s\n", ciclano);
         }
         printf("\n");
      }
      scanf("%d", &N);
   }
   return 0;
}