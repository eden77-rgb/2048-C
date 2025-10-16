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
 
int main()
{
    int size = 5;

    Case **tab = malloc(size * sizeof(Case *));
    for (int i = 0; i < size; i++)
    {
        tab[i] = malloc(size * sizeof(Case));
    }
 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            Case c1 = {16, i, j};
            tab[i][j] = c1;
        }
    }
 
    afficherGrille(tab, size);
 
    free(tab);
    return 0;
}