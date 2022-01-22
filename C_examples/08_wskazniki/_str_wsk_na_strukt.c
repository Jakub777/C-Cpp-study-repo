#include <stdio.h>

typedef struct _structure{
    int a;
    char b[4];  //dla tablic charow zachodzi padding
            //jesli int to najwieksza wartosc to padding do int = 4 bajty
            //jesli wskaznik (char *znaki), to pad. do sizeof(*wsk) = 8 bajt
            //padding sprawia, ze tablica charow bedzie zajmowac np.
            //char b[3] nie 3, a 4 bajty, bo padding wyrowna!!
    int c; 
} structure; //razem 4+4+4=12

int x[1000];

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 100; i++)
    {
    x[i] = i;
    }
    
    structure *wskNaStrukt;
    wskNaStrukt = (structure*)x; //!! jesli przypisuje nowy adres innego typu trzeba konwertowac !!!
    //moja alternatywa
    //wskNaStrukt = x;
    //wskNaStrukt = &x;
    //nie byloby typu struktury i bedzie warning

    printf(" %d\n", (wskNaStrukt+2)->a);

    //nizej moja dopiska drukujaca kolejne bajty
    int j = 0;
    char *wsk;

    for (int i = 0; i < 150; i++)
    {   
        wsk = (char*)(wskNaStrukt)+i;
        printf("adres %p przech. wartosc %d", wsk, *wsk);

        if (i%12 == 0) {
            printf(" < struktura[%d] wskazuje tutaj", j);
            j++;
        } printf("\n");  
    }
    
    return 0;
}
