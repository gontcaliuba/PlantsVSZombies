#ifndef CABBAGEATTACK_H
#define CABBAGEATTACK_H

#include "data/attacks/attack.h"

class CabbageAttack : public Attack
{
public:
    CabbageAttack(const Position &position, Actor &attacked);
    virtual ~CabbageAttack();
};

#endif // CABBAGEATTACK_H
