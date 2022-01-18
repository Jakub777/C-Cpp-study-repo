#include <stdio.h>
#include <stdlib.h>
//#include "my_lib.h"

float *  stworz_tablice_1d(int);
float ** stworz_tablice_2d(int);

int main(int argc, char const *argv[])
{
    system("cls");
    int rozmiar_mojej_tablicy = 10;
    float *  moja_tablica_1d;
    float ** moja_tablica_2d;
    

    moja_tablica_1d = (float *)stworz_tablice_1d(rozmiar_mojej_tablicy);
    //moja_tablica_2d = (float**)stworz_tablice_2d(rozmiar_mojej_tablicy);
    for (int i = 0; i < 10; i++) {
        printf("M: %p %f\n", moja_tablica_1d, *moja_tablica_1d);
        moja_tablica_1d += 1;
    }
    return 0;
}

float * stworz_tablice_1d(int size)
{
    float * temp_ptr;
    temp_ptr = (float *) malloc(size * sizeof(float));
    for (int i = 0; i < size; i++)
    {
        *temp_ptr = i * 3.14;
        printf("F: %p %f\n", temp_ptr, *temp_ptr);
        temp_ptr += 1;
    }
    printf("\n");
    return temp_ptr;
}

float ** stworz_tablice_2d(int size)
{
    float ** temp_ptr;
    temp_ptr = (float **) malloc(size * size * sizeof(float));
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++) 
        {
            temp_ptr[row][col] = rand();
        }
    }
    return temp_ptr;
}