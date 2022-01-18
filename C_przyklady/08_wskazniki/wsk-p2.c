#include <stdio.h>
#define tabSIZE 6

int main() { 
    int my_tab[tabSIZE] ={10, 20, 30, 40, 50, 60};


    for (int i = 0; i < tabSIZE; i++)
    {
        printf("%p -> %d\n", my_tab+i, *(my_tab+i));
    }
        //przy operatorach * i & trzeba dawac nawias ()
    printf("\n\n");
    for (int i = 0; i < tabSIZE; i++)
    {
        printf("%p -> %d\n", my_tab+i, *my_tab+i);
    }

    return 0;
}
 