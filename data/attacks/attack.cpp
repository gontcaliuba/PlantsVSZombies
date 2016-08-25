#include "attack.h"

Attack::Attack(const Position &position, Damage damage, int amplitude, Actor &attacked)
    : Actor(position),
      damage(damage), amplitude(amplitude), attacked(attacked), isActive(true)
{
}

Attack::~Attack()
{

}

ActorType Attack::getType() const
{
    return ATTACK;
}

bool Attack::needToDestroy() const
{
    if (isActive == false) return true;
    return false;
}

void Attack::attack()
{
    move();
}

void Attack::move()
{

}

