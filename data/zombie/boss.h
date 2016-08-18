#ifndef BOSS_H
#define BOSS_H

#include "data/zombie/zombie.h"

class Boss : public Zombie
{
public:
    Boss(const Complexity &complexityOfLevel, const Position &position);
    virtual ~Boss();


};

#endif // BOSS_H
