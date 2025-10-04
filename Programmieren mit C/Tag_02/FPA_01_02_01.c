#include <stdio.h>

int main()
{
    float kantenlaengeKubus=3.75;
    float oberflaeche=6*kantenlaengeKubus*kantenlaengeKubus;
    float volumen=kantenlaengeKubus*3;

    printf("****************************************************\n");
    printf("* Ergebnisse für Kantenlänge kantenlaengeKubus %.2f*\n");
    printf("****************************************************\n");

    printf("Oberflaeche: %.2f", oberflaeche);
    printf("Volumen: %.2f", volumen);
    printf("\n");

    return 0;
}
