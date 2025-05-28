#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.




    // Declaração de variáveis constantes para o número de casas a serem movidas
    const int TORRE_CASAS = 5;
    const int BISPO_CASAS = 5;
    const int RAINHA_CASAS = 8;

    // Movimento da Torre
   
    // A Torre move-se horizontalmente ou verticalmente. Vamos simular 5 casas para a direita.
    printf("Movimento da Torre:\n");
    for(int i = 0; i < TORRE_CASAS; i++) {
        printf("Direita\n");
    }
    printf("\n");

  
    // Movimento do Bispo

    // O Bispo move-se na diagonal. Vamos simular 5 casas para cima e à direita.
    printf("Movimento do Bispo:\n");
    int j = 0;
    while(j < BISPO_CASAS) {
        printf("Cima Direita\n"); // Combinação de direções para representar a diagonal
        j++;
    }
    printf("\n");

    
    // Movimento da Rainha
   
    // A Rainha move-se em todas as direções. Vamos simular 8 casas para a esquerda.
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while(k < RAINHA_CASAS);
    printf("\n");




    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
