#include <stdio.h>

int main() {
    // === Configurações de movimento (definidas no código) ===
    const int TORRE_PASSOS = 5;   // Torre: 5 casas para a direita
    const int BISPO_PASSOS = 5;   // Bispo: 5 casas na diagonal cima-direita
    const int RAINHA_PASSOS = 8;  // Rainha: 8 casas para a esquerda

    // --- Movimento da Torre: 5 casas para a direita usando "for" ---
    printf("Movimento da Torre (direita):\n");
    for (int i = 1; i <= TORRE_PASSOS; i++) {
        // Cada iteração representa uma casa percorrida
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // --- Movimento do Bispo: 5 casas na diagonal cima-direita usando "while" ---
    printf("Movimento do Bispo (diagonal cima e direita):\n");
    int contador_bispo = 0;
    while (contador_bispo < BISPO_PASSOS) {
        contador_bispo++;
        // Diagonal representa "Cima, Direita"
        printf("Casa %d: Cima, Direita\n", contador_bispo);
    }
    printf("\n");

    // --- Movimento da Rainha: 8 casas para a esquerda usando "do-while" ---
    printf("Movimento da Rainha (esquerda):\n");
    int contador_rainha = 0;
    do {
        contador_rainha++;
        printf("Casa %d: Esquerda\n", contador_rainha);
    } while (contador_rainha < RAINHA_PASSOS);
    printf("\n");

    return 0;
}
