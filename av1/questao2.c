#include <stdio.h>
#include <stdlib.h>

int main() {
    char *cadeiaCaracteres;
    int quantidadeCaracteres = 0;

    printf("Digite a quantidade de caracteres que deseja preencher: ");
    scanf("%d", &quantidadeCaracteres);

    cadeiaCaracteres = (char *) malloc(quantidadeCaracteres * sizeof(char));

    printf("Digite a cadeia de caracteres desejada: ");
    scanf("%s", cadeiaCaracteres);

    printf("Cadeia de caracteres: %s\n", cadeiaCaracteres);
    
    return 0;
}