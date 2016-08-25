#ifndef ATTACK_H
#define ATTACK_H

#include <QList>
#include "data/actor.h"
#include "data/aliveactor.h"
#include "data/defines.h"

class Attack : public Actor
{
    Damage damage;
    int amplitude;
    Actor &attacked;
    Status isActive;

public:
    Attack(const Position &position, Damage damage, int amplitude, Actor &attacked);
    virtual ~Attack();

    virtual ActorType getType() const;
    virtual bool needToDestroy() const;

    virtual void attack();
    virtual void move();
};

#endif // ATTACK_H
