#ifndef BOSS_H
#define BOSS_H

#include "data/zombie/zombie.h"

class Boss : public Zombie
{
public:
    Boss(const Complexity &complexityOfLevel, const Position &position);
    virtual ~Boss();

    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;

    virtual void generateAttack(Actor &attacked);
    virtual void Reloading() const;
};

#endif // BOSS_H
