#include "zombiesattack.h"

ZombiesAttack::ZombiesAttack(const Position &position, Actor *attacked)
    : Attack(position)
{
    this->attacked = dynamic_cast<AliveActor*> (attacked);
}

ZombiesAttack::~ZombiesAttack()
{

}

ZombiesAttack::getDamage() const
{
    return 10;
}

void ZombiesAttack::attack()
{
    if (attacked == 0) return;

    attacked->takeDamage(getDamage());
    isActive = false;
}

void ZombiesAttack::move()
{

}
