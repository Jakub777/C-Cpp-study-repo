#include <stdio.h>

void swap (char *c1, char *c2)
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

int main(int argc, char const *argv[])
{
    
    char a = 'A';
    char b = '5';

    char * _a = &a;
    char * _b = &b;

    swap(_a, _b);
    printf("a wynosi %c \n", a);
    printf("b wynosi %c \n", b);


    return 0;
}
