#include <stdio.h>
int main(){
    //variaveis
    char frase[10001],pr[41],sub[41]; //pr:procurada e sub:substituta
    int j,i,k;
    //entrada
    scanf(" %[^\n]", frase);
    scanf(" %s", pr);
    scanf(" %s", sub);
    //processamento
    for (int i = 0, j=0; frase[i] != '\0'; i++){
        if (frase[i] == pr[j]){
            j++;
        }
        else{
            if(j > 0){
                if (pr[j]== '\0'){
                    printf("%s",sub);
                }
                else{
                    for (int k = 0; k < j; k++){
                        printf("%c",pr[k]);
                        j = 0;
                    }
                }
            }
            printf("%c",frase[i]);
        }
    }
    if(j > 0){
        if (pr[j]== '\0'){
            printf("%s",sub);
        }
        else{
            for (int k = 0; k < j; k++){
                printf("%c",pr[k]);
            }
        }
    }
    printf("\n");
    return 0;
}