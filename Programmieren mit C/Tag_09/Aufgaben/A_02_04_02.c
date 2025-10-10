#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); 
    rand();
    int i;
    int a, b,count = 0;

    for (i = 0; i <6000; i++)
    {
        a = rand()%6+1;
        b = rand()%6+1;
        if(a==b)
        {
            count++;
        }

    }
    
    printf("Die Anzahl der Doppelten Wuerfe ist: %d\n",count);

    
        printf("\n\n");


}