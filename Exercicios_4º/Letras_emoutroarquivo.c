// #include <stdio.h>
// //#include <string.h>
// int main(){
//     //variaveis
//     char texto[1000];
//     char letra;
//     float porc, conta=1, cont=0;
//     int tam;
//     //entrada
//     scanf("%c", &letra);
//     scanf("%999[^\n]",texto);
//     //tam = strlen(texto);
//     //processamento
//     for (int k = 0; k < tam; k++){
//         if(texto[k] == letra){
//             cont++;
//         }
//         if(texto[k] == 32){
//             conta++;
//         }
//     }
//     conta += 1;
//     porc = (cont/conta);
//     //saida
//     printf("%0.1f",porc);
//     //printf("%f",conta);

#include <stdio.h>

int main(){
	//variaveis
	char texto[1000];
	char letra;
	int i=0, contaletras = 1;
	double porcentagem, cont1=0, cont2=1;
	//entrada
	scanf("%c\n",&letra);
	scanf("%999[^\n]",texto);
	//processamento
	while(texto[i] != '\0'){
		if(texto[i] == letra && contaletras == 1){
			cont1++;
            contaletras=0;
		}
		if(texto[i] == 32){
			cont2++;
            contaletras = 1;
		}
		i++;
	}
	porcentagem = ((cont1/cont2)*100);
	//saida
    printf("%0.1lf",porcentagem);
    return 0;
}