/*
wsl
gcc -o output/main main.c
./output/main
*/
#include <stdio.h>
#include <stdlib.h>
#include "affichage.c"

int main()
{
    afficherGrille(5);
    return 0;
}