#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

typedef struct Fila {
    int itens[TAMANHO];
    int final;
} Fila;

void inicializar(Fila *fila) {
    for (int i = 0; i < TAMANHO; i++) {
        fila->itens[i] = 0;
    }
    fila->final = 0;
}

void enqueue(Fila *fila, int valor) {
    if (fila->final == TAMANHO) {
        printf("Fila cheia!\n\n");
        return;
    } else {
        fila->itens[fila->final] = valor;
        fila->final++;
    }
}

void dequeue(Fila *fila) {
    if (vazia(fila)) {
        printf("Fila vazia!\n\n");
        return;
    } else {
        for (int i = 0; i < fila->final; i++) {
            fila->itens[i] = fila->itens[i+1];
        }
        fila->final--;
    }
}

void imprimir(Fila *fila) {
    if (vazia(fila)) {
        printf("Fila vazia!\n\n");
        return;
    } else {
        printf("\nFila:\n");
        for (int i = 0; i < fila->final; i++) {
            printf("%3d", fila->itens[i]);
        }
        printf("\n\n");
    }
}

void buscar(Fila *fila, int valor) {
    if (vazia(fila)) {
        printf("Fila vazia!\n\n");
        return;
    } else {
        for (int i = 0; i < fila->final; i++) {
            if (fila->itens[i] == valor) {
                printf("%d encontrado\n", valor);
                return;
            } else if (i == fila->final-1) {
                printf("%d nao encontrado\n", valor);
            }
        }
    }
}

int maiorValor(Fila *fila) {
    if (vazia(fila)) {
        printf("Fila vazia!\n\n");
        return;
    } else {
        int maior = fila->itens[0];
        for (int i = 0; i < fila->final; i++) {
            if (fila->itens[i] > maior) {
                maior = fila->itens[i];
            }
        }
        return maior;
    }
}


int vazia(Fila *fila) {
    if (fila->final == 0) {
        return 1;
    } else {
        return 0;
    }
}

int menu() {
    int escolha;

    printf("-----------------------------------------------------------\n");
    printf("Digite a opcao desejada:\n1 - Inserir\n2 - Remover\n3 - Imprimir\n4 - Buscar valor\n5 - Maior valor\n6 - Esvaziar pilha\n0 - Sair\nSua escolha: ");
    scanf("%d", &escolha);

    return escolha;
}

int main() {
    Fila fila;
    int escolha, valor;

    inicializar(&fila);

    while (escolha != 0) {
        escolha = menu();

        switch(escolha) {
            case 0:
                printf("Encerrando...\n");
                break;
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                enqueue(&fila, valor);
                break;
            case 2:
                dequeue(&fila);
                break;
            case 3:
                imprimir(&fila);
                break;
            case 4:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &valor);
                buscar(&fila, valor);
                break;
            case 5:
                printf("Maior valor: %d\n", maiorValor(&fila));
                break;
            case 6:
                inicializar(&fila);
                printf("Fila vazia.\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    return 0;
}