#include <iostream>
using namespace std;
class Vehicle
{
    public:
        string brand; string model; int year;
        void introduceMyself() {
        cout << "I'm made by " << brand << ". I'm a " << model << " and I was made in " << year << "." << endl << endl;
        }
};
class Car_2 : public Vehicle
{
    public:
        Car_2 (string a_brand = "Ford", string a_model = "Mustang", int_least16_t a_year = 1980) 
        {
            brand = a_brand; model = a_model; year = a_year;
        }
        Car_2 (const Car_2 &osoba) {
            year = 0;
            cout << "\tCopiny constructor was called!\n";
        }
};
void someFunctionCopy(Car_2 carObj) {
    carObj.year++;
    cout << "\tI tried to add one year! Copy was passed." << endl;
    cout << "\tCopied 'carObj'.years in local function is: " << carObj.year << endl;
}
void someFunctionRef(Car_2 &carObj) {
    carObj.year++;
    cout << "\tI tried to add one year! Ref. was passed." << endl;
}
int main(int argc, char const *argv[])
{
    cout << "'auto_x' introduce yourself after creation!" << endl;
    Car_2 auto_x;
    auto_x.introduceMyself();
    
    cout << "'auto_x' introduce yourself after copy function!" << endl;
    someFunctionCopy(auto_x);
    auto_x.introduceMyself();
    
    cout << "'auto_x' introduce yourself after ref. function!" << endl;
    someFunctionRef(auto_x);
    auto_x.introduceMyself();
    
    cout << "'auto_y' introduce yourself after creation with coping!" << endl;
    Car_2 auto_y = auto_x;
    auto_y.introduceMyself();
    cout << "Adress of auto_x: " << &auto_x << endl;
    cout << "Adress of auto_y: " << &auto_y << endl;
    if (&auto_x != &auto_y) {cout << "Adresses are not equal. However one is copy of another." << endl;}

}
