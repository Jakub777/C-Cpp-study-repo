#include <stdio.h>

static void SH_print_sii_twice(void) {
    puts("Sii Sii");
}
void L_print_sii_triple(void) {
    puts("Sii Sii Sii");
}
static void SH_print_sii_2_3(void) {
    SH_print_sii_twice();
    L_print_sii_triple;
}
