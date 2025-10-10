#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    srand(time(NULL));  // INITIALISIERUNG Zufallsgenerator NUR einmal pro Programm,
                        // Startposition wird ver�ndert anhand der Sekunden ab 01.01.1970

    rand();             // erster Pseudo-Zufallswert nicht nutzen

    int x2 = rand();

    printf("Die Variable x hat den Wert: %d\n",x2);

    // Der Minimalwert aus der Zufallsliste ist: 0
    printf("Das ist die Maximalzahl bei einem rand()-Aufruf %d\n",RAND_MAX); // Der Maxwert = 32767
    // 16-Bit-Systeme: Der Wert 32767 ist der maximale positive Wert, den eine 16-Bit-Ganzzahl (integer) annehmen kann
    // bei 32-Bit-Systemen ist der Maxwert: 2147483647


    // Ohne Anpassung liegt der Zahlenbereich zwischen 0-32767

    // Bei einem W�rfel soll der Zahlenbereich zwischen 1-6 liegen.
    // 6 -> Anzahl der Zufallswerte
    // +1 -> Verschiebung des Wertebereichs
    printf("W�rfelzahl: %d\n",rand()%6+1);

    // Lottozahlen 1-49
    // 6 Lottozahlen erzeugen und auf der Konsole ausgeben
    int i;
    for(i=1;i<=6;i++)
       {
           printf("%d. Lottozahl: %d\n", i,rand()%49+1);
       }


    //Zufallszahlen zwischen 3-6
    printf("10 zufallswerte zwischen 3 und 6\n");
    for(i=1;i<=100;i++)
       {
            printf("Neue Zufallszahl %d\n",rand()%4+3);
       }






}
