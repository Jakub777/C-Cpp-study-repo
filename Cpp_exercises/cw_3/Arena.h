#ifndef __ARENA_H_
#define __ARENA_H_
#include "Player.h"

class Arena
{
public:
    Player first;
    Player second;
    Arena(string name_first, string name_second);
};
#endif
