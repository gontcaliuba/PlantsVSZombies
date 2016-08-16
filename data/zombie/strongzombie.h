#ifndef STRONGZOMBIE_H
#define STRONGZOMBIE_H

#include "data/zombie/zombie.h"

class StrongZombie : public Zombie
{
public:
    StrongZombie(const Complexity &complexityOfLevel, const Position &position);
    virtual ~StrongZombie();
};

#endif // STRONGZOMBIE_H
