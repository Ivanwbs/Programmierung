#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int zufall (int a, int b)
{
    int zufallszahl;
    zufallszahl = (rand() % (b - a + 1)) + a;
    return zufallszahl;
}

