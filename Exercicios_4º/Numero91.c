#include <stdio.h>

int f91(int N){
    if(N >= 101){
        return N - 10;
    }
    else{
        return f91(f91(N + 11));
    } 
}

int main(){
    //variaveis
    int N;
    //entrada
    do{
        scanf("%d",&N);
        if(N != 0){
            printf("f91(%d) = %d\n",N,f91(N));
        }
    } while ( N != 0);
    
}