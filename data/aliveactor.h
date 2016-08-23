#ifndef ALIVEACTOR_H
#define ALIVEACTOR_H

#include "data/defines.h"
#include "data/complexity/complexity.h"
#include "data/actor.h"
#include "data/other/hp.h"
#include "data/attacks/attack.h"

class AliveActor : public Actor
{
    HP hp;

public:
    AliveActor(const Position &position, const HP &hp);
    virtual ~AliveActor();

    virtual bool needToDestroy() const;

    virtual HP getHP() const;
    virtual void takeDamage(Health_Points damagedHP);
    virtual void generateAttack();
    virtual void AttackReloading() const;
};

#endif // ALIVEACTOR_H
