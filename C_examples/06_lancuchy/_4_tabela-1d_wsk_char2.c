#include <stdio.h>
#include <stdlib.h>
#define TAB_SIZE 20

int main(int argc, char const *argv[])
{
    system("cls");
    // wskazniki to tablica elementow typu wskaznik na char
    char* wskazniki[TAB_SIZE];
    
    char litera1 = 'E'; 
    char litera2 = 'D'; 
    char litera3 = 'C'; 
    char litera4 = 'B';
    char litera5 = 'A';
    
    wskazniki[0] = &litera1;
    wskazniki[1] = &litera2;
    wskazniki[2] = &litera3;
    wskazniki[3] = &litera4;
    wskazniki[4] = &litera5;

    wskazniki[2] = "qwerty"; // qwe rty = 6

    for (int i = 0; i < 5; i++)
    {
        printf("%d: %p -> %p -> %c", i, wskazniki+i, wskazniki[i], *wskazniki[i]);
        printf("\n");
    }
    printf("\n");
    // Pamięc zostałą wypełniona "od tyłu"
    // %s pobiera adres poczatkowy i szuka kolejnych bajtów za tym adresem
    // az trafi na null
    // mimo ze w tabeli nie ma jest literki C to w pamieci nadal jest
    printf("%s \n", wskazniki[4]);
    printf("%d \n", sizeof(wskazniki[2]));
    return 0;
}
