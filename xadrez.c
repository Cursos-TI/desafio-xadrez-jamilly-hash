#include <stdio.h>

int main() {

    // Movimentação da Torre (usando estrutura de repetição for)
    // A Torre se move 5 casas para a direita. Para cada casa percorrida,
    // será exibida a direção "Direita" no console.
   
    printf("Movimento da Torre:\n");
    for(int i = 0; i < 5; i++) {  // Loop for para contar de 0 a 4 (5 vezes)
        printf("Direita\n");  // Impressão da direção para cada casa
    }
    printf("\n"); // Espaço para separar a saída das outras peças

  
 
    // Movimentação do Bispo (usando estrutura de repetição while)
    // O Bispo se move na diagonal superior direita (Cima + Direita).
    // Para cada uma das 5 casas, imprimimos "Cima" e "Direita" para
    // representar a movimentação diagonal (combinação de direções).
    printf("Movimento do Bispo:\n");
    int j = 0;                   // Inicializa a variável de controle do loop
    while(j < 5) {               // Continua enquanto j for menor que 5
        printf("Cima\n");        // Direção vertical da diagonal
        printf("Direita\n");     // Direção horizontal da diagonal
        j++;                     // Incrementa a variável de controle
    }
    printf("\n"); // Espaço para separar a saída das outras peças


   
    // Movimentação da Rainha (usando estrutura de repetição do-while)
    // A Rainha se move 8 casas para a esquerda. Para cada casa percorrida,
    // será exibida a direção "Esquerda" no console.
    printf("Movimento da Rainha:\n");
    int k = 0; // Inicializa a variável de controle do loop
    do {
        printf("Esquerda\n"); // Impressão da direção para cada casa
        k++; // Incrementa a variável de controle
    } while(k < 8); // Continua enquanto k for menor que 8
    printf("\n"); // Espaço final







    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0; // Retorno 0 indica que o programa terminou 
