#include <stdio.h>

int main() {
    // ==============================================================
    // Simulação dos movimentos das peças de xadrez
    // Peças: Torre, Bispo e Rainha
    // Estruturas utilizadas:
    //  - for     → Torre
    //  - while   → Bispo
    //  - do-while → Rainha
    // ==============================================================

    // ---------------------------
    // TORRE (usa estrutura FOR)
    // ---------------------------
    // Movimento: 5 casas para a direita
    int casasTorre = 5;
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // ---------------------------
    // BISPO (usa estrutura WHILE)
    // ---------------------------
    // Movimento: 5 casas na diagonal para cima e à direita
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("=== Movimento do BISPO ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }
    printf("\n");

    // ---------------------------
    // RAINHA (usa estrutura DO-WHILE)
    // ---------------------------
    // Movimento: 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n=== Fim da simulação! ===\n");

    return 0;
}
