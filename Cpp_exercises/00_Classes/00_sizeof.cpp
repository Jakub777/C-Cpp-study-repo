#include <iostream>

using namespace std;
class A 
{   
    public:
        int A_x;
        int A_y;
        void A_method1();
        void A_method2();
};
class B
    : public A 
{
    public:
        int B_x;
        int B_y;
        void B_method1();
        void B_method2();
};
class C
    : public A 
{
    public:
        int C_x;
        int C_y;
};
class D
{
    public:
        char D_x;
};

int main(int argc, char const *argv[])
{
    B objB;
    objB.A_x = 5;
    cout << objB.A_x << endl;
    cout << "Size of A: "<< sizeof(A) << "\t Only two ints" << endl;
    cout << "Size of B: "<< sizeof(B) << "\t Two ints and two inherited ints" << endl;
    cout << "Size of C: "<< sizeof(C) << "\t Same as B, but without methods" << endl;
    cout << "Size of D: "<< sizeof(D) << "\t One char inside" << endl;
}
