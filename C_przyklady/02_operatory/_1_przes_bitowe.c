#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("cls");
    #define LICZBA 3
    // liczba 3  to 0b0000 0011
    // dodajac     0000 0011 + 0000 1100   + 0011 0000   + 1100 0000
    int zmienna1 =    LICZBA + (LICZBA<<2) + (LICZBA<<4) + (LICZBA<<6);
    // powinno wyjsc 1111 1111 czyli 255
    printf("%d", zmienna1);
    return 0;
}
