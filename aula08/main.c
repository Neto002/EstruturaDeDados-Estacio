#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"

void inserirInicio(Lista *lista, int valor);
void inserirFim(Lista *lista, int valor);
void remover(Lista *lista, int valor);
void imprimir(Lista *lista);
void buscar(Lista *lista, int valor);

int main(){
    Lista lista;

    lista.inicio = NULL;
    lista.fim = NULL;
    lista.tamanho = 0; 

    inserirInicio(&lista, 5);
    inserirInicio(&lista, 3);
    inserirInicio(&lista, 9);
    buscar(&lista, 9);
    buscar(&lista, 10);
    imprimir(&lista);

    return 0;
}