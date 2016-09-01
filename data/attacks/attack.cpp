#include "attack.h"

Attack::Attack(const Position &position)
    : Actor(position)
{
    this->isActive = true;
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


