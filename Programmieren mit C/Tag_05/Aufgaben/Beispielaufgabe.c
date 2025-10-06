#include <stdio.h>

int main()
{
    int x;

    printf("Bitte geben sie eine Zahl ein\n");
    scanf("%d", &x);

    //printf("Kontrollausgabe: %d\n", x);
    while (x > 1)
    {
        x = x/2;
        printf("%d\n", x);
    }
    
    printf("Schleife wurde beendet\n");





    return 0;

}