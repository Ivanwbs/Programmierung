#include <stdio.h>

int main()
{
    int StartKapital, ZielKapital, aktuellesKapital, jahr;
    float prozentstz;

    printf("Bitte geben sie Start Kapital ein\n");
    fflush(stdin);
    scanf(" %d", &StartKapital);

    printf("Bitte geben sie Ziel Kapital ein\n");
    fflush(stdin);
    scanf(" %d", &ZielKapital);

    printf("Bitte geben sie den Prozentsatz ein\n");
    fflush(stdin);
    scanf(" %f", &prozentstz);

    aktuellesKapital = StartKapital;
    jahr = 0;

    while (aktuellesKapital < ZielKapital)
    {
        aktuellesKapital = aktuellesKapital * (prozentstz+100)/100;
        jahr++;
        //jahr += 5;
       
    }
    
    printf("Nach %d Jahren beträgt ihr Kapital %d Euro\n", jahr, aktuellesKapital);





    return 0;

}