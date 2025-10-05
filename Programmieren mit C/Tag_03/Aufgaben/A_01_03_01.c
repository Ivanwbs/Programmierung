// A_01_03_01

#include <stdio.h>

int main()
{
    float breriteRechteck, hoeheRechteck, flaecheRechteck;

    printf("Geben Sie bitte die Breite des Rechteckes ein: ");
    fflush(stdin);
    scanf("%f", &breriteRechteck);

    printf("Geben Sie bitte die Hoehe des Rechteckes ein: ");
    fflush(stdin);
    scanf("%f", &hoeheRechteck);


    flaecheRechteck = breriteRechteck * hoeheRechteck;

    printf("Due Flaeche de Rechteckes betraegt: %.2f \n\n2", flaecheRechteck);



}
