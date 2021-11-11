#include <stdio.h>
#define tam 4
int main (){
	//variaveis
	int n, maior;
	//entrada e processamento
	scanf("%d",&maior);
	while(scanf("%d", &n) != EOF){
			if (n>= maior){
				maior = n;
			}
	}
	//saida
	printf("%d\n", maior);
	return 0;
}