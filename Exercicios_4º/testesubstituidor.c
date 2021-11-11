#include <stdio.h>
#include <string.h>

main()
{
    char string[10000];
    char ch1;
    char ch2;
    int x, tam;

    printf ("Digite uma frase:\n");
    gets(string);
    printf ("Digite alguma letra q exista na frase acima:\n");
    scanf ("%s",ch1);
    printf ("Digite alguma letra q exista ou nao na frase acima:\n");
    scanf ("%s",ch2);
    tam=strlen(string);
    for (x=0;x<tam;x++){
        if (string[x]==ch1){
            string[x]=ch2;
        }
    }
    printf ("%s", string);
    return 0;
}
