#include <stdio.h>

int main()
{
    int rchteckBreite, rechteckLänge, fläche, treffer=0;

    do{
        printf("Bitte geben Sie Rechteckbreite ein:\n");
        fflush(stdin);
        scanf("%d", &rchteckBreite);

        printf("Bitte geben Sie Rechtecklaenge ein:\n");
        fflush(stdin);
        scanf("%d", &rechteckLänge);
        
    }
    while (treffer == 0);
    {
        printf("Die Fläche des Rechtecks beträgt: %d\n", rchteckBreite * rechteckLänge);
        fläche = rchteckBreite * rechteckLänge;
        if (fläche > 100)
        {
            treffer = 1;

        }
    
        printf("Schleife wurde beendet\n");
        printf("\n\n\n");
    }


    return 0;
}