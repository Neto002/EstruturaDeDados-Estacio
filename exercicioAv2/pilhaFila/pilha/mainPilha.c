#include <stdio.h>
#include <stdlib.h>
#include "operacoesPilha.h"

int main()
{
    int escolha;
    int valor = 0;
    no *pilha;
    pilha = (no*)malloc(sizeof(no));
    pilha->prox = NULL;
    tamanho = 0;
    
    while (escolha != 0) {
        printf("-----------------------------------------------------------\n");
        printf("Digite a opcao desejada:\n1 - Inserir\n2 - Remover\n3 - Imprimir Pilha\n4 - Imprimir Topo\n5 - Buscar\n6 - Esvaziar\n0 - Sair\nSua escolha: ");
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
                imprimirTopo(pilha);
                break;
            case 5:
                printf("Digite o valor que deseja buscar: ");
                scanf("%d", &valor);
                buscar(pilha, valor);
                valor = 0;
                break;
            case 6:
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
