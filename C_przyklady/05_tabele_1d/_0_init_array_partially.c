#include <stdio.h>
#include <stdlib.h>
#define MY_TAB_SIZE 10
#define HALF_OF_MY_TAB 5

int main(int argc, char const *argv[])
{
    int moja_tabela[MY_TAB_SIZE];
    // tak sie okresla rozmiar, gdy jest przekazywany przez zmienna
    int rozmiar = sizeof (moja_tabela) / sizeof (moja_tabela[0]);

    system("cls");
    //nadaje czesci tabeli wartosci
    for (int i = 0; i < HALF_OF_MY_TAB; i++)
    {
        moja_tabela[i] = i;
    }
    //printuje znaki
    for (int i = 0; i < rozmiar; i++)
    {
        printf("Pos: %d,  Val: %d\n", i, moja_tabela[i]);
    }
    printf("Nie zainicjowane wartosci tabeli przechowauja 'smieci'.\n\n");
    return 0;
}