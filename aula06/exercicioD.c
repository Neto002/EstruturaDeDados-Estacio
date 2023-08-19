#include <stdio.h>

typedef struct {
    
    char marca[5];
    int ano;
    float preco;

} Carro;

void checaPreco(Carro carro[], int x) {

    for (int i = 0; i < 5; i++) {
        if (carro[i].preco < x) {
            printf("Dados do carro %d:\n Marca: %s\n Ano: %d\n Preco: R$%.2f\n", i+1, carro[i].marca, carro[i].ano, carro[i].preco);
        }
    }

}

int main() {

    Carro carro[5];
    int x;

    printf("Cadastro de Carros:\n");
    for (int i = 0; i < 5; i++) {

        printf("Digite a marca do carro: ");
        scanf("%s", carro[i].marca);

        printf("Digite o ano do carro: ");
        scanf("%d", &carro[i].ano);

        printf("Digite o preco do carro: ");
        scanf("%f", &carro[i].preco);

        printf("-----------------------------------------------------\n");

    }

    printf("Valores para comparacao de precos:\n");
    while (1==1) {
        printf("Digite um valor: ");
        scanf("%d", &x);

        if (x == 0) {
            printf("Finalizando...\n");
            break;
        }

        checaPreco(carro, x);
        printf("-----------------------------------------------------\n");
    }

    return 0;
}