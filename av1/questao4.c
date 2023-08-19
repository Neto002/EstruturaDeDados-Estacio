#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int tamanhoVetor = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    // Alocando dinamicamente o vetor
    vetor = (int*)malloc(tamanhoVetor * sizeof(int));

    // Preenchendo o vetor
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    // Imprimindo o vetor em ordem inversa
    for (int i = tamanhoVetor; i > 0; i--) {
        printf("%d ", vetor[i-1]);
    }
    
    return 0;
}