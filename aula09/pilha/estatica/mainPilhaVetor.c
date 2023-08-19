#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

typedef struct Pilha {
    int itens[TAMANHO];
    int topo;
} Pilha;

void inicializar(Pilha *pilha) {
    for (int i = 0; i < TAMANHO; i++) {
        pilha->itens[i] = 0;
    }
    pilha->topo = 0;
}

int vazia(Pilha *pilha) {
    if (pilha->topo == 0) {
        printf("Pilha vazia!\n\n");
        return 1;
    } else {
        return 0;
    }
}

void push(Pilha *pilha, int valor) {
    if (pilha->topo == TAMANHO) {
        printf("Pilha cheia!\n\n");
        return;
    } else {
        pilha->itens[pilha->topo] = valor;
        pilha->topo++;
    }
}

void pop(Pilha *pilha) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    } else {
        pilha->topo--;
    }
}

void imprimir(Pilha *pilha) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    } else {
        printf("\nPilha:\n");
        for (int i = 0; i < pilha->topo; i++) {
            printf("%3d", pilha->itens[i]);
        }
        printf("\n\n");
    }
}

void buscar(Pilha *pilha, int valor) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    } else {
        for (int i = 0; i < pilha->topo; i++) {
            if (pilha->itens[i] == valor) {
                printf("%d encontrado\n", valor);
                return;
            } else if (i == pilha->topo-1) {
                printf("%d nao encontrado\n", valor);
            }
        }
    }
}

int maiorValor(Pilha *pilha) {
    if (vazia(pilha)) {
        printf("Pilha vazia!\n\n");
        return;
    } else {
        int maior = pilha->itens[0];
        for (int i = 0; i < pilha->topo; i++) {
            if (pilha->itens[i] > maior) {
                maior = pilha->itens[i];
            }
        }
        return maior;
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
    Pilha pilha;
    int escolha, valor;

    inicializar(&pilha);

    while (escolha != 0) {
        escolha = menu();

        switch(escolha) {
            case 0:
                printf("Encerrando...\n");
                break;
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                push(&pilha, valor);
                break;
            case 2:
                pop(&pilha);
                break;
            case 3:
                imprimir(&pilha);
                break;
            case 4:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &valor);
                buscar(&pilha, valor);
                break;
            case 5:
                printf("Maior valor: %d\n", maiorValor(&pilha));
                break;
            case 6:
                inicializar(&pilha);
                printf("Pilha vazia.\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    return 0;
}