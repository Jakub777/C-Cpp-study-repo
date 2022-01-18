#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    double * wsk;
    int max = 0;
    int liczba;
    int i = 0;
    // wprowadzenie max
    puts("Podaj maksymalna liczbe elementow (typu double):");
    if (scanf("%d", &max) < 1){
        puts("Niepoprawna liczba, dowidzenia.");
        exit(EXIT_FAILURE);
    }
    // proba zaalokowania pamieci
    wsk = (double *) malloc(max * sizeof(double));
        if (wsk == NULL){
            puts("Przydzial pamieci nie powiodl sie.");
            exit(EXIT_FAILURE);
        }
    // wprowadz elementy do tabalicy dynamicznej
    puts("Podaj elementy (k to koniec):\n");
    while (i < max && scanf("%lf", &wsk[i]) == 1)
        ++i;
    // wyprintuj elementy z tablicy dynamicznej
    printf("Oto %d wprowadzonych elementow:\n", liczba = i);
    for (i = 0; i < liczba; i++) {
        printf("%7.2f ", wsk[i]);
        if (i % 7 == 6)
            putchar('\n');
    }
    if ( i % 7 != 0)
        putchar('\n');
    puts("Koniec.");
    // zwolnij zaalakowana pamiec
    free(wsk);
    return 0;
}
