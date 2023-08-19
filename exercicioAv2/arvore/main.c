#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "operacoesArvore.h"

int main() {
    SetConsoleOutputCP(65001); // Permite acentuação no terminal.
    ArvB arv;
    arv.raiz = NULL;
    No *raiz = NULL;
    int opcao = 0;

    while (TRUE) {
        printf("-------------------------------------------------------------------\n");
        printf("Digite uma opção:\n1 - Inserir valor\n2 - Imprimir a partir da sub-árvore esquerda\n3 - Imprimir a partir da sub-árvore direita\n4 - Buscar valor\n5 - Maior valor\n0 - Sair\nSua escolha: ");
        scanf("%d", &opcao);
        printf("-------------------------------------------------------------------\n");

        if (opcao == 0) {
            printf("Saindo...\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite um valor: ");
                int valor;
                scanf("%d", &valor);
                raiz = inserir(raiz, valor);
                arv.raiz = raiz;
                arv.tamanho++;
                break;
            case 2:
                imprimirInOrdem(raiz);
                printf("\n");
                break;
            case 3:
                imprimirPreOrdem(raiz);
                printf("\n");
                break;
            case 4:
                printf("Digite um valor: ");
                int valorBusca;
                scanf("%d", &valorBusca);
                if (buscar(raiz, valorBusca) == 1) {
                    printf("Valor encontrado!\n");
                } else {
                    printf("Valor não encontrado!\n");
                }
                break;
            case 5:
                printf("Maior valor: %d\n", maiorValor(raiz));
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

    return 0;
}