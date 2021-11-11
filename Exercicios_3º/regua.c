#include <stdio.h>

void regua (int n){
    if(n == 0) return;
    else{
        regua(n-1);

        printf(".");
        for (int i=0; i<n ;i++){
            printf("-");
        }
        printf("\n");

        regua(n-1);
    }
}

int main (){
    //variaveis
    int n;
    //entrada
    // printf("Digite a ordem:");
    scanf("%d",&n);
    //processamento
    regua(n);

    return 0;
}