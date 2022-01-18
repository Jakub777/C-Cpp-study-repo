#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char znak = 'C';
    system("cls");
    // instrukcja break jest potrzebna inaczej nie da sie wyjsc z bloku switch
    // a switch przejdzie do nastepngo case ()
    switch (znak)
    {
        case 'A':
            printf("A to pierwsza litera alfabetu\n");
            break;
        case 'B':
            printf("B to druga litera alfabetu\n");
            break;
        case 'D':
            printf("D to czwarta litera alfabetu\n");
            break;
        case 'C':
            printf("C to trzecia litera alfabetu\n");
            // break;
        case 'E':
            printf("E to piata litera alfabetu\n");
            break;
        case 'F':
            printf("F to szosta litera alfabetu\n");
            break;
    }
    printf("\n\n\n");
    return 0;
}
