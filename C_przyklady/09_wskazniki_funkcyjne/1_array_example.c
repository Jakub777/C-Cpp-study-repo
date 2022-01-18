#include <stdio.h>
#include <stdlib.h>
void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}
  
int main()
{
    // fun_ptr_arr to tablica, wskaznikow, na funckje, o p_in(int, int), o p_out(void)
    // fun_ptr = add;
    // fun_ptr_arr[] = {add, ...}
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;
    system("cls");
    printf("Num1: %d, Num2: %d\n", a, b);
    printf("Enter Choice:\n 0 for add,\n 1 for subtract,\n 2 for multiply.\n");
    scanf("%d", &ch);
  
    if (ch > 2) return 0;
  
    (*fun_ptr_arr[ch])(a, b);
  
    return 0;
}