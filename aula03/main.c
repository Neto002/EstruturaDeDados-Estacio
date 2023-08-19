#include <stdio.h>
#include <stdlib.h>

void exercicioA() {
    printf("Crie um programa que le 10 valores inteiros, insere em um vetor e mostre na tela os valores lidos.\n");
    
    int *vetor;
    vetor = (int*)malloc(sizeof(int)*10);
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Valor da posição %d: %d\n", i, vetor[i]);
    }
}

void exercicioB() {
    printf("Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor,");
    printf(" armazenando o resultado em outro vetor. Os conjuntos possuem 10 elementos cada. Imprimir todos os conjuntos.\n");
    
    float *vetor, *vetorQuadrado;
    vetor = (float*)malloc(sizeof(float)*10);
    vetorQuadrado = (float*)malloc(sizeof(float)*10);
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
        vetorQuadrado[i] = vetor[i]*vetor[i];
    }
    
    printf("Valores do primeiro vetor: ") ;  
    for (int i = 0; i < 10; i++) {
        printf("%.1f, ", vetor[i]);
    }
    
    printf("\nValores do segundo vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f, ", vetorQuadrado[i]);
    }
}

void exercicioC() {
    printf("\nLeia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.\n");
    
    int *vetor;
    vetor = (int*)malloc(sizeof(int)*10);
    
    int qtdPar = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 ==0) {
            qtdPar++;
        }
    }
    
    printf("\nO vetor tem %d valores pares.\n", qtdPar);
}

void exercicioD() {
    printf("Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.\n");
    
    int *vetor;
    vetor = (int*)malloc(sizeof(int)*10);
    
    int maior = 0;
    int menor = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            } else if(vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }
    printf("O maior valor do vetor e: %d\n", maior);
    printf("O menor valor do vetor e: %d\n", menor);
}

void exercicioE() {
    printf("Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele");
    printf(" se encontra.\n");
    
    int *vetor;
    vetor = (int*)malloc(sizeof(int)*10);
    
    int maior = 0;
    int indexMaior = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior) {
            maior = vetor[i];
            indexMaior = i;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Valor da posicao %d do vetor: %d\n", i, vetor[i]);
    }
    
    printf("O maior valor do vetor e %d, ocupando a posicao %d\n", maior, indexMaior);
}

void exercicioF() {
    printf("Faca um programa que preencha um vetor com 10 numeros reais, calcule e mostre a quantidade de numeros");
    printf(" negativos e a soma dos numeros positivos desse vetor.\n");
    
    float *vetor;
    vetor = (float*)malloc(sizeof(float)*10);
    
    int qtdNegativo = 0;
    int somaPositivo = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
        if (vetor[i] < 0) {
            qtdNegativo++;
        }
        if (vetor[i] > 0) {
            somaPositivo += vetor[i];
        }
    }
    
    printf("Quantidade de valores negativos: %d\nSoma dos valores positivos: %d\n", qtdNegativo, somaPositivo);
}

void exercicioG() {
    printf("Faca um programa que leia um vetor de 10 numeros. Leia um numero x. Conte os multiplos de x do vetor e mostre-os na tela.\n");
    
    int *vetor;
    vetor = (int*)malloc(sizeof(int)*10);
    
    int x;
    
    printf("Digite um valor a ser comparado: ");
    scanf("%d", &x);
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("O valor %d e multiplo de %d\n", vetor[i], x);   
        }
    }
}

void exercicioH() {
    printf("Faca um vetor de tamanho 10 preenchido com o seguinte valor: (i + 5 * i) * (i + 1), sendo i posicao do elemento no vetor."); 
    printf("Em seguida imprima o vetor na tela.\n");
    
    int *vetor;
    vetor = (int*)malloc(sizeof(int)*10);
    
    for (int i = 0; i < 10; i++) {
        vetor[i] = (i+5*i) * (i+1);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Valor da posicao %d do vetor: %d\n", i, vetor[i]);
    }
}

void exercicioI() {
    printf("Faca um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um codigo inteiro. Se o codigo for zero,"); 
    printf(" finalize o programa; se for 1, mostre o vetor na ordem em que foi preenchido; se for 2, mostre o vetor na ordem inversa.");
    printf(" Caso o codigo for diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.\n");
    
    float *vetor;
    vetor = (float*)malloc(sizeof(float)*5);
    
    int codigo;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
    }
    
    printf("Digite o codigo (0, 1 ou 2): ");
    scanf("%d", &codigo);
    
    if (codigo == 0) {
        printf("Finalizando programa...\n");
        exit;
    } else if (codigo == 1) {
        printf("Vetor na ordem preenchida: ");
        for (int i = 0; i < 5; i++) {
            printf("%.1f, ", vetor[i]);
        }
    } else if (codigo == 2) {
        for (int i = 4; i >= 0; i--) {
            printf("%.1f, ", vetor[i]);
        }
    } else {
        printf("Codigo invalido.\n");
    }
}

void exercicioJ() {
    printf("Elabore um algoritmo em linguagem C que ordene os elementos de um vetor da forma crescente.\n");

    int *vetor, aux;
    vetor = (int*)malloc(sizeof(int)*5);

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            if (vetor[j] < vetor[i]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
    
}

void exercicioK() {
    printf("\nDesenvolva um codigo em C que leia dois vetores inteiros de tamanho iguais e calcule a distancia de Hamming. A distancia de Hamming e dada peloo numero de posicoes nas quais elas diferem entre si. Exemplo: 1011 e 1111 possuem distancia de Hamming 1 pois se diferem em apenas 1 posicao.\n");

    int *vetor1, *vetor2;
    vetor1 = (int*)malloc(sizeof(int)*5);
    vetor2 = (int*)malloc(sizeof(int)*5);

    int distanciaHamming = 0;
    int aux = 0;

    printf("----------Coleta de Dados do Vetor 1-----------\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor1[i]);
    }
    printf("----------Coleta de Dados do Vetor 2-----------\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            if (vetor1[j] < vetor1[i]) {
                aux = vetor1[i];
                vetor1[i] = vetor1[j];
                vetor1[j] = aux;
            }
            if (vetor2[j] < vetor2[i]) {
                aux = vetor2[i];
                vetor2[i] = vetor2[j];
                vetor2[j] = aux;
            }
        }
    }

    printf("Vetor 1:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor1[i]);
    }
    
    printf("\nVetor 2:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor2[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (vetor1[i] != vetor2[i]) {
            distanciaHamming++;
        }
    }
    

    printf("\nA distancia de Hamming entre os dois vetores e de %d posicoes.\n", distanciaHamming);
}

void exercicioL() {
    printf("Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.\n");

    int matriz[4][4];
    int qtd = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o termo para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10)
            {
                qtd++;
            }
            
        }
    }
    
    printf("A matriz tem %d valores maiores que 10.\n", qtd);
}

void exercicioM() {
    printf("Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.\n");

    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==j)
            {
                matriz[i][j] = 1;
            } else
            {
                matriz[i][j] = 0;
            }
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void exercicioN() {
    printf("Leia uma matriz 4 x 4, imprima a matriz e retorne a localizacao (linha e a coluna) do maior valor.\n");

    int matriz[4][4];
    int linhaMaior, colunaMaior, maior = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o termo para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i==0) {
                maior = matriz[i][j];
                linhaMaior = 0;
                colunaMaior = 0;
            } else {
                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                    linhaMaior = i;
                    colunaMaior = j;
                }
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] >= 10) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("%d  ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("O maior valor da matriz e o numero %d, que se encontra na linha %d coluna %d.\n", maior, linhaMaior, colunaMaior);
}

void exercicioO() {
    printf("Leia uma matriz 3 x 3. Leia tambem um valor X. O programa devera fazer uma busca desse valor na matriz e, ao final, escrever a ");
    printf("localizacao (linha e coluna) ou uma mensagem de “nao encontrado”.\n");
    
    int matriz[3][3];
    int x;
    int linhaX, colunaX;
    int achouX = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Digite um valor para buscar na matriz: ");
    scanf("%d", &x);
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                linhaX = i;
                colunaX = j;
                achouX = 1;
            }
        }
    }

    if (!achouX) {
        printf("Valor nao encontrado na matriz.\n");
    } else {
        printf("O valor %d foi encontrado na linha %d e coluna %d.\n", x, linhaX, colunaX);
    }
}

void exercicioP() {
    printf("Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posicao das matrizes lidas. Ler um valor e escrever se e positivo ou negativo (considere o valor zero como positivo).\n");

    int matriz1[4][4], matriz2[4][4], matrizMaiores[4][4];
    int maior = 0;

    printf("----------Coleta de dados Matriz 1----------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("----------Coleta de dados Matriz 2----------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("----------Matriz com os maiores valores de cada posicao----------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz1[i][j] > matriz2[i][j]) {
                matrizMaiores[i][j] = matriz1[i][j];
            } else {
                matrizMaiores[i][j] = matriz2[i][j];
            }

            if (matrizMaiores[i][j] >= 10) {
                printf("%d ", matrizMaiores[i][j]);
            } else {
                printf("%d  ", matrizMaiores[i][j]);
            }
        }
        printf("\n");
    }
    
}

void exercicioQ() {
    printf("Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao acima da diagonal principal, abaixo da diagonal principal e os que estão na diagonal principal. Imprima os três resultados.\n");

    /*
        Parte de cima: [0][1], [0][2], [1][2]
        Parte de baixo: [1][0], [2][0], [2][1]
    */

    int matriz[3][3];
    int somaCima = 0, somaBaixo = 0, somaDiagonal = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 1 || i == 0 && j == 2 || i == 1 && j == 2) {
                somaCima+= matriz[i][j];
            } else if (i == 1 && j == 0 || i == 2 && j == 0 || i == 2 && j == 1) {
                somaBaixo += matriz[i][j];
            } else if (i == j) {
                somaDiagonal += matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] >= 10) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("%d  ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("Soma da parte acima da diagonal: %d\nSoma da parte abaixo da diagonal: %d\nSoma da diagonal: %d\n", somaCima, somaBaixo, somaDiagonal);
}

void exercicioR() {
    printf("Faca um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A * B.\n");

    int matrizA[3][3], matrizB[3][3], matrizC[3][3];
    int somaProduto = 0;

    printf("----------Coleta de dados Matriz A----------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("----------Coleta de dados Matriz B----------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somaProduto = 0;
            for (int aux = 0; aux < 3; aux++) {
                somaProduto += matrizA[i][aux] * matrizB[aux][j];
                matrizC[i][j] = somaProduto;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrizC[i][j] >= 10) {
                printf("%d ", matrizC[i][j]);
            } else {
                printf("%d  ", matrizC[i][j]);
            }
        }
        printf("\n");
    }
}

void exercicioS() {
    printf("Elabore um programa que tendo duas matrizes 3X3, imprima a soma dessas matrizes.\n");

    int matrizA[3][3], matrizB[3][3], matrizC[3][3];

    printf("----------Coleta de dados Matriz A----------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("----------Coleta de dados Matriz B----------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            if (matrizC[i][j] >= 10) {
                printf("%d ", matrizC[i][j]);
            } else {
                printf("%d  ", matrizC[i][j]);
            }
        }
        printf("\n");
    }
}

void exercicioT() {
    printf("Leia uma matriz 3X3 do teclado, calcule e imprima a sua matriz transposta.\n");

    int matriz[3][3], matrizTransposta[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrizTransposta[i][j] >= 10) {
                printf("%d ", matrizTransposta[i][j]);
            } else {
                printf("%d  ", matrizTransposta[i][j]);
            }
        }
        printf("\n");
    }
}

void exercicioU() {
    printf("Faca um programa que leia uma matriz 4X4 e imprima a media aritmetica dos numeros das linhas e das colunas dessa matriz.\n");

    int matriz[4][4], somaLinha = 0, somaColuna = 0;
    int *mediaLinhas, *mediaColunas;
    mediaLinhas = (int*)malloc(sizeof(int)*4);
    mediaColunas = (int*)malloc(sizeof(int)*4);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        mediaLinhas[i] = (somaLinha/4);
        somaLinha = 0;

        mediaColunas[i] = (somaColuna/4);
        somaColuna = 0;
    }

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
    printf("Linhas\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", mediaLinhas[i]);
    }

    printf("\nColunas\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", mediaColunas[i]);
    }
}

void exercicioV() {
    printf("\nGerar e imprimir uma matriz de tamanho 4 x 14, onde seus elementos sao da forma:\n");
    printf("a. A[i][j] = 2i + 7j - 2, se i < j\n");
    printf("b. A[i][j] = 3i2- 1, se i = j\n");
    printf("c. A[i][j] = 4i3- 5j2 +1, se i > j.\n");

    int matriz[4][14];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 14; j++) {
            if (i < j) {
                matriz[i][j] = 2*i + 7*j - 2;
            } else if (i == j) {
                matriz[i][j] = 3 * (i*i) - 1;
            } else {
                matriz[i][j] = 4 * (i*i*i) - 5 * (j * j) + 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 14; j++) {
            if (matriz[i][j] >= 10) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("%d  ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

void exercicioW() {
    printf("Ler uma matriz de dimensoes especificadas pelo usuario e imprima a soma das linhas e colunas dessa matriz.\n");

    int quantidadeLinhas, quantidadeColunas;
    int somaLinha = 0;
    int somaColuna = 0;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &quantidadeLinhas);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &quantidadeColunas);

    int matriz[quantidadeLinhas][quantidadeColunas];
    int vetorsomaLinha[quantidadeLinhas], vetorsomaColuna[quantidadeColunas];

    for (int i = 0; i < quantidadeLinhas; i++) {
        for (int j = 0; j < quantidadeColunas; j++) {
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < quantidadeLinhas; i++) {
        for (int j = 0; j < quantidadeColunas; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        vetorsomaLinha[i] = (somaLinha/quantidadeLinhas);
        somaLinha = 0;

        vetorsomaColuna[i] = (somaColuna/quantidadeColunas);
        somaColuna = 0;
    }

    for (int i = 0; i < quantidadeLinhas; i++) {
        for (int j = 0; j < quantidadeColunas; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
    }

    for (int i = 0; i < quantidadeLinhas; i++) {
        for (int j = 0; j < quantidadeColunas; j++) {
            if (matriz[i][j] >= 10) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("%d  ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    
    printf("Linhas\n");
    for (int i = 0; i < quantidadeLinhas; i++) {
        printf("%d ", vetorsomaLinha[i]);
    }

    printf("\nColunas\n");
    for (int i = 0; i < quantidadeColunas; i++) {
        printf("%d ", vetorsomaColuna[i]);
    }
}

int main()
{
    exercicioA();
    exercicioB();
    exercicioC();
    exercicioD();
    exercicioE();
    exercicioF();
    exercicioG();
    exercicioH();
    exercicioI();
    exercicioJ();
    exercicioK();
    exercicioL();
    exercicioM();
    exercicioN();
    exercicioO();
    exercicioP();
    exercicioQ();
    exercicioR();
    exercicioS();
    exercicioT();
    exercicioU();
    exercicioV();
    exercicioW();

    return 0;
}
