#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *movex(char *caracter){
    if( *(caracter + 1) == '\0'){
        return caracter;
    }
    else{
        if(*caracter == 'x'){
            int tam = strlen(caracter);
            char *caracter1 = (char*)malloc(tam*(sizeof(char)));
            strcpy(caracter1, caracter+1);
            strcpy(caracter, caracter1);
            caracter = movex(caracter);
            caracter[tam - 1] = 'x';
            caracter[tam] = '\0';
            return caracter;
        }
        return movex(caracter + 1)-1;
    }
}

int main(){
    //variaveis
    char *caracter, *res;
    //aumenta o tamanho
    caracter = (char*)malloc(100*(sizeof(char)));
    //entrada
    scanf("%[^\n]%*c", caracter);
    //retorna a funcao
    res = movex(caracter);
    //saida
    printf("%s\n", res); 
    return 0;
}