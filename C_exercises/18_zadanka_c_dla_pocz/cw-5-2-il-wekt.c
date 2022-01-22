#include <stdio.h>

void Wektorowy(float *A, float *B, float *Wynik);

int main(int argc, char const *argv[])
{
    float wektor1[3] = {1.0, 0.0, 0.0};
    float wektor2[3] = {0.0, 1.0, 0.0};
    float   wynik[3] = {};
    Wektorowy(wektor1, wektor2, wynik);
    printf("%f ", wynik[0]);
    printf("%f ", wynik[1]);
    printf("%f ", wynik[2]);
    return 0;
}

void Wektorowy(float *A, float *B, float *Wynik)
{
    Wynik[0] = A[1]*B[2] - A[2]*B[1];
    Wynik[1] = A[0]*B[2] - A[2]*B[0];
    Wynik[2] = A[0]*B[1] - A[1]*B[0];
}