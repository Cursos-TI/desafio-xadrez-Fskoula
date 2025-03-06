#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* Utilizar apenas as estruturas de repetição for, while e 
 do-while, uma para cada peça do jogo.*/

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 1, bispo = 1, rainha = 1;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    /*TORRE - move-se em linha reta horizontal e vertical. Direita/esquerda ou cima/baixo.
     Mover a torre cinco casas para direira. */ 
    for (torre = 0; torre < 5; torre++)
    {
        printf("Torre move uma casa para Direita\n\n");
    }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    /* BISPO - move-se em diagonal, direita/esquerda e cima/baixo juntos 
     Mover o Bispo cinco casas para cima em diagonal para direita. */
    do
    {
        printf("Bispo move uma casa para cima à Direita\n\n");
        bispo++;

    } while (bispo <= 5);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    /* RAINHA - move-se em todas as direções
     Mover a Rainha oito casas para esquerda. */
    while (rainha <= 8)
    {
        printf("Rainha move uma casa para Esquerda\n\n");
        rainha++;
    }

    return 0;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
}
