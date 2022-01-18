#include <stdio.h>
#include <stdlib.h>
void fun1(void);
void fun2(int);

int a = 10;
int b = 20;
int* p_a = &a;
int* p_b = &b;

int main(int argc, char const *argv[])
{
    system("cls");
    // nastepuje redefinicja nazwy b w funkcji main. Odniesienie sie do nazwy b
    // w fukcji main odnosi sie do zmiennej lokalnej (np. argumenty funkcji)
    int b = 30;
   // system("cls");
    printf("a: %d, b: %d\n", *p_a, *p_b);

    fun1(); fun2(b); fun3(b); //fun3 poda argument lokalne b do fun4
                     fun3(); // pusta wartosc da warning i wrzuci null
    // tylko zmienne globalne moga byc nadpisane przez funkcje, zmienne lokalne nie
    // to nizej ulega zmianie
    printf("a: %d, b: %d\n", *p_a, *p_b);
    // b ponizej ciagle bylo wartoscia 30, jedynie kopia w funkcji wzrosla do 31
    printf("a: %d, b: %d <- %0p\n", a, b, &b);
    return 0;
}
// fun1 nie przyjmuje argumentow i operuje na zmiennych globalnych
void fun1(void){a++; b--; printf("global a++ i b--\n");}
// fun2 przyjmuje argument i szuka go w ciele funkcji nadrzednej
void fun2(int b)
{
    b++;
    printf("b: %d <- %0p\n", b, &b);
}
void fun3(int b) {fun4(b);}
void fun4(int b) {printf("f3->4: %d\n", b);}