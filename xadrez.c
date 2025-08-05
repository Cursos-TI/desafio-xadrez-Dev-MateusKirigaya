#include <stdio.h>

int main() {
    // Número total de movimentos em L que o cavalo fará
    const int TOTAL_MOVIMENTOS = 5;

    // Posição inicial (opcional, apenas para contexto)
    int linha = 8;  // por exemplo, linha do tabuleiro (1 a 8)
    int coluna = 8; // coluna do tabuleiro (1 a 8)

    printf("Posição inicial do cavalo: (%d, %d)\n\n", linha, coluna);

    // Cada iteração do for representa um movimento em L completo
    for (int movimento = 1; movimento <= TOTAL_MOVIMENTOS; movimento++) {
        printf("Movimento %d em L:\n", movimento);

        // Decide o padrão: par -> 2 para baixo, 1 para esquerda; ímpar -> 1 para baixo, 2 para esquerda
        int passos_baixo = (movimento % 2 == 0) ? 2 : 1;
        int passos_esquerda = (movimento % 2 == 0) ? 1 : 2;

        // Parte vertical ("Baixo") seguida da horizontal ("Esquerda")
        int parte = 0; // 0 = fazer o "Baixo", 1 = fazer o "Esquerda"

        // while usado para iterar as duas partes do L (aninhado dentro do for)
        while (parte < 2) {
            if (parte == 0) {
                // Movimento para baixo: usa for para cada passo individual
                for (int i = 1; i <= passos_baixo; i++) {
                    printf("  Subpasso: Baixo (%d de %d)\n", i, passos_baixo);
                    linha++; // atualiza posição (descendo)
                }
            } else {
                // Movimento para a esquerda: usa for para cada passo individual
                for (int i = 1; i <= passos_esquerda; i++) {
                    printf("  Subpasso: Esquerda (%d de %d)\n", i, passos_esquerda);
                    coluna--; // atualiza posição (indo para a esquerda)
                }
            }
            parte++; // vai para a próxima parte do L
        }

        // Exibe nova posição depois do L completo
        printf("  -> Nova posição do cavalo após o L %d: (%d, %d)\n\n", movimento, linha, coluna);
    }

    return 0;
}
