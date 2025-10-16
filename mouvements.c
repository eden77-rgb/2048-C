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

void bougerBas(Case **tab, int size)
{
    for(int i = 2; i > -1; i--)
    {
        for(int j = 0; j < size; j++)
        {
            if(tab[i][j].valeur != 0)
            {
                int a = i;
                while (a < 3 && tab[a + 1][j].valeur == 0)
                {
                    a++;
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

void bougerGauche(Case **tab, int size)
{
    for(int i = 1; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(tab[j][i].valeur != 0)
            {
                int a = i;
                while (a > 0 && tab[j][a - 1].valeur == 0)
                {
                    a--;
                }

                if(a != i)
                {
                    tab[j][a].valeur =tab[j][i].valeur;
                    tab[j][i].valeur = 0;
                }
            }
        }
    }
}

void bougerDroite(Case **tab, int size)
{
    for(int i = 2; i > -1; i--)
    {
        for(int j = 0; j < size; j++)
        {
            if(tab[j][i].valeur != 0)
            {
                int a = i;
                while (a < 3 && tab[j][a + 1].valeur == 0)
                {
                    a++;
                }

                if(a != i)
                {
                    tab[j][a].valeur =tab[j][i].valeur;
                    tab[j][i].valeur = 0;
                }
            }
        }
    }
}