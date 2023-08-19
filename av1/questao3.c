#include <stdio.h>
#include <stdlib.h>

void alocaNome(char *nome) {
    nome = (char*)malloc(8 * sizeof(char));

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Nome: %s\n", nome);
}

int main() {
    char *nome;
    alocaNome(&nome);
    
    return 0;
}