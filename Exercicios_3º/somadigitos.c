#include <stdio.h>

unsigned long int soma (unsigned long int n, unsigned long int somador){

    if( n == 0)
    {
        return somador;
    }
    else{
        somador = somador + (n % 10);
        return soma(n / 10, somador);
    }
}

int main(){
    //variavel
    unsigned long int num;
    //entrada
    scanf("%ld",&num);
    //processamento
    if(num < 0){
       scanf ("%ld",&num);  
    }
    //saida
    printf("%ld\n",soma(num,0));
  return 0;
}