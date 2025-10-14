#include <stdio.h>

//Beispiel 1
/*
Begrüssung()
{
    printf("Hallo, zusammen!\n");
}


//Beispiel 2
Lieblingsbuchstabe(char buchstabe)

{

    int i;
    for(i=0; i<10; i++)
    {
      
        printf(" %c\n", buchstabe);
        
    }
}
*/

//Beispiel 3
x_mal_meiZeichen(char buchstabe, int anzahl)
{
    int i;
    for(i=0; i<anzahl; i++)
    {
    printf(" %c\n", buchstabe);

    }
}

//Hauptprogramm
int main()
{
    //Beispiel 1
    /*
    printf("Gleich wird ene Funktion aufgerufen:\n");
    Begrüssung();
    printf("Nun sind wir wieder im Hauptprogramm.\n");
   

    //Beispiel 2
    char buchstabe;
    printf("Sage mir deinen Lieblingsbuchstaben:\n");
    fflush(stdout);
    scanf(" %c", &buchstabe);

    printf("Dein Lieblingsbuchstabe ist:\n");
    Lieblingsbuchstabe(buchstabe);
  */
    //Beispiel 3
    char b;
    int x;
    printf("Gebe bitte deinen Lieblingsbuchstaben ein:\n");
    fflush(stdout);
    scanf(" %c", &b);
    printf("Wie oft soll dieser Wert ausgegeben werden?\n");
    fflush(stdout);
    scanf(" %d", &x);

    printf("Dein Lieblingsbuchstabe ist:\n");
    x_mal_meiZeichen(b, x);
    printf("Jetzt ist aber Genug!\n");

    
}