#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Data dataHoje() {
    struct Data hoje;
    time_t dataHora;
    time(&dataHora);
    struct tm *dataAtual = localtime(&dataHora);
    hoje.dia = dataAtual->tm_mday;
    hoje.mes = dataAtual->tm_mon + 1;
    hoje.ano = dataAtual->tm_year + 1900;
    return hoje;
}

int calcularIdade(struct Data dataNascimento, struct Data dataHoje) {
    int idade = dataHoje.ano - dataNascimento.ano;

    if (dataHoje.mes < dataNascimento.mes) {
        idade--;
    }

    return idade;
}