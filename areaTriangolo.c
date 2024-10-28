#include <stdio.h>

float base;
float altezza;
int decisione;

int main()
{
    do{
        printf("Inserisci la base del triangolo: ");
        scanf("%f", &base);
        printf("Inserisci l'altezza del triangolo: ");
        scanf("%f", &altezza);
        printf("Area del Triangolo avente:\n-base=%1.2f\n-altezza=%1.2f\n risultato: %1.2f\n", base, altezza, (base*altezza)/2);
        printf("Inserisci 1 per continuare o 0 per terminare il programma: ");
        scanf("%d", &decisione);
    }while(decisione);
    return 0;
}