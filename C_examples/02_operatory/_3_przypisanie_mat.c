#include <stdio.h>
#include <stdlib.h>

void plus      (float x, float y) {printf("%.1f\n", x += y);};
void minus     (float x, float y) {printf("%.1f\n", x -= y);};
void razy      (float x, float y) {printf("%.1f\n", x *= y);};
void podzielic (float x, float y) {printf("%.1f\n", x /= y);};
//mod tylko do intow
void mod(int x, int y) {printf("%d\n",           x %= y);};

int main(int argc, char const *argv[])
{
    system("cls");
    float a = 100;
    float b = 33;
    printf("liczba A: %f, liczba B: %f\n", a, b);
    printf("wynik A += B : "); plus(a, b);
    printf("wynik A -= B : "); minus(a, b);
    printf("wynik A *= B : "); razy(a, b);
    printf("wynik A /= B : "); podzielic(a, b);
    //nie da sie operacji mod przeprowadzic na typie float
    //operacje typu mod tylko na typu calkowitego
    int ai = 100; 
    printf("\nliczba A: %d, liczba B: %f\n", ai, b);
    printf("wynik Ai %= B : "), mod(ai, b);

    printf("\nkoniec\n\n");
    return 0;
}
