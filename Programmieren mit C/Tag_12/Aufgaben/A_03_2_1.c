#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float prozentsatz(float g, float pw)
{
    float prozentwert;
    prozentwert = (pw / g) * 100;
    return prozentwert;
}


int main()
{
    float grundwert, prozentwert;

    printf("Gebe den Grundwert ein:\n");
    fflush(stdout);
    scanf(" %f", &grundwert);

    printf("Gebe den Prozentwert ein:\n");
    fflush(stdout);
    scanf(" %f", &prozentwert);

    prozentwert = prozentsatz(grundwert, prozentwert);

    printf("Das ist dein Prozentsatz: %.2f", prozentwert);



    printf("\n\n");
    return 0;

}