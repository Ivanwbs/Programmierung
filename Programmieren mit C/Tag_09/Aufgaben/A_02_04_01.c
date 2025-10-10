#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    rand();
    int min, max, anzahl, zufallszahl;
   


    printf("Geben Sie die Minimale Zahl ein:\n");
    fflush(stdout);
    scanf("%d", &min);

    printf("Geben Sie die Maximale Zahl ein:\n");
    fflush(stdout);
    scanf("%d", &max);

    printf("Geben Sie die Anzahl der Zufallszahlen ein:\n");
    fflush(stdout);
    scanf("%d", &anzahl);

    for(int i = 1; i <= anzahl; i++)
    {
        zufallszahl = rand() % (max - min + 1) + min;
        printf("Zufallszahl %d: %d\n", i, zufallszahl);
    }




    printf("\n\n");
    return 0;
}