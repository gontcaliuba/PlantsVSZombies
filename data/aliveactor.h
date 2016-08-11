#ifndef ALIVEACTOR_H
#define ALIVEACTOR_H

#include "data/defines.h"
#include "data/complexity/complexity.h"
#include "data/actor.h"

class AliveActor : public Actor
{
    Health_Points hp;
public:
    AliveActor(const Position &position, const Health_Points &hp);


};

#endif // ALIVEACTOR_H
