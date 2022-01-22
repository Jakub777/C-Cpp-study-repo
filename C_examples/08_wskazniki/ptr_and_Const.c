#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int my_int = 100;
    const int * p1 = &my_int;
    int * const p2 = &my_int;
    // generuje warning bo p2 wskazuje na inny typ niz jest wynika z definicji;
    // wskaznik p2 jest stalym wskaznikiem (czytaj od prawej do lewej tj. const *)
    // oznacza, to ze wskazywany przez niego adres nie moze byc ustawiony na inny

    // p1 i p2 wskazuja na adres my_int, ktory przechowuje zmienna stalego typu
    // za pomoca wskaznika poprawnie zdefiniowanego nie da sie zmienic tej wartosci
    // jednak moze to zrobic wskaznik bez const int, a samym int

    // *p1 += 20;
    // kompilator odrzuca bo p1 wskazuje na const int
    
    *p2 += 20;

    printf("my_int: %d\n", my_int);
    printf("\n\n\n\n");
    return 0;
}
