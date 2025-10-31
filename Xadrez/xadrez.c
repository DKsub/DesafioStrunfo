#include <stdio.h>

// ------------------ FUNÇÕES RECURSIVAS ------------------

// Torre: movimento horizontal para a direita
void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Direita\n", atual);
    moverTorre(casas, atual + 1);
}

// Rainha: movimento horizontal para a esquerda
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(casas, atual + 1);
}

// Bispo: movimento diagonal para cima e à direita
void moverBispoRecursivo(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Cima, Direita\n", atual);
    moverBispoRecursivo(casas, atual + 1);
}

// ------------------ BISPO COM LOOPS ANINHADOS ------------------
// Loop externo: vertical (cima), interno: horizontal (direita)
void moverBispoComLoops(int linhas, int colunas) {
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= colunas; j++) {
            if (i == j) {
                printf("Diagonal %d: Cima, Direita\n", i);
            }
        }
    }
}

// ------------------ CAVALO COM LOOPS COMPLEXOS ------------------
// Movimento em "L": duas casas para cima e uma para a direita
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");
    for (int m = 1; m <= movimentos; m++) {
        int vertical = 0;
        int horizontal = 0;

        while (vertical < 2) {
            vertical++;
            if (vertical == 1) {
                printf("Movimento %d - Etapa %d: Cima\n", m, vertical);
                continue;
            }
            printf("Movimento %d - Etapa %d: Cima\n", m, vertical);
        }

        for (horizontal = 1; horizontal <= 1; horizontal++) {
            if (horizontal == 1) {
                printf("Movimento %d - Etapa 3: Direita\n", m);
                break;
            }
        }
    }
}

// ------------------ MAIN ------------------

int main() {
    // Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5, 1);

    printf("\n");

    // Bispo: 5 casas na diagonal (recursivo)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5, 1);

    // Bispo com loops aninhados (5x5)
    moverBispoComLoops(5, 5);

    printf("\n");

    // Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(8, 1);

    printf("\n");

    // Cavalo: 3 movimentos em "L" (duas para cima, uma para a direita)
    moverCavalo(3);

    return 0;
}
