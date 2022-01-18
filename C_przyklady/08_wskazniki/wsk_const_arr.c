#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>
#include <string.h>
#define MY_SIZE 100

int main(int argc, char const *argv[])
{
    const int my_array[MY_SIZE];
    // Potrzebne jest rzutowanie, bo kompilator widzi, że my_array jest typu (const int[])
    // Jeśli zrobię jawne rzutowanie, to nie będzie warningów !
    int * const my_ptr = (int *)my_array;

    for (int i = 0; i < MY_SIZE; i++) {
        my_ptr[i] = i;
    }

    for (int i = 0; i < MY_SIZE; i++) {
        printf("%2d ", i);
        if ((i + 1) % 10 == 0) puts("");
    }
}
