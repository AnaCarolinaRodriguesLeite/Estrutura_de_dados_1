// #include <stdio.h>
// #include <string.h>

// long int fibonacci(int n){
//     int mem[n+2];
//     mem[1] = 1;
//     mem[2] = 1;
//     for(int i = 3; i <= n; i++){
//         mem[i] = mem[i-1] + mem[i-2];
//     }
//     return mem[n];
// }

// int main(){
//     //variaveis
//     int n;
//     //entrada
//     scanf("%d",&n);
//     //saida
//     printf("%d",fibonacci(n));
//     return 0;
// }

#include <stdio.h>
#include <string.h>//Função memset

#define FIB_NAO_CALCULADO -1

// int fib_pd(int n, int mem[]){
//     if (mem[n] == FIB_NAO_CALCULADO){//Só realiza os cálculos se eles ainda não tiverem sido feitos.
//         mem[n] = fib_pd(n-1,mem) + fib_pd(n-2,mem);
//     }
//     return mem[n];
// }

long int fibonacci(int n){ //"Empacota" fib_pd, eliminando a necessidade da declaração/inicialização do array na main().
    int mem[80];//Array usado para memorizar as respostas
    memset(mem, FIB_NAO_CALCULADO, sizeof(int) * 80);//Marca todos os valores do vetor como não calculados
    mem[0] = 0; //Guarda os valores dos casos base (já conhecidos) no vetor de memória
    mem[1] = 1;

    if (mem[n] == -1){//Só realiza os cálculos se eles ainda não tiverem sido feitos.
        mem[n] = fibonacci(mem[n-1]) + fibonacci(mem[n-2]);
        return mem[n];
    }

    return fibonacci(mem[n]);

}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
    return 0;
}