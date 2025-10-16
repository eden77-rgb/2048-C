#include <stdio.h>
#include <stdlib.h>
#include "include/mouvements.h"
#include "include/Case.h"

void bougerHaut(Case **tab, int size)
{
    for(int i = 1; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(tab[i][j].valeur != 0)
            {
                int a = i;
                while (a > 0 && tab[a - 1][j].valeur == 0)
                {
                    a--;
                }

                if(a != i)
                {
                    tab[a][j].valeur =tab[i][j].valeur;
                    tab[i][j].valeur = 0;
                }
            }
        }
    }
}