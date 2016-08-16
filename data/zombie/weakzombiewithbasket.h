#ifndef WEAKZOMBIEWITHBASKET_H
#define WEAKZOMBIEWITHBASKET_H

#include "data/zombie/zombie.h"

class WeakZombieWithBasket : public Zombie
{
public:
    WeakZombieWithBasket(const Complexity &complexityOfLevel, const Position &position);
};

#endif // WEAKZOMBIEWITHBASKET_H
