#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("cls");
    int z = 0; //operatory logiczne zwracaja 0 lub 1
    int a = 5; //sa to ! || &&
    int b = 5; //   == != <= >= 
    int c = 5; //    oraz <  >
    int aa = 55;
    int bb = 55;
    int cc = 55; printf("\n");

    printf("WYNIK : %d\n",   aa || b);
    printf("WYNIK : %d\n",   aa && b);
    printf("WYNIK : %d\n",   z  || z);
    printf("WYNIK : %d\n\n", aa && z);

    printf("WYNIK : %d\n", !c);
    printf("WYNIK : %d\n", !z);
    return 0;
}
