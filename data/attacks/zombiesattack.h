#ifndef ZOMBIESATTACK_H
#define ZOMBIESATTACK_H

#include "data/attacks/attack.h"

class ZombiesAttack : public Attack
{
    AliveActor *attacked;

public:
    ZombiesAttack(const Position &position, Actor *attacked);
    virtual ~ZombiesAttack();

    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;

    virtual getDamage() const;
    virtual void attack();
    virtual void move();
};

#endif // ZOMBIESATTACK_H
