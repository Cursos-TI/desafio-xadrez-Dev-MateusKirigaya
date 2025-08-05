#include <stdio.h>

// --- Funções recursivas para as peças ---

// Torre: move 5 casas para a direita, recursivamente
void mover_torre_direita(int restante, int casa_atual) {
    if (restante == 0) {
        return; // caso base: sem mais movimentos
    }
    // Cada chamada representa um movimento de uma casa para a direita
    printf("Torre - Casa %d: Direita\n", casa_atual);
    mover_torre_direita(restante - 1, casa_atual + 1); // chamada recursiva
}

// Rainha: move 8 casas para a esquerda, recursivamente
void mover_rainha_esquerda(int restante, int casa_atual) {
    if (restante == 0) {
        return;
    }
    printf("Rainha - Casa %d: Esquerda\n", casa_atual);
    mover_rainha_esquerda(restante - 1, casa_atual + 1);
}

// Bispo: move 5 casas na diagonal para cima e para a direita.
// Usa recursão e, dentro de cada passo, loops aninhados (mesmo que redundantes) para cumprir a exigência.
void mover_bispo_diagonal(int restante, int casa_atual) {
    if (restante == 0) {
        return;
    }

    // Loops aninhados apenas para demonstrar a estrutura: 
    // o bispo se move diagonalmente (Cima e Direita ao mesmo tempo), 
    // então usamos dois laços internos que executam uma única iteração para compor "Cima, Direita".
    for (int i = 0; i < 1; i++) {              // primeiro nível do aninhamento
        for (int j = 0; j < 1; j++) {          // segundo nível do aninhamento
            // Efetivamente esse representa uma casa na diagonal
            printf("Bispo - Casa %d: Cima, Direita\n", casa_atual);
        }
    }

    // Chamada recursiva para o próximo passo da diagonal
    mover_bispo_diagonal(restante - 1, casa_atual + 1);
}

// Cavalo: um movimento em L para cima e à direita (2 para cima, 1 para direita).
// Usa loops com múltiplas variáveis, continue e break.
void mover_cavalo_L() {
    printf("Cavalo - Movimento em L (2 cima, 1 direita):\n");
    int passos_cima = 0;
    int passos_direita = 0;

    // Loop que controla o processo do L; usa múltiplas condições e continue/break
    while (1) {
        // Primeiro: subir duas casas
        if (passos_cima < 2) {
            passos_cima++;
            printf("  Subpasso: Cima (%d de 2)\n", passos_cima);
            continue; // volta para o início até terminar os "cima"
        }

        // Depois: mover uma casa para a direita
        if (passos_direita < 1) {
            passos_direita++;
            printf("  Subpasso: Direita (%d de 1)\n", passos_direita);
            continue;
        }

        // Quando ambos feitos, sai
        break;
    }

    // Informação final sobre o L completo
    printf("  -> Cavalo completou o L: 2 cima e 1 direita\n");
}

int main() {
    // Constantes de quantas casas cada peça se move
    const int TORRE_PASSOS = 5;
    const int BISPO_PASSOS = 5;
    const int RAINHA_PASSOS = 8;

    // Cabeçalho da simulação
    printf("=== Simulação de Movimentação das Peças (Nível Mestre Final) ===\n\n");

    // Movimento do Bispo (recursivo com loops aninhados)
    printf("Movimento do Bispo (diagonal para cima e direita):\n");
    mover_bispo_diagonal(BISPO_PASSOS, 1);
    printf("\n");

    // Movimento da Torre (recursivo)
    printf("Movimento da Torre (para a direita):\n");
    mover_torre_direita(TORRE_PASSOS, 1);
    printf("\n");

    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha (para a esquerda):\n");
    mover_rainha_esquerda(RAINHA_PASSOS, 1);
    printf("\n");

    // Movimento do Cavalo (um L para cima e à direita) com continue/break
    mover_cavalo_L();
    printf("\n");

    return 0;
}
