#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("cls");
    printf("1      ? 1 : 0 | wynik: %d\n",   1      ? 1 : 0);
    printf("0      ? 1 : 0 | wynik: %d\n",   0      ? 1 : 0);
    printf("2/10   ? 1 : 0 | wynik: %d\n",   2/10   ? 1 : 0);
    printf("10 > 5 ? 1 : 0 | wynik: %d\n\n", 10 > 5 ? 1 : 0);
    return 0;
}
