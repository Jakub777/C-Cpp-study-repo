#include <iostream>
using namespace std;
class TopLevel // size 4
{
    public:
        int x;
        TopLevel() {cout << "TOP constructor was called" << endl;};
};
class MiddleLevel_1 : TopLevel // size 4 + 4 = 8
{
    public:
        int y;
        MiddleLevel_1() {cout << "ML1 constructor was called" << endl;};
};
class MiddleLevel_2 : TopLevel // size 4 + 4 = 8
{
    public:
        int y;
        MiddleLevel_2() {cout << "ML2 constructor was called" << endl;};
};
class BottomLevel // size 8 + 8 + 4 = 16 + 4 = 20
    : MiddleLevel_1 
    , MiddleLevel_2
{
    public:
        int z;
};
int main(int argc, char const *argv[])
{
    cout << "Hej" << endl;
    BottomLevel someObj;
    cout << "Size of someObj: " << sizeof(someObj) << endl;
    // someObj.y = 5;
    // cout << someObj.y << endl;
    return 0;
}
