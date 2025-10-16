#include <stdio.h>
#include <stdlib.h>
#include "include/affichage.h"
#include "include/case.h"

 
int main()
{
    int size = 4;

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
 
    afficherGrille(tab, size);
 
    free(tab);
    return 0;
}