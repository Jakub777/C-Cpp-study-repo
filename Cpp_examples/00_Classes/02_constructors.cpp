#include <iostream>
using namespace std;
class Vehicle
{
    public:
        string brand;
        string model;
        int year;

        void introduceMyself() {
        cout << "I'm made by " << brand << ". I'm a " << model << " and I was made in " << year << "." << endl;
        }
};
class Car_1
    : public Vehicle
{
    public:
    Car_1 (string a_brand, string a_model, int_least16_t a_year) 
    {
        brand = a_brand;
        model = a_model;
        year = a_year;
    }
};
class Car_2
    : public Vehicle
{
    public:
    Car_2 (string a_brand = "Ford", string a_model = "Mustang", int_least16_t a_year = 1980) 
    {
        brand = a_brand;
        model = a_model;
        year = a_year;
    }
};

int main(int argc, char const *argv[])
{
    Car_1 auto_x("BMW", "E36", 1990);
    // Car_1 auto_y; 
    // (E) Car_1 has no default constructor!
    Car_2 auto_z;
    auto_x.introduceMyself();
    auto_z.introduceMyself();
}
