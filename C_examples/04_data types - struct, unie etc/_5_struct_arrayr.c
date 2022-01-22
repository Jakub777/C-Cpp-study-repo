#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR_RODZINY 5

typedef struct _struktura_czlowieka
{
    char imie[10];
    char *nazwisko;
    int wiek;
    
} czlowiek_t;

czlowiek_t rodzina[ROZMIAR_RODZINY] = {
        {"kuba", "gruszka", 30},
        {"piotr", "gruszka", 29},
        {"tomasz", "gruszka", 54},
        {"iwona", "gruszka", 52}
    };

int main(int argc, char const *argv[])
{
    system("cls");
    printf("start\n");
    for (int i = 0; i < ROZMIAR_RODZINY; i++)
    {
        printf("%s %s %d\n",rodzina[i].imie, rodzina[i].nazwisko, rodzina[i].wiek);
    };
    printf("koniec\n\n\n\n\n");

    

    return 0;
}