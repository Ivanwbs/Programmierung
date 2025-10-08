#include <stdio.h>

int main()
{
    int anzahl, zahl, min, max;

    printf("Gebe bitte die Anzagl der kommenden Zahlen ein:\n");
    fflush(stdin);
    scanf(" %d", &anzahl);

    printf("Gebe bitte deine 1. Zahl einn:\n");
    fflush(stdin);
    scanf(" %d", &zahl);

    min = zahl;
    max = zahl;

    int i =2;

    for (i=2; i<=anzahl; i++)
    {
        printf("Gebe bitte deine %d. Zahl ein:\n", i);
        fflush(stdin);
        scanf(" %d", &zahl);

        if(zahl < min)
        {
            min = zahl;
        }
        if(zahl > max)
        {
            max = zahl;
        }
    }

    printf("Die kleinste Zahl ist: %d\n", min);
    printf("Die groesste Zahl ist: %d\n", max);
    printf("\n\n\n");






    return 0;
}