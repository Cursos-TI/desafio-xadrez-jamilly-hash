#include <stdio.h>

int main() {
    // Mover a Torre 5 casas para a direita
   
    printf("Movimento da Torre:\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

  
   // Movimentação do Bispo (while): 5 casas na diagonal (Cima Direita)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while(j < 5) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }
    printf("\n");


    // Mover a Rainha 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while(k < 8);
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
