#include <stdio.h>
int main() {
    //variaveis
    int a, b, n;
    //entrada
    scanf("%d",&n);
    //processamento
    if(n<= 1000000)
    {
        for (a = 1; a <= n; a++) 
        {
            for(b = 1; b <= n - a; b++) 
            {
                printf(" ");
            }
            for (int c = 1; c <= 2*a-1; c++) 
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}