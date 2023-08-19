#include "stdio.h"
#include "data.h"

struct Data dataHoje();
int calcularIdade(struct Data dataNascimento, struct Data dataHoje);

int main() {
    struct Data dt, hj;
    int idade;

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dt.dia, &dt.mes, &dt.ano);

    printf("Data de Nascimento: %.2d/%.2d/%d.\n", dt.dia, dt.mes, dt.ano);

    hj = dataHoje();

    idade = calcularIdade(dt, hj);

    printf("\nHoje e dia %.2d/%.2d/%d.\n", hj.dia, hj.mes, hj.ano);
    printf("Idade: %d anos.\n", idade);
}