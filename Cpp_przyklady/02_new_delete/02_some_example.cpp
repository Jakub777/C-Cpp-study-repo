#include <iostream>

int main()
{
    int * tablica = nullptr, rozmiar = 0;
    std::cout << "Podawaj liczby, 0 konczy wczytywanie.\n";
   
    while( true )
    {
        int liczba;
        std::cin >> liczba;
       
        if( liczba == 0 )
             break;
       
        // Brakuje miejsca, utwórz większą tablicę
        int * nowa = new int[ rozmiar + 1 ];
       
        // Skopiuj dane
        for( int i = 0; i < rozmiar; ++i )
             nowa[ i ] = tablica[ i ];
       
        // Dodaj nową wartość
        nowa[ rozmiar ] = liczba;
       
        // Usuń starą tablicę
        delete[] tablica;
       
        // Zakutalizuj zmienne
        tablica = nowa;
        rozmiar++;
    }
   
    std::cout << "Te same liczby, ale odwrotnie!\n";
   
    for( int i = rozmiar - 1; i >= 0; --i )
         std::cout << tablica[ i ] << ' ';
   
    delete[] tablica;
}