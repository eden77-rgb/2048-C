#include <stdlib.h>
#include <stdio.h>
#include "include/user.h"
#include "include/case.h"
#include "include/mouvements.h"

void Interaction(Case **tab, int size)
{
    char input;

    do
    {
        printf("Entrez une direction (z: haut, s: bas, q: gauche, d: droite): ");
        scanf(" %c", &input);
    } while (input != 'z' && input != 'q' && input != 's' && input != 'd');

    switch (input)
    {

    case 'z':
        bougerHaut(tab, size);
        break;

    case 'q':
        bougerGauche(tab, size);
        break;

    case 's':
        bougerBas(tab, size);
        break;

    case 'd':
        bougerDroite(tab, size);
        break;
    }
}