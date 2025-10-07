#include <stdio.h>

int main()
{
    int eingabe, zaehler = 0;

    do
    {
        printf("Bitte geben Sie eine Zahl ein zum Beenden:\n");
        fflush(stdin);
        scanf(" %d", &eingabe);
        zaehler = zaehler ++;
        printf("Bisherige Summe: %d\n", zaehler);
    }
    while (zaehler = 0);
    printf("Endsumme: %d\n", zaehler);
    printf("\n\n\n");

}