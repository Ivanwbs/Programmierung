#include <stdio.h>	
//#include <windows.h>
	
	
int main()	
{	
    //system("chcp 1252");	
    //system("cls");	

    int neueGeheimzahl, bestätigung;

    do
    {
        printf("Geben Sie eine neue Geheimzahl ein: ");
        fflush(stdin);
        scanf("%d", &neueGeheimzahl);

        printf("Geben Sie die Geheimzahl zur Bestätigung erneut ein: ");
        fflush(stdin);
        scanf("%d", &bestätigung);
        system("clear");
    }
    while(neueGeheimzahl != bestätigung);

    printf("Die neue Geheimzahl '%d' wurde erfolgreich gespeichert!\n", neueGeheimzahl);
    printf("\n\n\n");


}