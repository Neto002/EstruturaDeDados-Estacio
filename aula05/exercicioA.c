#include <stdio.h>

// a) Faca uma struct que armazene os dados de 10 pessoas, com os campos nome, idade, data de nascimento (dd/mm/yyyy). Data sera uma nova struct, ou seja, seu algoritmo struct.

typedef struct {
    char nome[30];
    int idade;
    struct Data {
        int dia;
        int mes;
        int ano;
    };
} Pessoa;

int main() {

    Pessoa pessoa[10];
    struct Data data[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome: ");
        fgets(pessoa[i].nome, 30, stdin);

        printf("Digite a idade: ");
        scanf("%d", &pessoa[i].idade);

        printf("Digite a data de nascimento (dd/mm/yyyy): ");
        scanf("%d %d %d", &data[i].dia, &data[i].mes, &data[i].ano);

        fflush(stdin);
    }

    for (int i = 0; i < 10; i++) {
        printf("Nome: %sIdade: %d\nData de Nascimento: %d/%d/%d\n", pessoa[i].nome, pessoa[i].idade, data[i].dia, data[i].mes, data[i].ano);
    }

    return 0;
}