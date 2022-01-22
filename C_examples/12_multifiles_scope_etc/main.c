#include <stdio.h>
#include <my_lib.h>

#include "struktura.h"

#include "plik1.h"
#include "plik2.h"

#define DLUGOSC 5

int main(int argc, char const *argv[])
{
    struct _my_struct zbior0;
    // typedef struct _my_struct moj_typ;

    moj_typ zbior_w_tablicy[DLUGOSC]; p1_print_all_n(zbior_w_tablicy[0]);
    

    p1_set_all_n_to_zeroes(zbior_w_tablicy[0]);     p1_print_all_n(zbior_w_tablicy[0]);
    p2_increment_n2(&zbior_w_tablicy[0]);           p1_print_all_n(zbior_w_tablicy[0]);
    p2_set_n2_to_five(&zbior_w_tablicy[0]);         p1_print_all_n(zbior_w_tablicy[0]);
    p2_set_all_n_to_twoes(&zbior_w_tablicy[0]);     p1_print_all_n(zbior_w_tablicy[0]);
    
    my_exit(); return 0;
}



