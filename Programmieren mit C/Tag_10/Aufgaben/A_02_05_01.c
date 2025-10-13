#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[5], zuf, i;

    srand(time(NULL));
    rand();

    for(i = 0; i < 5; i++)
    {
        arr[i] = rand() % 100 + 1;
        printf("Deien Zahlen sind: %d\n", arr[i]);
    }

    zuf = rand() %5;
    printf("Deine zufaellige Zahl ist: %d\n", arr[zuf]);




    printf("\n\n");
    return 0;

}