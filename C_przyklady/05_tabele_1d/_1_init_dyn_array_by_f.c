#include <stdio.h>
#include <stdlib.h>

int * stworz_tablice(char);

int main(int argc, char const *argv[])
{
    char rozmiar_tablicy = 20;
    int * moja_tablica;

    system("cls");
    //storz tablice = zaalokuj pamiec i nadaj wartosci
    moja_tablica = stworz_tablice(rozmiar_tablicy);
    
    printf("\nM: powrot\n");
    free(moja_tablica);
    //mimo zwolnienia pamieci nadal moge sie do niej odwolywac, nawet za pomica []
    for (int i = 0; i < rozmiar_tablicy; i++){
        printf("M: %d %d\n", i, moja_tablica[i]);
    };
    printf("\nkoniec\n\n");
    free(moja_tablica);
}

int * stworz_tablice(char size)
{
    int * nowa_tablica;
    //alokacja pamieci
        nowa_tablica = (int *) malloc(size * sizeof(int));
    //nadanie wartosci
    printf("F: nadaje wartosci\n");
        for (char i = 0; i < size; i++) {
            nowa_tablica[i]=i*i; printf("%d ", nowa_tablica[i]);
        }
    return nowa_tablica;
}