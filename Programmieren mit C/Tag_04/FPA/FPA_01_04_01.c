// FPA_01_04_01

#include <stdio.h>

int main()
{
    int ersteGanzeZahl, zweiteGanzeZahl;

    printf("Geben Sie bitte eine erste ganze Zahl ein: ");
	fflush(stdin);
	scanf("%d",&ersteGanzeZahl);

    printf("Geben Sie bitte eine zweite ganze Zahl ein: ");
	fflush(stdin);
	scanf("%d",&zweiteGanzeZahl);

    if(ersteGanzeZahl>=zweiteGanzeZahl)
    {
        printf("Das Maximum aus %d und %d ist %d",ersteGanzeZahl,zweiteGanzeZahl,ersteGanzeZahl);
    }
    else
    {
        printf("Das Maximum aus %d und %d ist %d",ersteGanzeZahl,zweiteGanzeZahl,zweiteGanzeZahl);
    }

    printf("\n\n\n");



}