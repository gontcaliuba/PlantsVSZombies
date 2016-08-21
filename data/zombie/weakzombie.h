#ifndef WEAKZOMBIE_H
#define WEAKZOMBIE_H

#include "data/zombie/zombie.h"

class WeakZombie : public Zombie
{
public:
    WeakZombie(const Complexity &complexityOfLevel, const Position &position);
    virtual ~WeakZombie();

    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;

    virtual void generateAttack(Actor &attacked);
    virtual void AttackReloading() const;
};

#endif // WEAKZOMBIE_H
