#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char const *argv[])
{
    // system("cls");
    printf("Wynik eof:\t\t%d\n",     EOF  == -1);
    printf("Wynik null:\t\t%d\n",    NULL ==  0);
    printf("Wynik \'\\0\':\t\t%d\n", '\0' ==  0);
    int* wsk_na_int_null = NULL;
    // ponizej dereferencja NULL, a NULL to wsk void, czyli (void*) 
    // skutkuje bledem i przerwaniem dzialania programu
    // printf("%p\t%d", wsk_na_int_null, *wsk_na_int_null);
    printf("%p\t%d", wsk_na_int_null, wsk_na_int_null);
    printf("\n\n\n");
    return 0;
}
