#include <stdio.h>


int main() {
    int cavalo = 1;
    
    // Mover torre 5 casas para direita
    for (int i = 1; i <= 5; i++)
    {
        printf ("Torre para Direita\n");// Direçao do movimento
    }
    
    // Mover bispo
    for (int b = 1; b <= 5; b++)
    {
        printf ("Bispo para Cima,Direita\n");// Direçao do movimento
    }
    // Mover Rainha
    for (int r = 1; r <= 8; r++)
    {
        printf ("Rainha para Esquerda\n");// Direçao do movimento
    }
    // Mover cavalo
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo para Cima\n");// Direçao do movimento
        }
        printf("Cavalo para Direita\n");// Direçao do movimento
        
    
    }
    

    return 0;
}