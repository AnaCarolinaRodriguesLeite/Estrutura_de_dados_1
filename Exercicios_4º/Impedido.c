#include <stdio.h>

int main(){
    //variaveis
    int L,R,D;
    //entrada
    scanf("%d %d %d",&L ,&R ,&D);
    //processamento
    if((R > 50) & (L < R) & (R > D)){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}