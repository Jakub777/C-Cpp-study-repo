#include <stdio.h>
#include <stdlib.h>

void not  (unsigned char _a, unsigned char _b) {printf("%u\n",    _a = ~_a);}; //255 - 3
void and  (unsigned char _a, unsigned char _b) {printf("%d\n",    _a &= _b);}; //
void  or  (unsigned char _a, unsigned char _b) {printf("%d\n",    _a |= _b);};
void xor  (unsigned char _a, unsigned char _b) {printf("%d\n",    _a ^= _b);};
void left (unsigned char _a, unsigned char _b) {printf("%d\n",    _a <<= 1);};
void right(unsigned char _a, unsigned char _b) {printf("%d\n",    _a >>= 1);};

int main(int argc, char const *argv[])
{
    system("cls");
    unsigned char a = 0b00000011; // = 3
    unsigned char b = 0b00011111; // = 31
    // or - xor = and
    printf("Liczba A: %d \nLiczba B: %d\n\n", a, b);

    //zachodzi integer promotion podczas operacji matematycznej na (char?)
    printf("Opetor bit   not A, wynosi: \t"); not(a, b);
    printf("Opetor bit A and B, wynosi: \t"); and(a, b);
    printf("Opetor bit A or  B, wynosi: \t"); or (a, b);
    printf("Opetor bit A xor B, wynosi: \t"); xor(a, b);
    printf("Opetor bit A <<  1, wynosi: \t");  left(a,b); //razy 2
    printf("Opetor bit A >>  1, wynosi: \t"); right(a,b); //podziel na dwa, odrzuc reszte
    printf("koniec");
    return 0;
}
