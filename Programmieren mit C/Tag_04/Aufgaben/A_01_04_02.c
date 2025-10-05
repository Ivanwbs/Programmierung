// A_01_04_02

#include <stdio.h>

int main()
{
    float einzelpreis,gesamtpreis;
    int anzahl;

    printf("Geben Sie bitte den Einzelpreis pro Ticket ein (in Euro): ");
    fflush(stdin);
    scanf("%f",&einzelpreis);

    printf("Geben Sie bitte die Anzahl der Personen ein: ");
    fflush(stdin);
    scanf("%d",&anzahl);

    // Verzweigung ***********************************************************************************************
    if(anzahl>4)
    {
        gesamtpreis=einzelpreis*anzahl*0.9;
    }
    else
    {
        gesamtpreis=einzelpreis*anzahl;
    }

    // Alternative Verzweigung ************************************************************************************
    /*
    gesamtpreis=einzelpreis*anzahl;
    if(anzahl>4)
    {
        gesamtpreis=gesamtpreis*0.9;
    }

    Erläuterung:
    gesamtpreis=einzelpreis*anzahl wird AUF JEDEN FALL gerechnet (also VOR) der Verzweigung => dies ist bereits der korrekte Preis bei maximal 4 Besuchern
    NUR FALLS ANZAHL>4 wird 10% abgezogen (in diesem Fall wird also kein else benötigt)
    */

    printf("Gesamtpreis: %.2f Euro",gesamtpreis);
}
