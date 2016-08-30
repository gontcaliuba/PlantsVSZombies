#ifndef LASERATTACK_H
#define LASERATTACK_H

#include "data/attacks/attack.h"

class LaserAttack : public Attack
{
public:
    LaserAttack(const Position &position, const QList<Actor*> &attacked);
    virtual ~LaserAttack();

    virtual void attack();
    virtual void move();
};

#endif // LASERATTACK_H
