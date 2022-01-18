#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>
#include <string.h>
#include <stdint.h>

typedef enum _my_enum {
    dupa,
    oko,
    ucho,
    reka
} my_enum_t;
int main(int argc, char const *argv[])
{


    my_enum_t body_part_mine;
    my_enum_t body_part_somebodys = ucho;
    if (body_part_mine == 0)
        puts("my body part is dupa");
    else
        printf("%d\n", body_part_mine);
    if (body_part_somebodys == 2)
        puts("someones body is ucho (1)");
    if (body_part_somebodys == ucho)
        puts("someones body is ucho (2)");
    puts("program is working");
    return 0;
}