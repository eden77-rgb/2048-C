/*
wsl
gcc -o output/main main.c
./output/main
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "include/affichage.h"
#include "include/color.h"
#include "include/tableau.h"
#include "include/user.h"

int main()
{
    int size = 5;

    Case **tab = creer_grille(size);
    generer_case(tab, case_vide(tab, size), count_case(tab, size));
    afficherGrille(tab, size);

    int count;
    bool running = true;

    while (running)
    {
        count++;
        printf("Round: %d\n", count);

        Interaction(tab, size);
        generer_case(tab, case_vide(tab, size), count_case(tab, size));
        afficherGrille(tab, size);
    }

    free(tab);
    return 0;
}