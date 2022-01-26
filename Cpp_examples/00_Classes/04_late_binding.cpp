#include <iostream>

class Top
{
    public: // THERE WAS NO VIRTUAL IN EARLY EXAMPLE
        virtual void fun (void) {
            std::cout << "call from Top" << std::endl;
        }
};
class Middle : public Top
{
    public:
        void fun (void) {
            std::cout << "call from Middle" << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    // T_ M_ = source of static binding (declared as top or middle)
    Top T_top, *T_ptr_top = new Top, *T_ptr_poly_mid = new Middle;
    Middle M_mid, *M_ptr_mid = new Middle;
    T_top.fun();
    T_ptr_top->fun();
    T_ptr_poly_mid->fun();
    
    M_mid.fun();
    M_ptr_mid->fun();
    return 0;
}
