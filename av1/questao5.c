#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[30];
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno aluno[5];
    float media[5] = {0, 0, 0, 0, 0};

    // Preenchendo os dados dos alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &aluno[i].nota1);
        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &aluno[i].nota2);
    }

    // Calculando a média de cada aluno
    for (int i = 0; i < 5; i++) {
        media[i] = (aluno[i].nota1 + aluno[i].nota2) / 2;
    }

    // Imprimindo os dados dos alunos
    for (int i = 0; i < 5; i++) {
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Media: %.2f\n", media[i]);
    }

    return 0;
}