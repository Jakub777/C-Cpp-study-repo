#include <iostream>
#include "RollingDie.h"

using namespace std;

int main()
{
    RollingDie die;

    RollingDie ten_sided(10);

    cout << die.sides_count << endl;
    cout << ten_sided.sides_count << endl;
    return 0;
}