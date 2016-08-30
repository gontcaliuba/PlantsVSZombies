#ifndef BOXERATTACK_H
#define BOXERATTACK_H

#include "data/attacks/attack.h"

class BoxerAttack : public Attack
{
public:
    BoxerAttack(const Position &position, const QList<Actor*> &attacked);
    virtual ~BoxerAttack();

    virtual void attack();
    virtual void move();
};

#endif // BOXERATTACK_H
