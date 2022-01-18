#include <stdio.h>

int main(int argc, char const *argv[])
{
    float pensja;
    printf("Podaj miesieczne wynagrodzenie, na jakie zaslugujesz:");
    printf(" _______ zl\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &pensja);
    printf("\nTwoja pensja to: %.2f zl\n", pensja);
    return 0;
}