#include <stdio.h>

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

int maior(Item *item) {
    Item *itemAtual = item;
    int maior = itemAtual->conteudo;
    
    while (itemAtual->prox != NULL) {
        itemAtual = itemAtual->prox;

        if (itemAtual->conteudo > maior) {
            maior = itemAtual->conteudo;
        }
    }
    return maior;
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