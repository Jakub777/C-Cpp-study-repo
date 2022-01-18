# include <stdio.h>

int CzyParzysta(int Liczba){
    if (Liczba % 2 == 0)
        return 1;
    return 0;
    
}

int main()
{
    printf("%d", CzyParzysta(22));
    return 0;
}
