#include <math.h>

typedef struct _my_struct {
    int sum;
    int multi
} my_struct_t;

my_struct_t my_struct = {0};

static int return_sum(a, b){
    return (a + b);
}
static int return_multi(a, b){
    return (a * b);
}
