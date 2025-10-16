#include <stdio.h>
#include <stdlib.h>
#include "include/mouvements.h"
#include "include/Case.h"

void bougerHaut(Case **tab, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j < size; j++)
        {
            add_valeur(&tab[i][j], &tab[i][j-1]);
        }
    }
}