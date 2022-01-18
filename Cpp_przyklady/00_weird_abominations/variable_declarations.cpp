#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x {5}; // is that same as x = 5; ??
    int y (5); // this is said not to be same as x = 5;

    printf("%d\n", x);
    return 0;
}
