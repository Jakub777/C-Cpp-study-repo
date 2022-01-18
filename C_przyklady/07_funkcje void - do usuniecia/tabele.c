#include <stdio.h>
#include <stdlib.h>

void f_ptr_in_no_operator_print(char *tab) {
    printf("1: %p %u %u\n", tab, tab+1, sizeof(tab));}

void f_ptr_in_appersand_print(char *tab) {
    printf("2: %p %u %u\n", &tab, &tab+1, sizeof(tab));}

void f_ptr_in_asterisk_print(char *tab) {
    printf("3: %p %u %u\n", *tab, *tab+1, sizeof(tab));}

void f_tab_in_asterisk_print(char tab[10]) {
    printf("4: %p %u %u\n", *tab, *tab+1, sizeof(tab));}

int main(int argc, char const *argv[])
{
    char my_chars10[10] = {'q','w','e','r','t','a','s','d','f','g'};
    int my_ints10[10] = {1,2,3,4,5,6,7,8,9,0};
    // system("cls"); printf("\n\n");

    printf("0: %p %u %d\n", my_ints10, my_ints10, sizeof(my_ints10));

    // f_ptr_in_no_operator_print(my_ints10); f_ptr_in_no_operator_print(&my_ints10); 
    // printf("bez operatora f operuje wskaznikami\n\n");
    // f_ptr_in_appersand_print(my_ints10); f_ptr_in_appersand_print(&my_ints10);
    // printf("& w f to adres przechowujacy wskaznik\n\n");
    f_ptr_in_asterisk_print(my_ints10); f_ptr_in_asterisk_print(&my_ints10); 
    // printf("* w f to wartosci pod adresem wkazywanym przez wskaznik\n\n");
    f_tab_in_asterisk_print(my_ints10); f_tab_in_asterisk_print(&my_ints10); 
    
    // printf("4: %p\n",  my_ints10);
    // printf("4: %p\n",  my_ints10+1);
    // printf("3: %p\n", int(&my_ints10+1)); 
    // printf("4: %p\n", &my_ints10+1); printf("\n");
    // printf("5: %p\n",  my_chars10);
    // printf("5: %p\n", &my_chars10);
    // printf("5: %c\n", *my_chars10);

    return 0;
}
