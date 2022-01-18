#include <stdio.h>

float Skalarny(float *A, float *B)
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += A[i]*B[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    float wektor1[3] = {1.3, 1.5, 0.0};
    float wektor2[3] = {0.0, 2.0, 1.0};
    float wynik = Skalarny(wektor1, wektor2);
    printf("%f\n", wynik);
    return 0;
}
