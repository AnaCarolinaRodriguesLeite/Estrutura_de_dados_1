#include <stdio.h>
#include "listas.h"

void imprime_menu(){
    printf("Selecione uma opcao:\n");
    printf("1-Criar lista\n");
    printf("2-Inserir elemento no inicio\n");
    printf("3-Remover primeiro elemento\n");
    printf("4-Imprimir lista\n");
    printf("5-Destruir lista\n");
    printf("0-Sair\n");
}

int main(){
    int op;
    no *le;

    //scanf("%d", &op);
    imprime_menu(&op);
    while(op != 0){
        switch(op){
            case 1:
            le = cria_lista();
            break;
            case 2:
            printf("Digite o novo dado:");
            scanf("%d",&dado);
            if(inserir(le,dado)){
                printf("Elemento inserido com sucesso.\n");
            }
            else{
                printf("Problema na hora de inserir.\n");
            }
            break;
            case 3:
            if(remover(le,&dado)){
                printf("Elemento removido: %d\n",dado);
            }
            else{
                printf("A lista esta vazia.\n");
            }
            break;
            case 4:
            imprimir(le);
            break;
            case 5:
            le = destruir_lista(le);
        }
        imprimir_menu(&op);
    }
    return 0;
}