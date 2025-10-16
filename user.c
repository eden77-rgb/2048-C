#include <stdlib.h>
#include <stdio.h>
#include "include/user.h"
#include "include/Case.h"
#include "include/mouvements.h"

void Interaction(Case **tab, int size) {
    char input;
    scanf("%c", &input);

    switch (input) {

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