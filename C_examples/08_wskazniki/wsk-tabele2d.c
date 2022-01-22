#include <stdio.h>
#define X 3
#define Y 3

int main(int argc, char const *argv[])
{
    char matrix[X][Y] = {  //matrix jest wskaznikiem, ale na typ char(*)[3] !!!
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    int *wsk_na_matrix_w_int = (int*)matrix; //dlatego potrzebne sa konwersje
    char *wsk_na_matrix_w_char = (char*)matrix; 

    //wszystkie adresy ponizej sa identyczne, ale wskazuja na ROZNE typy, wiec maja inna arytmetyke!
    printf("%p %p %p %p\n\n", matrix, &matrix[0][0], wsk_na_matrix_w_int, wsk_na_matrix_w_char);
    //chcac przeleciec cala tabele ze pomoca jednego wskaznika, musi wskazywac na typ odpowiadajacy danym w tabeli
    for (int i = 0; i < 9; i++)
    {
        printf("%d %p\n", *wsk_na_matrix_w_char+i, wsk_na_matrix_w_char+i);
    };
    //na jaka wartosc wskazuje adres w wskazniku_w_int ?
    printf("%d %p\n", *wsk_na_matrix_w_int, wsk_na_matrix_w_int);
    printf("%d %p\n", *wsk_na_matrix_w_int, wsk_na_matrix_w_int+1);
                                                      //     3          2          1          0
    printf("%d", 0b00000011000000100000000100000000); // 0000 0011//0000 0010//0000 0001//0000 0000
    return 0;                                         // 00000011000000100000000100000000
}
