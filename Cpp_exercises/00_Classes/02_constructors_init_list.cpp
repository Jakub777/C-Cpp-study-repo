#include <iostream>
using namespace std;
class Car_1
{
    public:
        const string brand;
        const string model;
        const int year;
        // Init lists are faster then usual constructor!
        // Use them whenever possible!
        Car_1 (string a_brand, string a_model, int_least16_t a_year) 
            : brand(a_brand)
            , model(a_model)
            , year(a_year)
        {
            // Constructor is called, after object is creater so
            // it can't be used for initializing const vars.
            cout << "Constructor was called, const vars initialized with init list." << endl;
        }
        void introduceMyself() {
            cout << "I'm made by " << brand << ". I'm a " << model << " and I was made in " << year << "." << endl;
        }
};


int main(int argc, char const *argv[])
{
    Car_1 auto_x("BMW", "E36", 1990);
    auto_x.introduceMyself();
}
