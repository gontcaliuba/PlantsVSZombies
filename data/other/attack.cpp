#include "attack.h"

Attack::Attack(const Position &position)
    : Actor(position),
      isActive(true)
{
}

Attack::~Attack()
{

}

ActorType Attack::getType() const
{
    return ATTACK;
}

void Attack::draw() const
{

}

void Attack::sound() const
{

}

Actor *Attack::copy() const
{
    return new Attack(getPosition());
}

bool Attack::needToDestroy() const
{
    if (isActive == false) return true;
    return false;
}

void Attack::attack(Actor &actor) const
{
    Q_UNUSED(actor);
}

bool Attack::canAttack(Actor &actor) const
{
    Q_UNUSED(actor);
}

void Attack::move()
{

}

