#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //dlugosc wpisuje kompilator
    char name2[] = "Jakub12345"; 

    // elementy tablicy sa zmiennymi, ale nazwa tablicy jest stala (const tab)
    // tab = "x" jest zabronione bo tab jest const
    // tab++ jest zabronione, bo ww.
    printf("Rozmiar zmiennej imie (wsk): %d\n", sizeof(name2));
    printf("Imie: %s\n", name2);
    printf("Dlugosc imienia: %d\n", strlen(name2));
    printf("%4p -> %c\n\n", name2, name2[0]);
    for (int i = 0; i < strlen(name2); i++) {
        printf("%4p -> %c\n", name2+i, *(name2+i));
    }
    


    printf("\nDrugi lancuch\n\n");

    //dlugosc wpisuje kompilator
    char* name1 = "JakubJakub"; 
    
    // wsk = "J000000" jest zabronione bo wsk wskazuje na pamiec statyczna
    // ale wsk++ nie jest zabronione bo wsk jest zmienna
    // modyfikacja w tej pamiecie jest nieokreslona i zalezy od kompilatora (niestosuje sie tego)
    int rozmiar = strlen(name1);
    system("cls");
    printf("Rozmiar zmiennej imie (wsk): %d, lub \n", sizeof(name1));
    printf("Imie: %s\n", name1);
    printf("Dlugosc imienia: %d\n", rozmiar);
    printf("%4p -> %c\n\n", name1, name1[0]);
    for (int i = 0; i < strlen(name1); i++) {
        printf("%4p -> %c\n", name1+i, *(name1+i));
    }

    return 0;
}
