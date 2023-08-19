#include <stdio.h>

typedef struct {
    char nome[30];
    int idade;
    float altura;
} Cadastro;

int main() {

    Cadastro cadastro;

    printf("Digite o nome: ");
    fgets(cadastro.nome, 30, stdin);
    fflush(stdin);

    printf("Digite a idade: ");
    scanf("%d", &cadastro.idade);

    printf("Digite a altura: ");
    scanf("%f", &cadastro.altura);

    if (cadastro.idade > 18 && cadastro.altura > 1.70) {
        printf("O candidato %s esta apto a concorrer.", cadastro.nome);
    } else {
        printf("O candidato %s nao esta apto a concorrer.", cadastro.nome);
    }

    return 0;
}