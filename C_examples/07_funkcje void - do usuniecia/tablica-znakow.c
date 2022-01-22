#include <stdio.h>
#include <string.h>
#define SIZE 5
#define QUARTER 32
#define VAL_TAB_I *(tab+i) //iterowany ity char stringa
#define VAL_MIRROR *((tab+SIZE-1)-i) //lustrzany element do ValTI
#define TAB_I (tab+i) //wskaznik na ity char stringa

void print_str(char* tab)
{
    printf("%s\n", tab);
}
void revert_case(char* tab)
{
    for (int i = 0; i < strlen(tab); i++)
    {
        printf("%d ", i);
        if (*(tab + i) / QUARTER == 2) *(tab + i) = 'h';
        if (*(tab + i) / QUARTER == 3) *(tab + i) = 'h';
        printf("%d \n", i);
    }
}
void swap_string(char* tab)
{
    for (int i = 0; i < SIZE/2; i++)
    {
        char temp = VAL_TAB_I;
        VAL_TAB_I = VAL_MIRROR;
        VAL_MIRROR = temp;
    }
}

int main(int argc, char const *argv[])
{
    char* imie="Jakub";
    print_str(imie);
    revert_case(imie);
    print_str(imie);
    revert_case(imie);
    print_str(imie);
    swap_string(imie);
    print_str(imie);
    return 0;
}
