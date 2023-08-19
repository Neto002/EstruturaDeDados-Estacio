#include <stdio.h>

typedef struct {
    char nome;
    int idade;
    float altura;
} Cadastro;

int main() {

    Cadastro cadastro;
    char *nome = &cadastro.nome;
    int *idade = &cadastro.idade;
    float *altura = &cadastro.altura;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite a idade: ");
    scanf("%d", idade);

    printf("Digite a altura: ");
    scanf("%f", altura);

    if (*idade > 18 && *altura > 1.70) {
        printf("O candidato %s esta apto a concorrer.", nome);
    } else {
        printf("O candidato %s nao esta apto a concorrer.", nome);
    }

    return 0;
}