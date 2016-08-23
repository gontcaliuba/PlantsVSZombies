#ifndef THORNSATTACK_H
#define THORNSATTACK_H

#include "data/attacks/attack.h"

class ThornsAttack : public Attack
{
public:
    ThornsAttack(const Position &position, Actor &attacked);
    virtual ~ThornsAttack();
};

#endif // THORNSATTACK_H
