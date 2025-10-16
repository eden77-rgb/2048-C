#include <stdio.h>

void afficher()
{
    printf("-------- 2048 --------\n\n");
    
    for(int i = 0; i < 4; i++)
    {

        printf("-------------------\n");

        for (int j = 0; j < 4; j++)
        {
            printf("|     ");
        }
        printf("\n");
    }
    
    printf("-------------------\n");
    

}