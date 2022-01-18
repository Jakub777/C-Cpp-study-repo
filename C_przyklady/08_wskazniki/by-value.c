#include <stdio.h>
void zwieksz_arg_o_100 (int arg1)
{
    printf("W czasie F1, arg1 to %d\n", arg1);
    arg1 += 100;
    printf("W czasie F2, arg1 to %d\n", arg1);
}

void zwieksz_arg_o_100_by_pointer (int* arg1)
{
    printf("W czasie F1, arg1 to %d\n", *arg1);
    *arg1 += 100;
    printf("W czasie F2, arg1 to %d\n", *arg1);
}

int main(void)
{
    int x = 666;

    // domyslnym trybem przekazywania wartosci do funkcji jest
    // tworzenie kopii argumentow
    zwieksz_arg_o_100(x);
    printf("W czasie M1, arg1 to %d\n\n", x);
    // jesli chce aby funkcja wyplynela na argumenty, trzeba do niej przekazac
    // orginaly tj. uzyc adresow 
    zwieksz_arg_o_100_by_pointer(&x);
    printf("W czasie M2, arg1 to %d\n\n", x); 
    // adresy sa rozwniez przechowywane przez specjalne zmienne zwane wskaznikami
    int* _x = &x;
    // wskaznik na integer o nazwie _x
    // wez adres x (&x)
    zwieksz_arg_o_100_by_pointer(_x);
    printf("W czasie M2, arg1 to %d\n\n", x); 


     
    return 0;
}

