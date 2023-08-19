#include <stdio.h>
#include <stdlib.h>
#include "operacoesFila.h"

int main() {
    no *fila;
    fila = (no*)malloc(sizeof(no));
    fila->prox = NULL;
    tamanho = 0;

    int escolha;
    int valor = 0;

    while (1==1) {
        printf("-----------------------------------------------------------\n");
        printf("Digite a opcao desejada:\n1 - Inserir\n2 - Remover\n3 - Imprimir\n4 - Buscar valor\n5 - Esvaziar fila\n6 - Maior valor\n0 - Sair\nSua escolha: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Encerrando...\n");
            break;
        }

        switch(escolha) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                enqueue(fila, valor);
                valor = 0;
                break;
            case 2:
                dequeue(fila);
                break;
            case 3:
                imprimir(fila);
                break;
            case 4:
                printf("Digite o valor que deseja buscar: ");
                scanf("%d", &valor);
                buscar(fila, valor);
                valor = 0;
                break;
            case 5:
                esvaziar(fila);
                printf("Fila esvaziada\n");
                break;
            case 6:
                printf("Maior valor da pilha: %d\n", maiorValor(fila));
                break;
            default:
                printf("Opcao invalida!\n\n");
        }
    }

    return 0;
}