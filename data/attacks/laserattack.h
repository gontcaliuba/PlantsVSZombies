#ifndef LASERATTACK_H
#define LASERATTACK_H

#include "data/attacks/attack.h"

class LaserAttack : public Attack
{
public:
    LaserAttack(const Position &position, Actor &attacked);
    virtual ~LaserAttack();
};

#endif // LASERATTACK_H
