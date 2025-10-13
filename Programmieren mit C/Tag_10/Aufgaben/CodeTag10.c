#include <stdio.h>

int main()
{

    /*
    a) Gegeben sei ein Array mit 10 Elementen.
    b) Mittels einer Eingabeschleife soll dem User die M�glichkeit gegeben werden,
    alle 10 Elemente mit ganzen Zahlen zu f�llen.
    c) Nach dieser Schleife soll zur Kontrolle der Inhalt aller 10 Elemente auf der Konsole
    ausgegeben werden. Danach endet das Programm.*/

    //Variable, kein Array (Datentyp int)
    int zahl;
    //in einer Variablen kann nur eine Zahl gespeichert werden, ich kann immer wieder einen neuen Wert an dem
    //Speicherort abspeichern, aber eben nur einen Wert, der alte geht dann verloren/ wird �berschrieben
    zahl = 5;
    zahl = 10;
    zahl = 12;
    printf("Deine Zahl hat den Wert: %d\n\n", zahl); //gespeichert ist NUR die Letzte Zahl 12

    //a)
    // Wir brauchen einen Speicherort, an dem viele INT-WERTE gespeichert werden k�nnen
    // L�sung ist ein Array, daf�r muss ich nat�rlich sagen, wieviele Werte gespeichert werden k�nnen.
    // In unserem Beispiel 10 Werte
    int eingabe[10];
    eingabe[0] = 5;
    eingabe[1] = 16;
    eingabe[2] = 17;
    eingabe[3] = 5465;
    eingabe[4] = 1111;
    eingabe[5] = 120;
    eingabe[6] = 45;
    eingabe[7] = 37;
    eingabe[8] = 120;
    eingabe[9] = 12;
    printf("Das ist eine Zahl aus deinem Array: %d\n\n", eingabe[7]);


    int i =0;

    //b)
    for(i=0; i<10; i++)
    {
        printf("Lieber User tippe mir die %d. Zahl ein:",i+1);
        fflush(stdin);
        scanf("%d", &eingabe[i]);
    }

    //c)
    for(i=0; i<10; i++)
    {
        printf("Ausgabe der %d. Zahl: %d\n",i+1,eingabe[i]);
    }



    return 0;



}
