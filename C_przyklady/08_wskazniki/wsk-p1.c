#include <stdio.h>


int main() { 
    int my_tab[6] ={10, 20, 30, 40, 50, 60};
    int *ptr = my_tab;

    for (int i = 0; i < 6; i++)
    {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);
        ptr++;
    }

    return 0;
}
 