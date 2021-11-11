#include <stdio.h>

int main(){
	//variaveis
	char texto[1000];
	char letra;
	int i=0;
	float porcentagem, cont1=0, cont2=1;
	//entrada
	scanf(" %c", &letra);
	scanf("%[^\n]",texto);
	//processamento
	while(texto[i] != 0){
	printf("%0.1f",porcentagem);
		if(texto[i] == letra){
			cont1++;
		}
		if(texto[i] == 32){
			cont2++;
		}
		i++;
	}
	porcentagem = (cont1/cont2)*100;
	//saida
}
