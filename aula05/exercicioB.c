#include <stdio.h>

// b) Implementar o exemplo de structs com ponteiros da aula de hj, inserindo uma nova funcao, para imprimir a lista de forma inversa.

typedef struct {
    int conteudo;
    struct Item *prox;
} Item;

void inserir(Item **item) {
    Item *itemAtual, *itemNovo;
    int numero;

    printf("Digite o numero a ser inserido: ");
    scanf("%d", &numero);

    if (*item == NULL) {
        *item = (Item *)malloc(sizeof(Item));
        (*item)->conteudo = numero;
        (*item)->prox = NULL;
    } else {
        itemAtual = *item;
        while (itemAtual->prox != NULL) {
            itemAtual = itemAtual->prox;
        }
        itemNovo = (Item *)malloc(sizeof(Item));
        itemNovo->conteudo = numero;
        itemNovo->prox = NULL;
        itemAtual->prox = itemNovo;
    }
}

void imprimir(Item *item) {
    while (item != NULL) {
        printf("Item: %d ", item->conteudo);
        item = item->prox;
    }
}

int tamanhoLista(Item *cabeca) {
    int tamanhoLista = 0;
    Item *itemAtual = cabeca;
    while (itemAtual != NULL) {
        tamanhoLista++;
        itemAtual = itemAtual->prox;
    }
    return tamanhoLista;
}

int dadoIndex(Item *cabeca, int index) {
    Item *itemAtual = cabeca;
    for (int i = 0; i < index-1 && itemAtual != NULL; i++) {
        itemAtual = itemAtual->prox;
    }
    return itemAtual->conteudo;
}

void imprimirReverso(Item *cabeca) {
    int tamanho = tamanhoLista(cabeca);
    for (int i = tamanho; i >= 1; i--) {
        printf("Item: %d ", dadoIndex(cabeca, i));
    }
}

int main() {

    int opcao;
    Item *cabeca = NULL;

    do {
        printf("\n--Opcoes--");
        printf("\n1 -> Inserir novo Item");
        printf("\n2 -> Imprimir os Itens");
        printf("\n3 -> Imprimir os Itens em Reverso");
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