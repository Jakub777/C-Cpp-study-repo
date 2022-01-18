#include <my_lib.h>
// S_ = static, H_ = plik ma definicje w header, L_ = plik

// plik1 ma funkcje: H_print_my_name, L_p_m_n_twice
#include "plik1.h"

// plik2 ma funkcje: SH_print_sii,
#include "plik2.h"

// plik3 ma funkcje: SH_print_sii_twice, SH_print_sii_2_3, L_print_sii_triple
//#include "plik3.h"
#include "plik3.c"

// jesli wiecej niz dwie funkcje maja taka nazwe jak ta externie to moga pojawic sie dziwne bledy
extern void L_print_my_name_twice(void);
// funkcji statycznej nie da sie podciagnac za pomocą extern
// to nizej zwraca blad kompilatora
// extern void print_sii(void)

extern void print_sii_triple(void);

int main(int argc, char const *argv[])
{
    H_print_my_name();
    L_print_my_name_twice();

    // do print_sii() nie mam dostepu z pliku innego niz plik2.c
    // print_sii();

    SH_print_sii_2_3();
    my_exit();
    return 0;
}
