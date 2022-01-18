#include <stdio.h>

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
        printf("my body part value: %d\n", body_part_mine);
    if (body_part_somebodys == 2)
        puts("someones body is ucho #1");
    if (body_part_somebodys == ucho)
        puts("someones body is ucho #2");
    printf("size of body_part_mine: %d (bytes)\n", sizeof(body_part_mine));
    puts("program is working");
    return 0;
}