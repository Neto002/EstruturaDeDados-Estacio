#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); // Permite acentuação no terminal.
    
    int tamanhoVetor, *vetor, aux;
    aux = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    vetor = (int*)malloc(tamanhoVetor * sizeof(int));

    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanhoVetor-1; i++) {
        for (int j = i+1; j < tamanhoVetor; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}