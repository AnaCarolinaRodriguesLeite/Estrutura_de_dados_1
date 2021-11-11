#include <stdio.h>
int main(){
    //variaveis
    int num, soma, a, i, teste=0;
    //entrada e processamento
    scanf("%d",&num);
    while (num != 0)
    {
        soma = 0;
        for (i = 0; i < num; i++)
        {
            scanf("%d",&a);
            soma = soma + a;
        }
        //saida
        printf("Teste %d\n %d\n",teste,soma);
        teste++;
        scanf("%d",&num);
    }
    return 0;
}