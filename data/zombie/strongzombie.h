#ifndef STRONGZOMBIE_H
#define STRONGZOMBIE_H

#include "data/zombie/zombie.h"

class StrongZombie : public Zombie
{
public:
    StrongZombie(const Complexity &complexityOfLevel, const Position &position);
    virtual ~StrongZombie();

    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;

    virtual void generateAttack(Actor &attacked) const;
    virtual void Reloading();
};

#endif // STRONGZOMBIE_H
