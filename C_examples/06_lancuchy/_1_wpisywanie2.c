#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char imie[] = "Jakub";
    *(imie + 2) = '0';
    system("cls");
    printf("Rozmiar zmiennej imie (wsk): %d\n", sizeof(imie));
    printf("Imie: %s\n", imie);
    printf("Dlugosc imienia: %d\n", strlen(imie));
    for (int i = 0; i < strlen(imie); i++) {
        printf("%0p -> %c\n", imie+i, *(imie+i));
    }
    return 0;
}
