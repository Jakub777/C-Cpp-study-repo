#include <iostream>
using namespace std;

void print100(int* tab){
    for (int i = 0; i < 100; ++i) {
        cout << "i: " << i << ", tab[i]: " << tab[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    char size = 100;
    // 'new[]' is for dynamic allocation purposes, 
    // so there is no problem with using variable size   
    int* tab = new int[size];
    tab[42] = 123;
    // of course vales in 'new[]' array are trash
    print100(tab);
    // when you dont need the memory just get rid of it with 'delete[]'
    delete[] tab;

    // you can also declare single 'new'
    int* dynamic_int = new int;
    // and 'delete' it
    delete dynamic_int;

    return 0;
}
