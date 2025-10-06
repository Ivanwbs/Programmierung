#include <stdio.h>

int main(void)
{
    int auswahl, anzahl, zaehler=0;
    char zeichen;

    printf("Wählen Sie ein Zeichen ein:\n");
    fflush(stdin);
    scanf("%c", &zeichen);
    
    printf("Geben Sie Anzahl der zeichen ein\n");
    fflush(stdin);
    scanf("%d", &anzahl);

    printf("Waehlen Sie bitt bzg. der Ausgabe-Form:\n");
    printf("(1) Auswahl nebeneinander\n");
    printf("(2) Auswahl untereinander\n");
    fflush(stdin);
    scanf("%d", &auswahl);

    
    while (zaehler < anzahl)
    {
        printf("%c", zeichen);
        if(auswahl == 2)
        {
            printf("\n");
        }
        
        zaehler++;
    }
    
    printf("\n\n\n");
    system("pause");


    return 0;
}
