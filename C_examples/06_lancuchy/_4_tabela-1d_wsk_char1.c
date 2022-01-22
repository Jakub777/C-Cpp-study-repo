#include <stdio.h>
#include <stdlib.h>
#define slowaSIZE 20

int main(int argc, char const *argv[])
{
    system("cls");
    //w odroznieniu od int*[] i char*[] tutaj mozna wpisac "slowo"
    char* slowa[slowaSIZE] = {
        "impedancja",
        "rezystancja",
        "konduktancja",
        "susceptancja"
    };
    printf("ADR:slowa,    ADR:slowa[i],   VAL: slowa[i]\n");
    for (int i = 0; i < slowaSIZE; i++)
    {
        printf("%0p -> %0p -> %s \n", slowa+i, slowa[i], slowa[i]);
    }
    printf("Koniec petli 1\n\n");

    for (int i = 0; i < slowaSIZE; i++)
    {
        printf("%0p -> ",  slowa+i);
        printf("%0p -> ",  slowa[i]);
        printf( "%c -> ", *slowa[i]);
        printf( "%s\n",    slowa[i]);
    }
    printf("Koniec petli 2.\n");
    return 0;
}
