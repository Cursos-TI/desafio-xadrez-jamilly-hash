#include <stdio.h>  

// Função recursiva para mover a Torre (direita)
void moverTorre(int casas_restantes) {
    if (casas_restantes <= 0) {
        return; // Condição de parada
    }
    printf("Direita\n"); // Movimento da Torre para a direita
    moverTorre(casas_restantes - 1); // Chamada recursiva
}

// Função recursiva para mover a Rainha (esquerda)
void moverRainha(int casas_restantes) {
    if (casas_restantes <= 0) {
        return; // Condição de parada
    }
    printf("Esquerda\n"); // Movimento da Rainha para a esquerda
    moverRainha(casas_restantes - 1); // Chamada recursiva
}

// Função recursiva para a parte vertical do movimento do Bispo
// loops aninhados para a parte horizontal
void moverBispo(int casas_restantes_vertical, int casas_horizontal) {
    if (casas_restantes_vertical <= 0) {
        return; // Condição de parada para a recursão
    }

    // Movimento vertical ("Cima")
    printf("Cima\n");

    // Loop aninhado para o movimento horizontal (direita)
    for (int i = 0; i < casas_horizontal; i++) {
        printf("Direita\n");
    }

    // Chamada recursiva reduzindo a quantidade de casas verticais
    moverBispo(casas_restantes_vertical - 1, casas_horizontal);
}

int main() {
    // Movimentação da Torre (recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(5); // Move 5 casas para a direita
    printf("\n");

    // Movimentação do Bispo (recursiva + loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1); // Move 5 casas "Cima" e 1 casa "Direita" a cada movimento
    printf("\n");

    // Movimentação da Rainha (recursiva)
    printf("Movimento da Rainha:\n");
    moverRainha(8); // Move 8 casas para a esquerda
    printf("\n");

    // Movimentação do Cavalo (loops complexos)
    printf("Movimento do Cavalo:\n");

    const int casas_cima = 2;    // Número de casas para cima
    const int casas_direita = 1; // Número de casas para a direita

    // Loop externo para o movimento vertical (para cima)
    for (int i = 0; i < casas_cima; i++) {
        if (i == 2) {
            // Exemplo de uso de 'continue' (pula esta iteração)
            continue;
        }
        printf("Cima\n");
    }

    // Loop interno para o movimento horizontal (para a direita)
    int j = 0;
    while (j < casas_direita) {  // Corrigido erro de sintaxe
        if (j > 0) {
            // Exemplo de 'break' para interromper o loop
            break;
        }
        printf("Direita\n");
        j++;
    }

    printf("\n");

    return 0;
}