#include <stdio.h>
#include <stdlib.h>
#define TAM 100000 

typedef struct rosa
{
    int d; //dado
    int p; //posicao
}rosa;

//funcao que comparar os valores de um conjunto do outro
int compararconjunto (const void *a, const void *b) {
    int passoum = ((rosa *)a)->d;
    int passodois = ((rosa *)b)->d;
    return (passoum - passodois);
}

//funcao que faz a busca do valor que pertence
//ao do outro conjunto, encotrando mostramos
//a posicao dele, quando não encontra coloca -1
int busca(rosa vetor[], int tam, int d)
{
    int dir, esq, m, achado = 0;
        dir = tam - 1;
        esq = 0;
    while (esq <= dir && !achado){
        m = (dir + esq) / 2;
        if (vetor[m].d == d)
            achado = 1;
        else if (d < vetor[m].d)
            dir = m - 1;
        else if (d > vetor[m].d)
            esq = m + 1;
    }
    if (achado){
        return vetor[m].p;}
    else{
        return -1;
    }
}

//funcao main
int main()
{
    //variaveis
    int tamN = 0, tamM = 0, N, M, contN = 0, contM = 0;
    //entrada
    scanf("%d%d", &tamN, &tamM);
    //chamamento da função que tipifica o 
    //tamanho do vetor do conjunto de N
    rosa vetor[tamN];
    // chama a funcao malloc
    int *vetorM = malloc(tamM * sizeof(int));
    //processamento do vetor junto ao seu contador 
    //com a relação do conjunto N(contador) e o tamanho dele 
    while (scanf("%d", &N) != EOF)
    {
        vetor[contN].d = N;
        vetor[contN].p = contN;

        contN++;
        if (contN == tamN)
            break;
    }
    while (scanf("%d", &M) != EOF)
    {
        vetorM[contM] = M;
        contM++;
        if (contM == tamM)
            break;
    }
    // ordenação da Struct
    qsort(vetor, contN, sizeof(rosa), compararconjunto);
    // ordena(vetor, contN);
    for (int i = 0; i < contM; i++)
    {
        printf("%d \n", busca(vetor, contN, vetorM[i]));
    }
}