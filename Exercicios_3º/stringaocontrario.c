#include <stdio.h>

void batman(char *string, int tamanho){
    if(tamanho < 0){
        printf("\n");
    }
    else{
        printf("%c", string[tamanho]);
        batman(string, --tamanho);
    }
}

// conta o tamanho da palavra, sendo string
int len(char *string, int i){
    return (string[i] == '\0' ? i: len(string, ++i));
}

int main(){
    //variavel
    char palavra[500];
    //entrada
    scanf("%s", palavra);
    //função de contar
    int tam = len(palavra, 0);
    //saida retornada pela função de recursão
    batman(palavra, tam - 1);
    printf("\n");
    return 0;
}