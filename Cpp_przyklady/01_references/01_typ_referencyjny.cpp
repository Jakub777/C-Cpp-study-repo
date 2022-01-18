#include <stdlib.h>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int variable = 20;
    // When defining a reference you dont use an '&'.
    int& variable_ref = variable;
    int* variable_ptr = &variable;
    // Declaring reference is an error. Reference need to take some adress which is not readressable.
        // int& other_ref_variable;
    cout << " variable     : " <<  variable << endl;
    cout << "&variable     : " << &variable << endl;
    
    cout << " variable_ref : " <<  variable_ref << endl;
    // variable_ref has same adress as variable
    // references may not have their own adresses (although they can) so dont try to use them !!!
    cout << "&variable_ref : " << &variable_ref << endl;

    cout << "*variable_ptr : " << *variable_ptr << endl;
    cout << " variable_ptr : " <<  variable_ptr << endl;
    cout << "&variable_ptr : " << &variable_ptr << endl;
    return 0;
}
