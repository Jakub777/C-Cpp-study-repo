#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>

int main(int argc, char const *argv[])
{
    unsigned int i = -1;
    unsigned char mask = 0b10101010;
    unsigned char *wsk = (char*)&i;
    system("cls");
    print_bits(sizeof(i), &i);
    
    //za pomoca wskaznika jestem w stanie dobrac sie do bajtu
    *(wsk+1) &= mask;
    print_bits(sizeof(i), &i);

    //bez wskaznika maska wyzerowala inne bajty
    i &= (mask << 8);
    print_bits(sizeof(i), &i);

    return 0;
}
