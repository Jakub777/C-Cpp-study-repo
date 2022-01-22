#include "bits/stdc++.h"
using namespace std;
class A {
    int a;
public:
    int* ptr;
    A(){ cout << "Constructor was Called!" << endl; }
    ~A(){cout << "Destructor was Called!" << endl;  }
};
int main()
{
    // New in C++ is not same as new in Java!
    // In C++ (new A) returns (A*), so (new A) returns (pointer to A).
    A* a = new A;
    cout << "Object of class A was "
         << "created using new operator!"
         << endl;
    delete (a);
    cout << "Object of class A was "
         << "deleted using delete keyword!"
         << endl;
 
    cout << endl;
 
    A* b = (A*)malloc(sizeof(A));
    cout << "Object of class A was "
         << "created using malloc()!"
         << endl;
    free(b);
    cout << "Object of class A was "
         << "deleted using free()!"
         << endl;
    return 0;
}
//  new                                     || malloc()
//  
//  Calls constructor                       || Does not calls constructors              
//  It is an operator                       || It is a function
//  Returns exact data type                 || Returns void *
//  On failure, Throws bad_alloc exception  || On failure, returns NULL
//  Size is calculated by compiler	        || Size is calculated manually

// new & delete are faster then malloc() & free()?