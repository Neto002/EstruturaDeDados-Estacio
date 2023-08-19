#include <stdio.h>

void exercicio1() {
    int *vetor;
    int maior, menor = 0;
    vetor = (int*)malloc(sizeof(int)*10);
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }

    printf("Maior numero do vetor: %d\n", maior);
    printf("Menor numero do vetor: %d\n", menor);
}

void exercicio2() {
    int matriz[4][4];
    int somaColuna[4] = {0, 0, 0, 0};

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

    // Soma a coluna
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            somaColuna[i] += matriz[j][i];
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("Soma da coluna %d: %d\n", i, somaColuna[i]);
    }
}

void exercicio3() {
    int a = 0;
    int b = 0;
    int *pont_a = &a;
    int *pont_b = &b;

    printf("Digite um valor para a: ");
    scanf("%d", pont_a);
    printf("Digite um valor para b: ");
    scanf("%d", pont_b);

    printf("Valor de a: %d\n", *pont_a);
    printf("Valor de b: %d\n", *pont_b);

    printf("Soma: %d\n", *pont_a + *pont_b);
    printf("Subtracao: %d\n", *pont_a - *pont_b);
    printf("Multiplicacao: %d\n", *pont_a * *pont_b);
    printf("Divisao: %d\n", *pont_a / *pont_b);
}

int calculaArea(int base, int altura) {
    return base * altura;
}

int calculaAreaRetangulo(int base, int altura) {
    return base * altura;
}

int criaRetangulo() {
    int retangulo[2] = {0, 0};
    printf("Digite a base do retangulo: ");
    scanf("%d", &retangulo[0]);
    printf("Digite a altura do retangulo: ");
    scanf("%d", &retangulo[1]);

    int area = calculaAreaRetangulo(retangulo[0], retangulo[1]);

    return area;
}

void comparaRetangulo(int retanguloA, int retanguloB) {
    if (retanguloA > retanguloB) {
        printf("Retangulo A e maior que o retangulo B\n");
    } else if (retanguloA < retanguloB) {
        printf("Retangulo B e maior que o retangulo A\n");
    } else {
        printf("Triangulos iguais\n");
    }
}

void exercicio4() {
    int retanguloA = criaRetangulo();
    int retanguloB = criaRetangulo();

    printf("Area do retangulo A: %d cm²\n", retanguloA);
    printf("Area do retangulo B: %d cm²\n", retanguloB);
}

typedef struct {
    int matricula;
    char nome[30];
    float nota1;
    float segundaNota;
} Aluno;

void exercicio5() {
    Aluno alunos[6];
    float media[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 6; i++) {
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].segundaNota);
        media[i] = (alunos[i].nota1 + alunos[i].segundaNota) / 2;
    }

    for (int i = 0; i < 6; i++) {
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Media: %.2f\n", media[i]);
        printf("-------------------------------------------------\n");
    }
}

int main() {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();

    return 0;
}