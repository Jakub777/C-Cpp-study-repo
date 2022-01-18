#include <stdio.h>
 
int main()
{
    // error
    // arr[3] undeclared
    // int arr_1[2]; 
    // printf("%d ", arr[3]);
    // printf("%d ", arr[-2]);

    // warning
    // excess elements in array initializer
    int arr_2[2] = { 10, 20, 30, 40, 50 };
    // elementy 30, 40, 50 są odrzucone
    
    return 0;
}