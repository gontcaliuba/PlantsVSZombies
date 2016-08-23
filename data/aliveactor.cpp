#include "aliveactor.h"

AliveActor::AliveActor(const Position &position, const HP &hp)
    : Actor(position),
      hp(hp)
{
}

AliveActor::~AliveActor()
{
}

bool AliveActor::needToDestroy() const
{
    if (hp.getHP() > 0) return false;
    return true;
}

HP AliveActor::getHP() const
{
    return hp;
}

void AliveActor::takeDamage(Health_Points damagedHP)
{
    hp.reduceHealth(damagedHP);
}

void AliveActor::generateAttack()
{
}

void AliveActor::AttackReloading() const
{

}

