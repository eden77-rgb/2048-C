#include <stdio.h>
#include <stdlib.h>
#include "include/affichage.h"
 
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
 
int main()
{
    int size = 8;

    char **tab = malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++)
    {
        tab[i] = malloc(size * sizeof(char));
    }
 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
                tab[i][j] = '0';
        }
    }
 
    afficherGrille(tab, size);
 
    free(tab);
    return 0;
}