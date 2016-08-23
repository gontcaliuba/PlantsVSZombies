#ifndef ZOMBIESATTACK_H
#define ZOMBIESATTACK_H

#include "data/attacks/attack.h"

class ZombiesAttack : public Attack
{
public:
    ZombiesAttack(const Position &position, Actor &attacked);
    virtual ~ZombiesAttack();
};

#endif // ZOMBIESATTACK_H
