#include <stdio.h>
#define SIZE 5

void Sortuj(float *A);
void Swap(float *a, float *b);

void Wypisz(float *tab, int ndanych)
{
	for (int i = 0; i < ndanych; i++)
    {
		printf("%f ", *(tab+i));
    };
    
	printf("\n");
};



int main(int argc, char const *argv[])
{
    float my_tab[SIZE] = {1.5, 4.5, 10.5, -4.5, 6.5};
    printf("%d\n", sizeof(my_tab));
    Wypisz(my_tab, SIZE);
    Sortuj(my_tab);
    Wypisz(my_tab, SIZE);
    return 0;
}

void Sortuj(float *element ){
    //ustawia wskaznik max na pierwszy element
    float *wsk_max = element;
    for (int i = 0; i < SIZE; i++)
    {
        //przed wykryciem zakladamy ze startujemy z maksymalnego elementu
        wsk_max = element+i;

        //szukamy maksymalnego elementu innego niz na poczatku
        for (int j = (1 + i); j < SIZE; j++)
        {
            //test
            //printf("i: %d j: %d\n", i, j);
            if (*wsk_max < element[j])
            {
                //jesli znaleziono element ustaw wskaznik maksa nan im
                wsk_max = element+j;
            };            
        };
        //po znalezieniu maksymalnego elementu ustaw go na poczatku tablicy
        Swap(wsk_max, element+i);
    }    
}

//zamienia wartosci dwoch adresow
void Swap(float *a, float *b) {
    float temp;
    temp=*a;
    *a=*b;
    *b=temp;
}