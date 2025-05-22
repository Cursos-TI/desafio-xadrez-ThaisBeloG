#include <stdio.h>

// ---------- Função recursiva para mover a Torre ----------
void moverTorre(int casas) {
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// ---------- Função recursiva para mover a Rainha ----------
void moverRainha(int casas) {
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ---------- Função recursiva + loop aninhado para o Bispo ----------
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0)
        return;

    // Loop externo: movimento vertical (Cima)
    for (int i = 0; i < vertical; i++) {
        // Loop interno: movimento horizontal (Direita)
        for (int j = 0; j < horizontal; j++) {
            printf("Cima Direita\n");
            break; // Executa um passo na diagonal por iteração externa
        }
    }

    // Recursivamente reduzir as casas restantes
    moverBispo(vertical - 1, horizontal - 1);
}

// ---------- Movimento complexo do Cavalo com loops aninhados ----------
void moverCavalo() {
    int movimentos = 1; // Número de movimentos completos em L

    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");

    for (int i = 0; i < movimentos; i++) {
        int casasCima = 2;
        int casasDireita = 1;

        for (int j = 0; j < casasCima + casasDireita; j++) {
            if (j < casasCima) {
                printf("Cima\n");
                if (j == 1) continue; // Avança após 2 casas para cima
            } else {
                printf("Direita\n");
                break; // Finaliza o movimento em L
            }
        }
    }
}

int main() {
    // ---------- Movimento da Torre ----------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    // ---------- Movimento do Bispo ----------
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 5;
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // ---------- Movimento da Rainha ----------
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // ---------- Movimento do Cavalo ----------
    moverCavalo();

    return 0;
}
