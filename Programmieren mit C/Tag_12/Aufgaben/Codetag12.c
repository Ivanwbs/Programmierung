#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int sucheMin (int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    int a,b;
    printf("Gebe eine Ganzzahl ein:\n");
    fflush(stdout);
    scanf("%d", &a);

    printf("Gebe eine weitere Ganzzahl ein:\n");
    fflush(stdout);
    scanf(" %d", &b);

    int minimum = sucheMin(a,b);
     
    printf("Das ist dein Minimum: %d", minimum);

    printf("\n\n");
    return 0;
}

