#include <stdio.h>
#include <stdlib.h>
#include "include/affichage.h"


void afficher2048(int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("======");
    }
    printf("\n");
    
    for(int i = 0; i < size; i++)
    {
        printf("   ");
    }

    printf("2048\n");

    for(int i = 0; i < size; i++)
    {
        printf("======");
    }
    printf("\n\n");
}

void afficherGrille(char **tableau, int size)
{
    afficher2048(size);

    for(int i = 0; i < size; i++)
    {
        for(int f = 0; f < size; f++)
        {
            printf("------");
        }

        printf("-");
        printf("\n");

        for (int j = 0; j < size; j++)
        {
            printf("|  %c  ", tableau[i][j]);
        }

        printf("|     ");
        printf("\n");
    }
    
        for(int f = 0; f < size; f++)
        {
            printf("------");
        }
        
        printf("\n");
}


