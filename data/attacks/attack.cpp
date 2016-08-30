#include "attack.h"

Attack::Attack(const Position &position, Damage damage, const QList<Actor*> &attacked)
    : Actor(position)
{
    this->damage = damage;
    this->isActive = true;

    for (int i = 0; i < attacked.count(); i++)
    {
        this->attacked.append(dynamic_cast<AliveActor*> (attacked[i]));
    }
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


