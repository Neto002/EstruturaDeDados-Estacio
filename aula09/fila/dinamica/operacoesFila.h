#include <stdio.h>
#include <stdlib.h>

struct No {
    int item;
    struct No *prox;
};

typedef struct No no;
int tamanho;

void inicializar(no *fila) {
    fila = (no*)malloc(sizeof(no));
    fila->prox = NULL;
    tamanho = 0;
}

int vazia(no *fila) {
    if(fila->prox == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(no *fila, int item) {
    no *novo = (no*)malloc(sizeof(no));
    novo->prox = NULL;

    novo->item = item;

    if (vazia(fila)) {
        fila->prox = novo;
    } else {
        no *temp = fila->prox;
        while(temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }
    tamanho++;
}

void dequeue(no *fila) {
    if (vazia(fila)) {
        printf("A fila esta vazia!\n\n");
        return;
    } else {
        no *temp = fila->prox;
        fila->prox = temp->prox;
        tamanho--;
        free(temp);
    }
}

void imprimir(no *fila) {
    if (vazia(fila)) {
        printf("Fila vazia!\n\n");
        return;
    } else {
        no *temp;
        temp = fila->prox;
        printf("\nFila:");
        while(temp != NULL) {
            printf("%3d", temp->item);
            temp = temp->prox;
        }
        printf("\nQuantidade de itens da fila: %d\n", tamanho);
    }
}

void buscar(no *fila, int item) {
    if (vazia(fila)) {
        printf("Fila vazia!\n\n");
        return;
    } else {
        no *temp;
        temp = fila->prox;
        while(temp != NULL) {
            if (temp->item == item) {
                printf("\nO numero %d existe na fila\n", item);
                return;
            }
            temp = temp->prox;
        }
        printf("\nO numero %d nao existe na fila\n", item);
    }
}

no* maiorValor(no *fila) {
    no *maior = fila->prox;

    if (vazia(fila)) {
        printf("Fila vazia!\n\n");
        return;
    } else {
        no *temp;
        temp = fila->prox;
        while(temp != NULL) {
            if (temp->item > maior->item) {
                maior = temp;
            }
            temp = temp->prox;
        }
    }
    return maior->item;
}

void esvaziar(no *fila) {
    if (vazia(fila)) {
        printf("A fila ja esta vazia!\n\n");
        return;
    } else {
        no *atual;
        no *proxNo;
        atual = fila->prox;

        while(atual != NULL) {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}