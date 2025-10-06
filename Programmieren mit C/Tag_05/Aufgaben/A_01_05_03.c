#include <stdio.h>

int main(void)
{
    float zahl1, zahl2;
    char nochmal = 'j';

    while (nochmal =='j')
    {
        printf("Geben Sie erste Kommazahl ein: ");
        fflush(stdin);
        scanf(" %f", &zahl1);
    
        printf("Geben Sie zweite Kommazahl ein: ");
        fflush(stdin);

        printf("Das Produkt aus %f und %f lautet: %.2f (auf 2 nachkommastellen gerundet)", zahl1, zahl2, zahl1*zahl2);

        printf("\n\nMoechten Sie nochmal? (j/n) -> ");
        fflush(stdin);
        scanf("%c", &nochmal);
    }
    
    printf("\n\nDann eben nicht mehr\n\n\n");
    //system("pause");



}
