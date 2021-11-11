#include <stdio.h>

int main(){
    //variaveis
    char texto[1000];
    char letra;
    int contaletras = 1;
    double porcentagem, cont1=0, cont2=1;
    //entrada
    scanf("%c\n",&letra);
    scanf("%999[^\n]",texto);
    //processamento
    for (int i = 0; texto[i] != '\0' && contaletras == 1; i++){
        if(texto[i] == letra){
            cont1++;
            contaletras = 0;
        }
        if(texto[i] == 32){
            cont2++;
            contaletras = 1;
        }
    }
    porcentagem = (cont1/cont2)*100;
    //saida
    printf("%0.1lf",porcentagem);
    return 0;
}