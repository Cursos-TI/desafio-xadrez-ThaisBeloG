#include <stdio.h>

int main() {
    // ----------- Torre -----------
    // A torre se move em linha reta: vamos simular 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------- Bispo -----------
    // O bispo se move na diagonal: vamos simular 5 casas para cima e à direita
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ----------- Rainha -----------
    // A rainha se move em todas as direções: vamos simular 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // ----------- Cavalo -----------
    // O cavalo se move em "L": 2 casas para baixo e 1 casa para a esquerda
    // Usando loops aninhados (for + while)

    int movimentosCavalo = 1; // apenas 1 movimento em L neste desafio
    printf("Movimento do Cavalo (2 casas para Baixo, 1 casa para a Esquerda):\n");

    for (int i = 0; i < movimentosCavalo; i++) {
        int passo = 0;

        // Duas casas para baixo
        while (passo < 2) {
            printf("Baixo\n");
            passo++;
        }

        // Uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
