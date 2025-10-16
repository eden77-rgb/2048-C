#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int valeur;
    int x;
    int y;
} Case;

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

int main()
{
    return 0;
}
