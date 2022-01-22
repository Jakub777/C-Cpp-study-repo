#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int const rozmiar = 50;
    
    int moja_tabela_z_definicja_ze_zmienna[rozmiar];
    // Nie da sie wpisac danych "z palca", gdy rozmiar jest w zmiennej.
    // Nawet gdy uzyje slowka const przy zmiennej.
    // Takie polecenie jak w komentarzu nizej da blad kompilacji. 
    // int moja_tabela_z_definicja_ze_zmienna[rozmiar] = {
    //     1, 2, 3, 4, 5, 6, 7, 8 , 9, 10,
    //     11, 12, 13, 14, 15, 16, 17, 18, 19, 20
    // };

    int my_static_array[3];
    // curly brackets only on init line
    // code below makes compilation error
    // my_static_array = {1, 2 ,3};
    
    system("cls");
    //nadaje wartosci komorkom tabeli z wyjatkiem co piatej komorki
    puts("Nie zainicjowane wartosci tabeli przechowuja 'smieci'.");
        for (int i = 0; i < rozmiar; i++) {
            if ((i+1) % 5 != 0)
                moja_tabela_z_definicja_ze_zmienna[i] = i + 1;
        };
    //printuje znaki
        for (int i = 0; i < rozmiar; i++)
        {
            if (i%5 == 0)
                printf("\n");
            printf("%2u\t", moja_tabela_z_definicja_ze_zmienna[i]);
        }
    puts("");puts("");puts("");
    return 0;
}
