#include <stdio.h>
#include <stdlib.h>

struct No {
    int item;
    struct No *prox;
};
typedef struct No no;

int tamanho;

void inicializar(no *pilha) {
    pilha = (no*)malloc(sizeof(no));
    pilha->prox = NULL;
    tamanho = 0;
}

int vazia(no *pilha) {
    if(pilha->prox == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void push(no *pilha, int item) {
    no *novo = (no*)malloc(sizeof(no));
    novo->prox = NULL;
    
    novo->item = item;
    
    if(vazia(pilha)) {
        pilha->prox = novo;
    } else {
        no *temp = pilha->prox;
        while(temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }
    tamanho++;
}

void pop(no *pilha) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    } else {
        no *ultimo = pilha->prox;
        no *penultimo = pilha;
        
        while(ultimo->prox != NULL) {
            penultimo = ultimo;
            ultimo = ultimo->prox;
        }
        free(ultimo);
        penultimo->prox = NULL;
        tamanho--;
        printf("Ultimo elemento excluido!\n");
    }
}

void imprimir(no *pilha) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    }
    no *temp;
    temp = pilha->prox;
    printf("\nPilha:");
    while(temp != NULL) {
        printf("%3d", temp->item);
        temp = temp->prox;
    }
    printf("\nQuantidade de itens da pilha: %d\n", tamanho);
}

void imprimirTopo(no *pilha) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    }
    no *temp;
    temp = pilha->prox;
    while (temp->prox != NULL) {
        temp = temp->prox;
    }
    printf("\nTopo da pilha: %d\n", temp->item);
}

void buscar(no *pilha, int itemBusca) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    }
    
    no *temp;
    temp = pilha->prox;
    
    while(temp != NULL) {
            
        if (temp->item == itemBusca) {
            printf("\nO numero %d existe na pilha\n", itemBusca);
            return;
        }
        temp = temp->prox;
    }
    printf("\nO numero %d nao existe na pilha\n", itemBusca);
}

void esvaziar(no *pilha) {
    if (vazia(pilha)) {
        printf("A pilha ja esta vazia!\n\n");
        return;
    }

    no *aux;
    aux = pilha->prox;

    while(aux != NULL) {
        no *noRemove = aux;
        aux = aux->prox;
        free(noRemove);
    }
}