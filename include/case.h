#ifndef CASE_H
#define CASE_H

#include <stdbool.h>

typedef struct
{
    int valeur;
    int x;
    int y;
} Case;

bool check_case(Case *c1, Case *c2);
void add_valeur(Case *c1, Case *c2);

#endif // CASE_H
