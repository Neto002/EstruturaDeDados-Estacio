#include <stdio.h>
#include <stdlib.h>
#include "operacoesArvore.h"

int main() {
    ArvB arv;
    arv.raiz = NULL;
    No *raiz = NULL;

    raiz = inserir(raiz, 1);
    raiz = inserir(raiz, 3);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 7);
    imprimirInOrdem(raiz);
    printf("\n");
    imprimirPreOrdem(raiz);
    printf("\n");
    raiz = remover(raiz, 5);
    imprimirInOrdem(raiz);


    if (buscar(raiz, 1)) {
        printf("Valor encontrado!\n");
    } else {
        printf("Valor nao encontrado!\n");
    }

    if (buscar(raiz, 2)) {
        printf("Valor encontrado!\n");
    } else {
        printf("Valor nao encontrado!\n");
    }

    if (buscar(raiz, 3)) {
        printf("Valor encontrado!\n");
    } else {
        printf("Valor nao encontrado!\n");
    }

    if (buscar(raiz, 4)) {
        printf("Valor encontrado!\n");
    } else {
        printf("Valor nao encontrado!\n");
    }

    return 0;
}