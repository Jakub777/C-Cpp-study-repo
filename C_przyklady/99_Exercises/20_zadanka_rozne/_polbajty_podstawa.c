#include <stdio.h>

int main(int argc, char const *argv[])
{
    //unsigned char bajt = 0xBA;
    unsigned int bajt = 0xBA;
    printf("%X = %d\n\n", bajt, bajt);

    unsigned char bity_0_3 = bajt & 0b00001111;
    unsigned char bity_3_7 = bajt & 0b11110000;

    printf("bity 0-3: %d\n", bity_0_3);
    printf("bity 4-7: %d\n\n", bity_3_7);

    unsigned char part1 = bity_0_3 << 4;
    printf("F: part1: %d\n", part1);

    unsigned char part2 = bity_3_7 >> 4;
    printf("F: part2: %d\n\n", part2);

    unsigned char wynik = 0;
    wynik |= part1;
    wynik |= part2;
    printf("%X = %d\n\n", wynik, wynik);

    return 0;
}
