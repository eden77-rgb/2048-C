#ifndef CASE_H
#define CASE_H

#include <stdbool.h>
#include <time.h>

typedef struct
{
    int valeur;
    int x;
    int y;
} Case;

bool check_case(Case *c1, Case *c2);
void add_valeur(Case *c1, Case *c2);
void generer_case(Case **tab, Case **case_vide, int case_vide_size);

#endif // CASE_H
