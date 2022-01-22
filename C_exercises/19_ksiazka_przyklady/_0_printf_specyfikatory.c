#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("cls");
    float my_float = 1020.3040;
    printf("sposoby zapisu liczby float - 1020.3040\n");
    printf("%f\n", my_float);
    printf("%7.0f\n", my_float);
    printf("%09.2f\n\n", my_float);

    int my_int = 256;
    printf("sposoby zapisu liczby 256:\n");
	printf("%d - dwojkowy\n", my_int);
	printf("%o - osemkowy\n", my_int);
	printf("%x - szestanstkowy", my_int);    

    return 0;
}
