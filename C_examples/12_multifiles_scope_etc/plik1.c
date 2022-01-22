#include "struktura.h"
#include <stdio.h>

void p1_set_all_n_to_zeroes(struct _my_struct dane)
{
    dane.n1 = 0;
    dane.n2 = 0;
    dane.n3 = 0;
}
void p1_print_all_n(struct _my_struct dane)
{
    printf("Twoje dane:\n");
    printf("n1: %d, n2: %d, n3: %d\n", dane.n1, dane.n2, dane.n3);
}