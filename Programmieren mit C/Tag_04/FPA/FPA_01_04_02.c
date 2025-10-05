// FPA_01_04_02

#include <stdio.h>

int main()
{
    char zeichen1;
    char zeichen2;

	printf("Geben Sie bitte ein beliebiges zeichen ein:  ");
	fflush(stdin);
	scanf("%c",&zeichen1);

	printf("Geben Sie bitte nocheinmal das SELBE Zeichen ein: ");
	fflush(stdin);
	scanf("%c",&zeichen2);

    if(zeichen1==zeichen2)
    {
        printf("\nHervorragend! Sie scheinen mir ein echter Zeichensatz-Experte zu sein!");
    }
    else
    {
        printf("\nSind Sie sicher, dass %c und %c identische Zeichen sind???", zeichen1, zeichen2);
    }

    printf("\n\n\nDas Programm endet nun!\n\n\n");



}