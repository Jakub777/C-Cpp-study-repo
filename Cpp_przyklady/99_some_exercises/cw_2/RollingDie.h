#ifndef __ROLLINGDIE_H__
#define __ROLLINGDIE_H__

class RollingDie
{
public:
    RollingDie(int _sides_count = 10);
    ~RollingDie();
    int sides_count;
};

#endif