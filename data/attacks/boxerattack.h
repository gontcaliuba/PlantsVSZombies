#ifndef BOXERATTACK_H
#define BOXERATTACK_H

#include "data/attacks/attack.h"

class BoxerAttack : public Attack
{
    QList<AliveActor *> attacked;

public:
    BoxerAttack(const Position &position, const QList<Actor*> &attacked);
    virtual ~BoxerAttack();

    virtual getDamage() const;
    virtual void attack();
    virtual void move();
};

#endif // BOXERATTACK_H
