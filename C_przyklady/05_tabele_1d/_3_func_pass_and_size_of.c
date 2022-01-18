#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 100
// from functions perspective arrays are just pointers
void fun1(int _tab_1[])
{
    printf("F1: sizeof passed_tab: %d\n", sizeof(_tab_1));
}
void fun2(int* _tab_2)
{
    printf("F2: sizeof passed_tab: %d\n", sizeof(_tab_2));
}

int main(int argc, char const *argv[])
{
    // system("cls");
    int my_tab_of_ints[ARR_SIZE];
    size_t my_tab_size = sizeof(my_tab_of_ints);
    // ARR_SIZE jest lokalna wartoscią widzianą tylko w bloku {}, w którym jest użyta !!!
    printf("Ma: sizeof my_tab_of_ints: %d\n", my_tab_size);
    // line below is compilation error
    // fun1(my_tab_of_ints[]);
    fun1(my_tab_of_ints);
    fun2(my_tab_of_ints);
    // best way to pass size to func is
    char elements = sizeof(my_tab_of_ints) / sizeof(my_tab_of_ints[0]);
    my_tab_size = elements * sizeof(int);
    printf("Ma: elements in my_tab: %d\n", elements);
    printf("Ma: sizeof my_tab_of_ints: %d\n", my_tab_size);
    return 0;
}
