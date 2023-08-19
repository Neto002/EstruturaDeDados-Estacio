#include <stdio.h>
#include <stdlib.h>
#include "operacoesPilha.h"

int main()
{
    int escolha;
    int valor = 0;
    no *pilha;
    inicializar(pilha);
    
    while (escolha != 0) {
        printf("-----------------------------------------------------------\n");
        printf("Digite a opcao desejada:\n1 - Inserir\n2 - Remover\n3 - Imprimir\n4 - Buscar valor\n5 - Esvaziar pilha\n0 - Sair\nSua escolha: ");
        scanf("%d", &escolha);
        
        switch(escolha) {
            case 0:
                printf("Encerrando...\n");
                break;
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                push(pilha, valor);
                valor = 0;
                break;
            case 2:
                pop(pilha);
                break;
            case 3:
                imprimir(pilha);
                break;
            case 4:
                printf("Digite o valor que deseja buscar: ");
                scanf("%d", &valor);
                buscar(pilha, valor);
                valor = 0;
                break;
            case 5:
                esvaziar(pilha);
                printf("Pilha esvaziada\n");
                break;
            default:
                printf("Opcao invalida!\n\n");
        }
    }
    
    free(pilha);
    return 0;
}
