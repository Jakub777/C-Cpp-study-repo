#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>
#define SIZE 5

int diag_sum(int* matrix)
{
    int sum = 0 ;
    for (int i = 0; i < SIZE; i++)
    {
        sum += *(matrix+i*SIZE+i);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int tab[SIZE][SIZE] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    };
    system("cls");
    printf("Suma liczb na przekatnej macierzy: %d\n\n", diag_sum((int*)tab));
    return 0;
}
