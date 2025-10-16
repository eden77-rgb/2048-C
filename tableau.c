#include <stdio.h>
#include <stdlib.h>
#include "include/affichage.h"
#include "include/color.h"
 
void affiche(char **tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c ", tab[i][j]);
        
        }
        printf("\n");
    }  
}

Case **creer_grille(int size)
{
    Case **tab = malloc(size * sizeof(Case *));
    for (int i = 0; i < size; i++)
    {
        tab[i] = malloc(size * sizeof(Case));
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            Case c1 = {0, i, j};
            tab[i][j] = c1;
        }
    }

    return tab;
}

Case **case_vide(Case **tab, int size) 
{
    Case **tab_vide = malloc(size * size * sizeof(Case *));
    int compt = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (tab[i][j].valeur == 0)
            {
                tab_vide[compt] = &tab[i][j];
                compt++;
            }
        }
    }
    
    return tab_vide;
}

int count_case(Case **tab, int size) 
{
    int compt = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (tab[i][j].valeur == 0)
            {
                compt++;
            }
        }
    }

    return compt;
}

