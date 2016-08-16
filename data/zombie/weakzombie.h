#ifndef WEAKZOMBIE_H
#define WEAKZOMBIE_H

#include "data/zombie/zombie.h"

class WeakZombie : public Zombie
{
public:
    WeakZombie(const Complexity &complexityOfLevel, const Position &position);
    virtual ~WeakZombie();
};

#endif // WEAKZOMBIE_H
