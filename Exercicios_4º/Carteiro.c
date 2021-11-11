#include <stdio.h>

int main(){
    int n,m,i,cont,pos;

    scanf("%i %i",&n,&m);

    int casas[n],cartas[m];

    for (int i = 0; i < n; i++){
        scanf("%i",&casas[i]);
    }
    for (int i = 0; i < m; i++){
        scanf("%i",&cartas[i]);
    }
    
    cont = pos = i = 0;

    while (i < m){
        if (casas[pos]==cartas[i]){
            i++;
            tempo++;
            pos--;
        }
        if(casas[pos]!=cartas[i]){
            tempo++;
            pos++;
            i++;
        }
    }
    i++;
    printf("%i",cont);
    return 0;
}