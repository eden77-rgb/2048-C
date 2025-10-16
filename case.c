#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "include/tableau.h"
#include "include/case.h"


bool check_case(Case *c1, Case *c2)
{
    if (c1->valeur == c2->valeur)
    {
        return true;
    }

    return false;
}

void add_valeur(Case *c1, Case *c2)
{
    if (check_case(c1, c2))
    {
        c1->valeur += c2->valeur;
        c2->valeur = 0;
    }
}

void generer_case(Case **tab, Case **case_vide, int case_vide_size) 
{
    srand(time(NULL));

    for (int i = 0; i < 2; i++)
    {
        int case_random = rand() % case_vide_size;

        Case *c1 = case_vide[case_random];
        c1->valeur = 2;

        tab[c1->x][c1->y] = *c1;
    }
}
