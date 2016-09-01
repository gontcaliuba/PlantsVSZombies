#include "zombiesattack.h"

ZombiesAttack::ZombiesAttack(const Position &position, const QList<Actor*> &attacked)
    : Attack(position, 10, attacked)
{
}

ZombiesAttack::~ZombiesAttack()
{

}

void ZombiesAttack::attack()
{
    if (attacked.isEmpty() == true) return;
    for (int i = 0; i < attacked.count(); i++)
    {
        attacked[i]->takeDamage(damage);
    }
    isActive = false;
}

void ZombiesAttack::move()
{

}
