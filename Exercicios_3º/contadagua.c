#include <stdio.h>
int main (){
	//variaveis
	int consumo, valor = 0;
	//entrada
    scanf("%d",&consumo);
    //processamento
	if(consumo <= 10)
    {
        valor = 7; //valor da franquia do intervalo ate 10
    }
    if(consumo >= 11 && consumo <= 30)
    {
        valor = (((consumo - 10) * 1) + 7); //diferença do intervalo de 11 ate 30
    }
    if(consumo >= 31 && consumo <= 100)
    {
        valor = (((consumo - 30)* 2) + (20 + 7)); //diferença do intervalo de 31 ate 100
    }
    if(consumo >= 101)
    {
        valor = (((consumo - 100) * 5) + (140 + 20 + 7));
        //valor = (((120 - 101) + 7)* 5) - 3; //diferença do intervalo de 101 ate 120
    }
	//saida
	printf("%d\n",valor);
	return 0;
}