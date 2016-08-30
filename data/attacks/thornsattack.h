#ifndef THORNSATTACK_H
#define THORNSATTACK_H

#include "data/attacks/attack.h"

class ThornsAttack : public Attack
{
public:
    ThornsAttack(const Position &position, const QList<Actor*> &attacked);
    virtual ~ThornsAttack();

    virtual void attack();
    virtual void move();
};

#endif // THORNSATTACK_H
