#include <stdio.h>
#include <stdlib.h>

void batman(string ,i)
{
   if ( '\0' == palavra[ 0 ]) return 0; 
   else {             
        if ('x' == palavra[ 1 ]){ 
            batman( &palavra[ 0 ]);
            printf("%c",palavra[ 1 ]); 
        } 
        else{
            printf("%c",palavra[ 0 ]); 
            batman( &palavra[ 1 ]);
        }
    } 
    batman(string, i++);
} 

int len(string str, i) {return (str[i] == '\0' ? i: len(str,++i));}
int main()
{
    //variaveis
    char nome[500];
    //entrada
    scanf(" %s", nome);
    //saida
    batman(nome);
    printf("\n");
}