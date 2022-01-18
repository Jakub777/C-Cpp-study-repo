#include <iostream>
#include "Arena.h"

using namespace std;

int main()
{
    Arena moja_arena("Carl", "Paul");
    cout << moja_arena.first.name << " and " << moja_arena.second.name << " fight" << endl;
    cin.get();
    return 0;
}
