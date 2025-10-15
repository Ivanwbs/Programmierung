#include<stdio.h>
#include<stdlib.h>
#include<time.h>


float x_hoch_n(float x, int n)
{
    int i;
    float potenz = 1;
    for(i=1; i<n; i++)
    {
        potenz = potenz * x;
    }
    return potenz;
   
}

int main()
{
    float x;
    int n;
    
    printf("Gebe eine Kommazahl ein:\n");
    fflush(stdout);
    scanf(" %f", &x);

    printf("Gebe eine nichtnegative Zahl ein:\n");
    fflush(stdout);
    scanf(" %d", &n);

    float ergebnis = x_hoch_n(x,n);

    printf("%.2f hoch %.2d ist %f", x, n, ergebnis);



    printf("\n\n");
    return 0;

}