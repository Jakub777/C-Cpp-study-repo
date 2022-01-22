#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include "board.h"
using namespace std;


int main(int argc, char const *argv[])
{
    system("cls");

    Board b1(8, 8, '#');
    b1.update_symbol('$');
    b1.init_array();
    b1.print_array();

    Board b2 (6, 40, 'a');
    b1.say_hello_asd();
    b2.say_hello_asd();

    string dupa = "dupa1234";
    int x = dupa.length();
    cout << endl << "dupa len to: " << x; 
    return 0;
}
