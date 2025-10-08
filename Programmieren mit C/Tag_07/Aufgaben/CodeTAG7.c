#include <stdio.h>

int main()
{
    int start, ziel, sprung, zaehler;

    printf("Nenne mir den Startwert:");
    fflush(stdin);
    scanf(" %d", &start);

    printf("Nenne mir den Zielwert:");
    fflush(stdin);
    scanf(" %d", &ziel);

    printf("Nenne mir den Sprungwert:");
    fflush(stdin);
    scanf(" %d", &sprung);

    zaehler = start;

    for (zaehler; zaehler <= ziel; zaehler = zaehler + sprung)
    {
        printf("%d\n", zaehler);
    }
    printf("Die Schleife endete, denn der Zaehler hat den Wert %d", zaehler);
    printf("\n\n\n");


    return 0;
}