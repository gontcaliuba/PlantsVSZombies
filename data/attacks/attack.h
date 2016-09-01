#ifndef ATTACK_H
#define ATTACK_H

#include <QList>
#include "data/aliveactor.h"
#include "data/actor.h"
#include "data/defines.h"

class Attack : public Actor
{
protected:
    QList<AliveActor *> attacked;
    Damage damage;
    Status isActive;

public:
    Attack(const Position &position, Damage damage, const QList<Actor *> &attacked);
    virtual ~Attack();

    virtual ActorType getType() const;
    virtual bool needToDestroy() const;

    virtual void attack() = 0;
    virtual void move() = 0;
};

#endif // ATTACK_H
