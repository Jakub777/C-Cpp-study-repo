#include <iostream>
#include <cstdio>
#include "board.h"
using namespace std;

Board :: Board(int x, int y, char s) {
    this -> size_x = x;
    this -> size_y = y;
    this -> sym = s;
    cout << endl << "hej" << endl;
};
Board :: ~Board() {
    cout << endl << "destruktor";
};
void Board :: say_hello_asd() {
    cout << endl << "size_x: " << size_x;
    cout << endl << "size_y: " << size_y;
    cout << endl << "symbol: " << sym;
};
void Board :: init_array() {
    char* tmp = (char*) malloc (sizeof(char) * size_x * size_y);
    this -> brd = tmp;
    for (int i = 0; i < size_y; i++) {
        for (int j = 0; j < size_x; j++) {
            brd[j] = sym;
            cout << brd[j];
        }
        cout << endl;
    }
    brd += size_x;
    brd = tmp;
};
void Board :: print_array() {
    char* tmp = brd;
    for (int i = 0; i < size_y; i++) {
        for (int j = 0; j < size_x; j++) {
            cout << brd[j];
        }
        cout << endl;
    }
    brd += size_x;
    brd = tmp;
}
void Board :: update_symbol(char new_sym)
{
    this -> sym = new_sym;
}