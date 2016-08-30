#ifndef ZOMBIESATTACK_H
#define ZOMBIESATTACK_H

#include "data/attacks/attack.h"

class ZombiesAttack : public Attack
{
public:
    ZombiesAttack(const Position &position, const QList<Actor *> &attacked);
    virtual ~ZombiesAttack();

    virtual void attack();
    virtual void move();
};

#endif // ZOMBIESATTACK_H
