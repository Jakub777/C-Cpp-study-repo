#include <stdio.h>
#include <stdlib.h>
// void const * const ptr
// stały wskaźnik (const ptr) tj. nie można zmieniać jego wartości (w tym inkrementować), czyli zmieniać adresu na jaki wskazuje
// na stały typ void, czyli nie można zmieniać wartości na jaką wskazuje.
void print_bits2(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    printf("M ");
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
		printf(" ");
    }
    puts("L");
}

int main(int argc, char const *argv[])
{
    int moja_zmienna = 0b00001111000011110000000011111111;
    int moja_zmienna2 = 255;
    int moja_zmienna3 = 255<<8;
    system("cls");
    print_bits2(sizeof(moja_zmienna), &moja_zmienna);
    print_bits2(sizeof(moja_zmienna2), &moja_zmienna2);
    print_bits2(sizeof(moja_zmienna3), &moja_zmienna3);
    return 0;
}
