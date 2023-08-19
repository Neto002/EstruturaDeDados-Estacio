#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void inserir(Item **item);
void imprimir(Item *item);
int tamanhoLista(Item *cabeca);
int maior(Item *item);
int dadoIndex(Item *cabeca, int index);
void imprimirReverso(Item *cabeca);

int main() {

    int opcao;
    Item *cabeca = NULL;

    do {
        printf("\n--Opcoes--");
        printf("\n1 -> Inserir novo Item");
        printf("\n2 -> Imprimir os Itens");
        printf("\n3 -> Imprimir os Itens em Reverso");
        printf("\n4 -> Imprimir o maior Item da Lista");
        printf("\n0 -> Sair\nSua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserir(&cabeca);
                break;
            case 2:
                imprimir(cabeca);
                break;
            case 3:
                imprimirReverso(cabeca);
                break;
            case 4:
                printf("Maior Item: %d", maior(cabeca));
                break;
            case 0:
                break;
            default:
                printf("\n\nOpcao invalida");
                break;
        }
        fflush(stdin);
    } while (opcao != 0);

    return 0;
}