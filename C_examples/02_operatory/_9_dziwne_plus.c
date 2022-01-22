#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("cls");
    char      a = 1;
    short int b = 1;
    int       c = 1;
    printf("tabela size of\n");
    printf("a: %+d, b: %+d, c: %+d\n", sizeof( a), sizeof( b), sizeof( c));
    printf("a: %+d, b: %+d, c: %+d\n", sizeof(+a), sizeof(+b), sizeof(+c));
    printf("a: %+d, b: %+d, c: %+d\n", sizeof(-a), sizeof(-b), sizeof(-c));
    printf("a: %+d, b: %+d, c: %+d\n", sizeof( a), sizeof( b), sizeof( c));
    printf("tabela value 1\n");
    printf("a: %+d, b: %+d, c: %+d\n", ( a), ( b), ( c));
    printf("a: %+d, b: %+d, c: %+d\n", (+a), (+b), (+c));
    printf("a: %+d, b: %+d, c: %+d\n", (-a), (-b), (-c));
    printf("a: %+d, b: %+d, c: %+d\n", ( a), ( b), ( c));
    return 0;
}
