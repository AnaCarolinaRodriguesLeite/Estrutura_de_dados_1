#include<stdio.h>
 
int main(){
    //variaveis
    int num, cont = 0, i;
    //entrada
    scanf("%d",&num);
    //processamento e saida
    if(num < 100){
        for(i = 1; i <= num; i++)
        { 
            cont = 1; //inicializando contador
            while(cont <= i)
            {
                printf("%2.2d ",i);
                cont++;
            }
            printf("\n"); //Conta na linha de baixo
        }
        for(i = 1; i <= num; i++)
        { 
            cont = 1; //inicializando contador
            while(cont <= i)
            {
                printf("%2.2d ",cont);
                cont++;
            }
            printf("\n"); //Conta na linha de baixo
        }
    }
    return 0;
}