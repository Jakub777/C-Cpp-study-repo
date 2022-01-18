#include <stdio.h>
#include <stdlib.h>

#define TAB_SIZE 11

int main(int argc, char const *argv[])
{
    system("cls");
    char  numbers_array[TAB_SIZE]; for(int i = 0; i < TAB_SIZE; i++) {numbers_array[i] = i * i; }
    char* adress_array [TAB_SIZE]; for(int i = 0; i < TAB_SIZE; i++) {adress_array[i] = numbers_array + i; }
    printf("ptr adress | ptr      | ptr value\n");
    for(int i = 0; i < TAB_SIZE; i++) 
    {   
        printf("%X   | %X | %d\n", adress_array+i, adress_array[i],*adress_array[i]);
    }
    return 0;
}
// 9B 5F F6 A0