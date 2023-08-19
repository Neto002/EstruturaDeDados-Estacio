#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int item;
    struct No *proximo;
}No;

typedef struct{
    No *inicio, *fim;
    int tamanho;
 }Lista;

void inserirInicio(Lista *lista, int valor){
    No *novo = (No*)malloc(sizeof(No));
    novo->item = valor;

    if(lista->inicio == NULL){
        novo->proximo = NULL;
        lista->inicio = novo;
        lista->fim = novo;
     }else{
        novo->proximo = lista->inicio;
        lista->inicio = novo; 
    }

    lista -> tamanho++;
}

void inserirFim(Lista *lista, int valor) {
    No *novo = (No*)malloc(sizeof(No));
    novo->item = valor;
    novo->proximo = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
        lista->fim = novo;
    } else {
        lista->fim->proximo = novo;
        lista->fim = novo;
    }
    lista->tamanho++;
}

void imprimir(Lista *lista){
    No *percorre = lista->inicio;
    printf("Qtde elementos: %d\n", lista->tamanho);
    while(percorre != NULL){
        printf("%d ", percorre->item);
        percorre = percorre->proximo;
    }
}

void buscar(Lista *lista, int valor) {
    No *percorre = lista->inicio;
    while (percorre != NULL && percorre->item != valor) {
        percorre = percorre->proximo;
    }
    if (percorre != NULL) {
        printf("%d encontrado\n", percorre->item);
    } else {
        printf("%d nao encontrado\n", valor);
    }
}