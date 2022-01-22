#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // tablica 10 elementowa zmiennych typu char
    char tab_1[10];
    // tablica 10 elementowa wskaznikow na char
    char* tab_2[10];
    // wskaznik na 10 elementowa tablice zmiennych typu int
    int (*wsk_1)[10];
    // wskaznik na 10 elementowa tablice wskaznikow na char
    char* (*wsk_2)[10];

    system("cls");
    printf("size of tab_1: %d\n", sizeof(tab_1));
    printf("size of tab_2: %d\n", sizeof(tab_2));
    printf("size of wsk_1: %d\n", sizeof(wsk_2));
    printf("size of wsk_2: %d\n", sizeof(wsk_2));
    return 0;
}
