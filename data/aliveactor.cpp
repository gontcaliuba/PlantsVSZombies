#include "aliveactor.h"

AliveActor::AliveActor(const Position &position, const HP &hp)
    : Actor(position),
      hp(hp)
{
}

AliveActor::~AliveActor()
{
}

void AliveActor::takeDamage(Health_Points damagedHP)
{
    hp.reduceHealth(damagedHP);
}

void AliveActor::generateAttack(Actor &attacked)
{
    Q_UNUSED(attacked);
}

