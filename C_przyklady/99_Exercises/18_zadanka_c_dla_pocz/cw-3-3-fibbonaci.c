#include <stdio.h>

unsigned int Fibonacci(int Numer){
    int liczba_n;
    int liczba_n_m1 = 1;
    int liczba_n_m2 = 0;
    if (Numer == 0) {printf("%d", liczba_n_m2); return liczba_n_m2;};
    if (Numer == 1) {printf("%d", liczba_n_m1); return liczba_n_m1;};
    for (int i = 2; i <= Numer; i++)
    {
        liczba_n = liczba_n_m2 + liczba_n_m1;
        liczba_n_m2 = liczba_n_m1;
        liczba_n_m1 = liczba_n;
        
    }
    if (Numer >= 2) {printf("%d", liczba_n); return liczba_n;};
}

unsigned int Fibonnaci_2(int Numer){
    if (Numer == 0) return 0;
    if (Numer == 1) return 1;
    int liczba = 1;
    int fib = 1;
    for (int i = 2; i < Numer; i++)
    {
        fib += liczba;           // 1+1,2+1,3+2
        liczba = fib - liczba;   // 2-1,3-1,3-2
    }
    
    return fib;
}

unsigned int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}

int main(int argc, char const *argv[])
{
    unsigned int input = 55;
    unsigned int x = fib    (input);
    printf("%d", x);
    return 0;
}
