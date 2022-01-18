#include <iostream>
#include "RollingDie.h"

using namespace std;

RollingDie::RollingDie() : RollingDie(6)
{
    cout << "Parameterless constructor called" << endl;
}

RollingDie::RollingDie(int _sides_count)
{
    cout << "Parametric constructor called" << endl;
    sides_count = _sides_count;
}

RollingDie::~RollingDie()
{
}