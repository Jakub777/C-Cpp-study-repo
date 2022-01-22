#include <stdio.h>
#define sSize 4
int main() { 
    char *slowa[sSize] = {
        "a",
        "ss",
        "ddd",
        "ffff"
    };


    for (int i = 0; i < sSize; i++)
    {
        printf("%p %p\n", slowa+i, *(slowa+i));
    }

    for (int i = 0; i < sSize; i++)
    {
        printf("%p %s\n", slowa[i], slowa[i]);
    }


    //slowa = tabela wsk na lancuchy charow
    //*(slowa+i) = i-ty lancuch znakow

    return 0;
}
 