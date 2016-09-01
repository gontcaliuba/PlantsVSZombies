#include "zombiesattack.h"

ZombiesAttack::ZombiesAttack(const Position &position, Actor *attacked)
    : Attack(position)
{
    this->attacked = dynamic_cast<AliveActor*> (attacked);
}

ZombiesAttack::~ZombiesAttack()
{

}

void ZombiesAttack::draw() const
{

}

void ZombiesAttack::sound() const
{

}

Actor *ZombiesAttack::copy() const
{
    return new ZombiesAttack(getPosition(), attacked);
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
