#include "aliveactor.h"

AliveActor::AliveActor(const Position &position, const Health_Points &hp)
    : Actor(position),
      hp(hp)
{
}

