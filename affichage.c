#include <stdio.h>
#include <stdlib.h>
#include "include/affichage.h"
#include "include/color.h"
#include "include/case.h"


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

void afficherGrille(Case **tableau, int size)
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
            char c = tableau[i][j];
            int value = (c >= '0' && c <= '9') ? (c - '0') : 0; // convertir caractère → entier
            const char* color = get_case_color(value);           // ✅ appel de la fonction du fichier color.c
            printf("| %s %c \033[0m", color, c);                 // applique la couleur
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


