#ifndef THORNSATTACK_H
#define THORNSATTACK_H

#include "data/attacks/attack.h"

class ThornsAttack : public Attack
{
    QList<AliveActor *> attacked;

public:
    ThornsAttack(const Position &position, const QList<Actor*> &attacked);
    virtual ~ThornsAttack();

    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;

    virtual getDamage() const;
    virtual void attack();
    virtual void move();
};

#endif // THORNSATTACK_H
