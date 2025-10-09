#include <stdio.h>

int main()
{
    int x;

    do
    {
        printf("Tippe eine ganze Zahl ein\n");
        fflush(stdout);
        scanf("%*d", &x);
    }
    while(x % 10 != 0);
    printf("%d ist eine durch 10 teilbare Zahl\n", x);


    return 0;
}