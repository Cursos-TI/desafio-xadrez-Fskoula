#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moveTorre(int casas)
{
    if (casas > 0)
    {
        printf("Torre Direita\n");
        moveTorre(casas - 1);
    }
}

void moveRainha(int passos)
{
    if (passos > 0)
    {
        printf("Rainha Direita\n");
        moveRainha(passos - 1);
    }
}

void moverCavalo()
{
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }

    for (int j = 0; j < 1; j++)
    {
        printf("Direita\n");
    }
}

int main()
{
    // int bispo = 1, cavalo = 1;

    // TORRE - move-se em linha reta horizontal e vertical. Direita/esquerda ou cima/baixo.
    // Mover a torre cinco casas para direira
    printf("Movendo a Torre\n");
    moveTorre(5);

    // RAINHA - move-se em todas as direções
    // Mover a Rainha oito casas para direita.
    printf("Movendo a Rainha\n");
    moveRainha(8);

    // BISPO - move-se em diagonal, direita/esquerda e cima/baixo juntos
    // Mover o Bispo cinco casas para cima em diagonal para direita.
    /*quando par move para cima, quando impar move parar direita*/
    for (int b = 0; b <= 5; b++)
    {
        printf("Movendo o Bispo\n");
        if (b % 2 == 0)
        {
            printf("Bispo move para cima\n");
        }
        else
        {
            printf("Bispo move para direita\n");
        }
    }

    // CAVALO - move-se em L.
    // Movimento do Cavalo - duas casas para cima e uma para direita
    printf("Movimentos do Cavalo:\n");
    moverCavalo();

    return 0;
}
