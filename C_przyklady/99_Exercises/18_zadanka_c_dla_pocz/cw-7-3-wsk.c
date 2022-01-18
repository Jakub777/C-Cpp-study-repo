#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size2 8

const char size = 8;

int main(int argc, char const *argv[])
{
    static int tab[size2];
    for (char i = 0; i < size2; i++){
        //tab[i] = rand();
        tab[i] = i*i;
    }
    for (char i = 0; i < size2; i++) {printf("%d\t", i);}
    printf("\n");
    for (char i = 0; i < size2; i++) {printf("%d\t", *(tab+i));}
    
    *(tab+1) *= 4;
    *(tab+3) *= 4;
    *(tab+size2-1) *= 4;

    printf("\n");
    for (char i = 0; i < size2; i++) {printf("%d\t", *(tab+i));}

    int *p = tab;
    int *q = tab+5;
    p++, q++;
    printf("\n%p\t%p\t\n%d\t%d", p, q, *p, *q);
    char odleglosc = abs(p - q);
    printf("\nodleglosc: %d\n", odleglosc);

    return 0;
}

