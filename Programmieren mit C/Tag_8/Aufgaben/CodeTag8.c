#include <stdio.h>

int main()
{
    int a, b;
    printf("Geben Sie bitte eine belibige Zahl ein: ");
    fflush(stdout);
    scanf("%*d", &a);

    printf("Geben Sie bitte eine belibige Zahl ungleich 0 ein: ");
    fflush(stdout);
    scanf("%d", &b);

    int division = a / b;
    int restwert = a % b;
    
    printf("%d geteilt durch %d ergibt: %d und hat restwert von: %d", a, b, division, restwert);

    return 0;
}