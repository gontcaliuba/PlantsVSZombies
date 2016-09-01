#ifndef LASERATTACK_H
#define LASERATTACK_H

#include "data/attacks/attack.h"

class LaserAttack : public Attack
{
    QList<AliveActor *> attacked;

public:
    LaserAttack(const Position &position, const QList<Actor*> &attacked);
    virtual ~LaserAttack();

    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;

    virtual getDamage() const;
    virtual void attack();
    virtual void move();
};

#endif // LASERATTACK_H
