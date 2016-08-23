#ifndef BOXERATTACK_H
#define BOXERATTACK_H

#include "data/attacks/attack.h"

class BoxerAttack : public Attack
{
public:
    BoxerAttack(const Position &position, Actor &attacked);
    virtual ~BoxerAttack();
};

#endif // BOXERATTACK_H
