#include <stdio.h>

float potenciacao (float base, float expoente){

    if(expoente == 0) return 1;

    if(expoente < 0)
    {
        return ((1 / base) * potenciacao (base,(expoente + 1)));
    }

    if(expoente > 0)
    {
        return base * potenciacao (base,(expoente - 1));  
    }

}

int main()
{
    int n = 0,z = 0;
    //printf("Digite um inteiro positivo: ");
    scanf("%d %d", &n, &z);
    if (n == 0 && z <= 0)
    {
        printf("indefinido");
    }
    else{
        printf("%f\n",potenciacao(n , z));
    }
    
    return 0;
}