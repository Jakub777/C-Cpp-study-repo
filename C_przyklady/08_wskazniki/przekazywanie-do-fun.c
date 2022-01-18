#include <stdio.h>


void fun1(int * arg1, int * arg2, int arg3)
{
    printf("%p \n", arg1);
    printf("%p \n", arg2);
    printf("%d \n", arg3);
    printf("%p \n", &arg3);
}

int main(int argc, char const *argv[])
{
    int x = 33;
    int* wsk1 = &x;
    int* wsk2 = &x;
    fun1(&x, wsk1, *wsk2);
    // void fun1(int *arg1, int* arg2, int arg3)
    // do funkcji moge przekazac adresy, lub wartosci przez wskaznik
    // adresy, gdy chce arg3
    return 0;
}


