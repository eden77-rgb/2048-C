#include <stdio.h>
#include <stdlib.h>
#include "include/mouvements.h"
#include "include/Case.h"

void bougerHaut(Case **tab, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (tab[i][j].valeur != 0)
            {
                int a = i;
                while (a > 0 && tab[a - 1][j].valeur == 0)
                {
                    a--;
                }

                if (a > 0 && tab[a - 1][j].valeur != 0)
                {
                    add_valeur(&tab[a - 1][j], &tab[i][j]);

                    int b = i;
                    while (b > 0 && tab[b - 1][j].valeur == 0)
                    {
                        b--;
                    }

                    if (a != i)
                    {
                        tab[a][j].valeur = tab[i][j].valeur;
                        tab[i][j].valeur = 0;
                    }
                }

                else
                {
                    if (a != i)
                    {
                        tab[a][j].valeur = tab[i][j].valeur;
                        tab[i][j].valeur = 0;
                    }
                }
            }
        }
    }
}

void bougerBas(Case **tab, int size)
{
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = 0; j < size; j++)
        {
            if (tab[i][j].valeur == 0)
                continue;

            int a = i;
            while (a < size - 1 && tab[a + 1][j].valeur == 0)
            {
                a++;
            }

            if (a < size - 1 && tab[a + 1][j].valeur != 0)
            {
                if (check_case(&tab[a + 1][j], &tab[i][j]))
                {
                    add_valeur(&tab[a + 1][j], &tab[i][j]);
                }
                else
                {
                    if (a != i)
                    {
                        tab[a][j].valeur = tab[i][j].valeur;
                        tab[i][j].valeur = 0;
                    }
                }
            }
            else
            {
                if (a != i)
                {
                    tab[a][j].valeur = tab[i][j].valeur;
                    tab[i][j].valeur = 0;
                }
            }
        }
    }
}

void bougerGauche(Case **tab, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (tab[j][i].valeur == 0)
                continue;

            int a = i;
            while (a > 0 && tab[j][a - 1].valeur == 0)
            {
                a--;
            }

            if (a > 0 && tab[j][a - 1].valeur != 0)
            {
                if (check_case(&tab[j][a - 1], &tab[j][i]))
                {
                    add_valeur(&tab[j][a - 1], &tab[j][i]);
                }
                else
                {
                    if (a != i)
                    {
                        tab[j][a].valeur = tab[j][i].valeur;
                        tab[j][i].valeur = 0;
                    }
                }
            }
            else
            {
                if (a != i)
                {
                    tab[j][a].valeur = tab[j][i].valeur;
                    tab[j][i].valeur = 0;
                }
            }
        }
    }
}

void bougerDroite(Case **tab, int size)
{
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = 0; j < size; j++)
        {
            if (tab[j][i].valeur == 0)
                continue;

            int a = i;
            while (a < size - 1 && tab[j][a + 1].valeur == 0)
            {
                a++;
            }

            if (a < size - 1 && tab[j][a + 1].valeur != 0)
            {
                if (check_case(&tab[j][a + 1], &tab[j][i]))
                {
                    add_valeur(&tab[j][a + 1], &tab[j][i]);
                }
                else
                {
                    if (a != i)
                    {
                        tab[j][a].valeur = tab[j][i].valeur;
                        tab[j][i].valeur = 0;
                    }
                }
            }
            else
            {
                if (a != i)
                {
                    tab[j][a].valeur = tab[j][i].valeur;
                    tab[j][i].valeur = 0;
                }
            }
        }
    }
}