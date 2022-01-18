#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    printf("1. POST inkrementacja..\n\n");
    int a = 10, b = 10, c = 10;

    printf("1. gora przed / dol po\n\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
   
    a = 10 + a++;
    // prior. 2 -> a++ -> wstaw 10, i zwieksz 'a' do 11
    // prior. 5 -> suma -> wykonaj 10 + 10
    // operacja inkrementacji zadziala tylko pomiedzy priorytetami 2 i 14,
    // jesli nadpisuje ja potem operatorem przypisania (!!!)
    // (*) czy to jest machine dependent(?)
    // prior.14 -> przypisannie -> 'a' przypisz 20

    //kolejnosc nie ma znaczenia w tym kompilatorze, ale !!!
    b = b + b++;
    c = c++ + c; 
    // b = b++ + b jest "machine dependent"
    // nie wiadomo, kiedy ktora wartosc b bedzie wzieta podczas dodawania
    // 1) czy ta podczas wchodzenia do instrukcji b = operacja mat.
    // 2) czy ta podczas wykonywania sumy po inkrementacji

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    printf("\n2. reset wartosci...\n\n");
    a = 10; b = 10; c = 10;
    printf("2. PRE inkrementacja..\n\n");

    printf("2. gora przed / dol po\n\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    a = ++a; 
    b = b + ++b;
    c = ++c + c;
    
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);
    //dodawanie wykonuje sie od lewej do prawej
    //w momencie natrafienia na zmiena z ++ zachodzi post lub pre
    //tak jakby a++, ++a to inaczej wsk -> a += 1

    return 0;
}