#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>

int main(int argc, char const *argv[])
{

    char base  = 0b00000011;
    char c1  = ~(base);
    unsigned char c2  = ~(base);

    system("cls");
    printf("print z pomoca %%u\n");
    printf("c1: %u c2: %u \n\n", c1, c2);
    // jesli uzyje %u na zmiennej signed to wychodza glupoty

    printf("print z pomoca %%d\n");
    printf("c1: %d c2: %d \n\n", c1, c2);

    printf("sizeof check\n");
    printf("c1: %d c2: %d \n\n", sizeof(c1), sizeof(c2));

    print_bits(sizeof(char), &c1);
    print_bits(sizeof(char), &c2);
    return 0;
}
