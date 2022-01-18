#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"
#define MY_TAB_SIZE 10

int main(int argc, char const *argv[])
{
    system("cls");
    
    //inicjalizacja za pomoca {} jest mozliwa,
    //gdy mam okreslony rozmiar tabeli "z palca" (bez zmiennych)
    char moja_tabela1[10] = {
        'q','w','e','r','t',
        'a','s','d','f','g'};
    //taka inicjalizacja jest mozliwa,
    //bo kompilator sam sobie wyliczy ile mam elementow
    char moja_tabela2[] = {
        'q','w','e','r','t',
        'a','s','d','f','g'};
    //taka inicjalizacja jest mozliwa,
    //bo MY_TAB_SIZE to 10 z punktu widzenia kompilatora (stala liczba)
    char moja_tabela3[MY_TAB_SIZE] = {
        'q','w','e','r','t',
        'a','s','d','f','g'};
    
    //printuje znaki
        for (int i = 0; i < MY_TAB_SIZE; i++)
        {
            if (i == 5)
                printf("\n");
            printf("%c ", moja_tabela1[i]);
        }
    //printuje sizeof
        printf("\n%d %d %d", 
        sizeof(moja_tabela1),
        sizeof(moja_tabela2),
        sizeof(moja_tabela3));
    
    return 0;
}
