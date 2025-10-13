#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char arrayA[5];
    char arrayB[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Geben Sie beliebigen Zeichen ein:");
        fflush(stdout);
        scanf(" %c", &arrayA[i]);
        arrayB[4-i] = arrayA[i];
    }

    printf("Ausgabe:\n");
    
    for (i = 0; i < 5; i++)
    {
        printf(" %c\n", arrayB[i]);
    }
    




    printf("\n\n");
    return 0;

}