# include <stdio.h>

int CzyPodzielna(int Liczba, int Przez)
{
    if (Liczba % Przez == 0)
        return 1; // podzielna
    return 0; //niepodzielna
}

int main()
{   
    printf("%d", CzyPodzielna(10,3));
    return 0;
}
