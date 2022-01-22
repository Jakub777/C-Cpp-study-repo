#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x {5};
    cout << "x wynosi: " << x << endl;
    return 0;
}

int doubleValue_value(int x)
{
    int value{ x * 2 };
    return value; // A copy of value will be returned here
} // value goes out of scope here

int* doubleValue_adress(int x)
{
    int value{ x * 2 };
    return &value; // return value by address here
} // value destroyed here