#include <stdio.h>

typedef struct {
    int conteudo;
    struct Item *prox;
} Item;

void inserir(Item **item) {
    Item *itemATUAL, *itemNOVO;
    int numero;

    printf("Informe o Item: ");
    scanf("%d", &numero);

    if (*item == NULL) {
        *item = (Item *)malloc(sizeof(Item));
        (*item)->conteudo = numero;
        (*item)->prox = NULL;
    } else {
        itemATUAL = *item;
        while (itemATUAL->prox != NULL) {
            itemATUAL = itemATUAL->prox;
        }
        itemNOVO = (Item *)malloc(sizeof(Item));
        itemNOVO->conteudo = numero;
        itemNOVO->prox = NULL;
        itemATUAL->prox = itemNOVO;
    }
}

void imprimir(Item *item) {
    while (item != NULL) {
        printf("Item: %d ", item->conteudo);
        item = item->prox;
    }
}

int main() {
    int opcao;
    Item *cabeca = NULL;

    do {
        printf("\n--Opcoes--");
        printf("\n1 -> Inserir novo Item");
        printf("\n2 -> Imprimir os Itens");
        printf("\n0 -> Sair\nSua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserir(&cabeca);
                break;
            case 2:
                imprimir(cabeca);
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