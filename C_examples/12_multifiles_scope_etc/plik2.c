#include "struktura.h"
#include "plik2_a.h"

void p2_increment_n2(moj_typ *dane)
{
    dane->n2 += 1;
}
void p2_set_n2_to_five(moj_typ *dane)
{
    dane->n2 = 5;
}
void p2_set_all_n_to_twoes(moj_typ *dane)
{
    p2_a_set_all_n_to_zeroes(dane);
    dane->n1 += 2;
    dane->n2 += 2;
    dane->n3++;
    dane->n3++;
}