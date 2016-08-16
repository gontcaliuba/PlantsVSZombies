#ifndef ALIVEACTOR_H
#define ALIVEACTOR_H

#include "data/defines.h"
#include "data/complexity/complexity.h"
#include "data/actor.h"
#include "data/other/hp.h"

class AliveActor : public Actor
{
    HP hp;

public:
    AliveActor(const Position &position, const HP &hp);
    virtual ~AliveActor();

    virtual void takeDamage(Health_Points damagedHP);
    virtual void generateAttack(Actor &attacked);
    virtual void reloading() const = 0;
};

#endif // ALIVEACTOR_H
