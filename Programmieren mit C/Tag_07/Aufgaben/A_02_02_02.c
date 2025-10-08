#include <stdio.h>

int main()
{
    int anzahRaume, laenge, breite, geflaecheRaum, gesamtFlaeche=0, i;

    printf("Gebe bitte die Anzahl der Raeume ein:\n");
    fflush(stdin);
    scanf(" %d", &anzahRaume);

    for(i=1; i<=anzahRaume; i++)
    {
        printf("Gebe bitte die Laenge des %d. Raumes ein:\n", i);
        fflush(stdin);
        scanf(" %d", &laenge);

        printf("Gebe bitte die Breite des %d. Raumes ein:\n", i);
        fflush(stdin);
        scanf(" %d", &breite);

        geflaecheRaum = laenge * breite;
        gesamtFlaeche = gesamtFlaeche + geflaecheRaum;
    }
    printf("Die Gesamtflaeche der Wohnung betraegt: %dm^2\n", gesamtFlaeche);
    printf("\n\n\n");


}