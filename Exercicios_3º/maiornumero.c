#include <stdio.h>
int main (){
	//variaveis
	int n = 0, maior = -99999999;
	int cont = 0;
	//entrada e processamento
	//scanf("%d", &n);
	while(cont < 4){
		scanf("%d", &n);	
		if (n > maior){
			maior = n;
		}
		cont++;
	}
	//saida
	printf("%d\n", maior);
	return 0;
}