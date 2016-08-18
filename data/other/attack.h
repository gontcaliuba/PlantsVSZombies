#ifndef ATTACK_H
#define ATTACK_H

#include "data/actor.h"
#include "data/defines.h"

class Attack : public Actor
{
    Status isActive;

public:
    Attack(const Position &position);
    virtual ~Attack();

    virtual ActorType getType() const;
    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;
    virtual bool needToDestroy() const;

    virtual void attack(Actor &actor) const;
    virtual bool canAttack(Actor &actor) const;
    virtual void move();
};

#endif // ATTACK_H
