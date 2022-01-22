#include <stdio.h>
#define TAB_SIZE 5
typedef struct my_weird_stuff {
    int  x[5];  // size 10*4 = 20
    char y[12]; // size 24*1 = 12, czyli razem 32 czyli 2*16
} my_weird_t;
int main(int argc, char const *argv[])
{
    // my_tab to tablica wskaznikow na my_weird_T
    my_weird_t t1 = {0};
    my_weird_t t2 = {0};
    my_weird_t t3 = {0};
    my_weird_t t4 = {0};
    my_weird_t t5 = {0};
    my_weird_t* my_tab[TAB_SIZE] = {&t1, &t2, &t3, &t4, &t5};
    system("cls");
    printf("size of my_weird_t: %d\n", sizeof(my_weird_t));
    for(int i = 0; i < TAB_SIZE; i++) 
    {   
        printf("%0X | %0X \n", my_tab + i, my_tab[i] );
    }
    return 0;
}
