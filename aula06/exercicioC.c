#include <stdio.h>

typedef struct {
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
} Produto;

typedef struct {
    int codigoProduto;
    int quantidade;
} Pedido;

void procuraPedido(Produto produto[], Pedido pedido) {

    for (int i = 0; i < 5; i++) {

        if (pedido.codigoProduto == produto[i].codigo) {

            printf("Produto encontrado! Atualizando quantidade...\n");
            int quantidadeProduto = produto[i].quantidade;

            produto[i].quantidade -= pedido.quantidade;

            if (produto[i].quantidade < 0) {

                printf("Quantidade insuficiente! Por favor selecionar quantidade valida\n");
                produto[i].quantidade = quantidadeProduto;

            } else {

                printf("Quantidade atualizada com sucesso!\n");

            }

        } else {
            printf("Produto nao encontrado!\n");
        }
    }

}

int main() {

    Produto produto[5];
    Pedido pedido;

    printf("Cadastro de Produtos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o codigo do produto: ");
        scanf("%d", &produto[i].codigo);

        printf("Digite o nome do produto: ");
        scanf("%s", produto[i].nome);

        printf("Digite o preco do produto: ");
        scanf("%f", &produto[i].preco);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &produto[i].quantidade);
        printf("---------------------------------------------------\n");
    }

    printf("Pedidos:\n");
    while (1 == 1) {
        printf("Digite o codigo do produto: ");
        scanf("%d", &pedido.codigoProduto);

        if (pedido.codigoProduto == 0) {
            break;
        }

        printf("Digite a quantidade do produto: ");
        scanf("%d", &pedido.quantidade);

        procuraPedido(produto, pedido);

        printf("---------------------------------------------------\n");
    }

    return 0;
}