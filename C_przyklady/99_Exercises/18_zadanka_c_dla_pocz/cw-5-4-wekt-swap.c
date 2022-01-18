#include <stdio.h>

void Wypisz(float *tab, int ndanych)
{
	for (int i = 0; i < ndanych; i++)
    {
		printf("%f ", tab[i]);
    };   
	printf("\n");
}

void Swap(float *a, float *b) {
    float temp[3];
    for (int i = 0; i < 3; i++) {
        temp[i]=a[i];}
    for (int i = 0; i < 3; i++) {
        a[i]=b[i];}
    for (int i = 0; i < 3; i++) {
        b[i]=temp[i];}
}
    
int main(int argc, char const *argv[])
{
    float wektor1[3] = {1.1, 2.2, 3.3};
    float wektor2[3] = {11., 22., 33.};
    Swap(wektor1, wektor2);
    Wypisz(wektor1, 3);
    Wypisz(wektor2, 3);

    return 0;
}
