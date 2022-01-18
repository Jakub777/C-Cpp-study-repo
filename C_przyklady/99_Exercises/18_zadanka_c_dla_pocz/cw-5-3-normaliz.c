#include <stdio.h>
#include <math.h>
void Normalizacja(float *A);
float Modul(float *A);

int main(int argc, char const *argv[])
{
    float wektor1[3] = {4.0, 0.0, 5.0};

    Normalizacja(wektor1);
    printf("%f ", wektor1[0]);
    printf("%f ", wektor1[1]);
    printf("%f ", wektor1[2]);
    printf("\nModul wektora znormalizowanego wynosi: %f", Modul(wektor1));
    return 0;
}

void Normalizacja(float *A)
{
    float mianownik = Modul(A);
    if (mianownik == 0) return;
    A[0] /= mianownik;
    A[1] /= mianownik;
    A[2] /= mianownik;
}

float Modul(float *A)
{
    float wynik = sqrt(A[0]*A[0] + A[1]*A[1] + A[2]*A[2]);
    return wynik;
}