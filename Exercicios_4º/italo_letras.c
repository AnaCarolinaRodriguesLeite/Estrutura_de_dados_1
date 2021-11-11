#include <stdio.h>

int main (){
    char letra[1000], charPesquisa;
    double contadorPalavraT=1, contadorLetra=0, porcentagem;
    int contLetra = 1;
    scanf("%c\n", &charPesquisa);
    scanf("%999[^\n]",letra);

    for(int i=0; letra[i] != '\0'; i++){
            if(contLetra == 1 && letra[i] == charPesquisa){
                contadorLetra++;
                contLetra = 0;
            }
        if(letra[i] == ' '){
            contadorPalavraT++;
            contLetra = 1;
        }
    }

    porcentagem = ((contadorLetra/contadorPalavraT)*100);
    printf("%.1lf", porcentagem);
    //printf("%lf",contadorLetra);
}
