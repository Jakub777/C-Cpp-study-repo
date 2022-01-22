#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>
#include <string.h>
#include <stdint.h>
typedef struct _s_1 {
    char char_a;
    int int_a;
    char char_b;
} struct_no_1_t;
#pragma pack(1)
typedef struct _s_2 {
    char char_a;
    int int_a;
    char char_b;
} struct_no_2_t;
typedef struct _s_3 {
    char char_a;
    int int_a;
    char char_b;
} struct_no_3_t;
#pragma pack()
typedef struct _s_4 {
    char char_a;
    int int_a;
    char char_b;
} struct_no_4_t;

int main(int argc, char const *argv[])
{
    struct_no_1_t struct1 = {0};
    struct_no_2_t struct2 = {0};
    size_t size_1 = sizeof(struct_no_1_t);
    size_t size_2 = sizeof(struct_no_2_t);
    size_t size_3 = sizeof(struct_no_3_t);
    size_t size_4 = sizeof(struct_no_4_t);
    printf("Sizeof comparision\n");
    printf("Struct1 = no padding\n");
    printf("Struct2 = padding\n");
    printf("1: %d | 2: %d\n", size_1, size_2);
    printf("3: %d | 4: %d\n", size_3, size_4);

    return 0;
}
