#include <stdio.h>
#include <stdlib.h>

int main() {

    int matriz[4][4];
    int somaLinha[4] = {0, 0, 0, 0};

    // Preenche a matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprime a matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] >= 10) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("%d  ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    // Soma a linha
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            somaLinha[i] += matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("Soma da linha %d: %d\n", i, somaLinha[i]);
    }

    return 0;
}