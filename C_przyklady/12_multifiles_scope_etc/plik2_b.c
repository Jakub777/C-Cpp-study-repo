#include "struktura.h"

void p2_increment_n2(struct _my_struct *dane)
{
    dane->n2 += 1;
}
void p2_set_n2_to_five(struct _my_struct *dane)
{
    dane->n2 = 5;
}
void p2_set_all_n_to_zeroes(moj_typ *dane)
{
    dane->n1 = 0;
    dane->n2 = 0;
    dane->n3 = 0;
}