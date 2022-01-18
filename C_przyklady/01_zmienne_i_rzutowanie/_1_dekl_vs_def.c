#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    extern int declared_var;  // DEKLARACJA - nie alokuje pamieci (a jest w definiowane w innym pliku)

    int defined_var;          // DEFINICJA - alokuje pamiec dla b (4 bajty bo int)

    int initialized_var = 5;  // INICJALIZACJA

    // extern char declared_var;  REDEKLARACJA
    // char defined_var;          REDEFINICJA
    // char initialized_var = 10; REINICJALIZACJA są zabronione!!!

    int  x = 5;
    // przykłady redefinicji
    // int  x = 4; 
    // char x ='a';
    // int* x = &a;  

    // nadpisywanie wartości jest jak najbardziej ok
    x = 4; x = 3; x = 2; x = 1;

    int _dupa = 0;
    // nazwy zmien. moga sie zaczynac od liter, a znak '_' jest traktowany jak litera
    // przykladowa dziwna nazwa jest to:
    int _ = 20000;
    
    // Nazwy nie moga sie zaczynac od cyfr, wiec te nazwy są zabronione:
    // int  5 = 15; 
    // char 2ga_litera = 'b';
    // int  99_ = 99;
    int _123 = 123;

    printf("koniec\n");
    return 0;
}
