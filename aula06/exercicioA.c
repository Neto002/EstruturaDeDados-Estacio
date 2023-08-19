#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int main() {
    Data data[5];
    int anoAtual = 2022;
    int mesAtual = 3;
    int diaAtual = 30;

    for (int i = 0; i < 5; i++) {
        printf("Digite a data de nascimento (dd/mm/yyyy): ");
        scanf("%d %d %d", &data[i].dia, &data[i].mes, &data[i].ano);
        
        int idadeAnos = anoAtual - data[i].ano;
        int idadeMeses = mesAtual - data[i].mes;

        if (mesAtual < data[i].mes) {
            idadeMeses = data[i].mes - mesAtual;
        }

        int idadeDias = (diaAtual - data[i].dia);

        if (diaAtual < data[i].dia) {
            idadeDias = data[i].dia - diaAtual;
        }

        idadeDias += (idadeAnos*365) + (idadeMeses*30);

        printf("Idade em dias: %d\n", idadeDias);
    }

    return 0;
}