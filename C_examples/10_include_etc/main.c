#include <stdio.h>
#include <stdlib.h>
#include "strukturki.h"

void przedstaw_rodzine()
{   
    printf("\nprzedstawiam rodzine:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("id: %d, wiek: %d, kto: %s\n", i, rodzina[i].wiek, rodzina[i].imie);
    }
}

int main(int argc, char const *argv[])
{
    //konkretna osoba to zmienna globalna z pliku strukturki c?
    konkretna_osoba.wiek = 10;
    while (1) 
    {
        system("cls");
        printf("wiek osoby: %d\n", konkretna_osoba.wiek);
        printf("imie osoby: %s\n", konkretna_osoba.imie);
        int j = 0;
        printf("id: %d, wiek: %d, kto: %s\n", j, rodzina[j].wiek, rodzina[j].imie);
        przedstaw_rodzine();
        getchar();
        konkretna_osoba.wiek++;
    };
    return 0;
}
