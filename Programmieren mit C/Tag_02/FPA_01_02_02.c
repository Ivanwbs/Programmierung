//FPA_01_02_02

#include <stdio.h>

int main()
{
    float kapital = 100;
    int jahr = 1;
    float prozent = 3;

    printf("Startkapital betraegt: %.2f Euro\n", kapital);

    kapital=kapital * (100+prozent)/100;
    printf("Kapital nach %d einem Jahr: %.2f Euro \n", jahr, kapital);

    kapital=kapital * (100+prozent)/100;
    printf("Kapital nach %d einem Jahr: %.2f Euro \n", jahr, kapital);

    kapital=kapital * (100+prozent)/100;
    printf("Kapital nach %d einem Jahr: %.2f Euro \n", jahr, kapital);

    kapital=kapital * (100+prozent)/100;
    printf("Kapital nach %d einem Jahr: %.2f Euro \n", jahr, kapital);

    kapital=kapital * (100+prozent)/100;
    printf("Kapital nach %d einem Jahr: %.2f Euro \n", jahr, kapital);


    printf("\n");
}
