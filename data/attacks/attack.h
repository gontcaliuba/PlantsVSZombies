#ifndef ATTACK_H
#define ATTACK_H

#include <QList>
#include "data/aliveactor.h"
#include "data/actor.h"
#include "data/defines.h"

class Attack : public Actor
{
    Damage damage;
    Status isActive;

protected:
    QList<AliveActor *> attacked;

public:
    Attack(const Position &position, Damage damage, const QList<Actor *> &attacked);
    virtual ~Attack();

    virtual ActorType getType() const;
    virtual bool needToDestroy() const;

    virtual void attack() = 0;
    virtual void move() = 0;
};

#endif // ATTACK_H
