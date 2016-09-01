#include "laserattack.h"

LaserAttack::LaserAttack(const Position &position, const QList<Actor *> &attacked)
    : Attack(position, 15, attacked)
{
}

LaserAttack::~LaserAttack()
{

}

void LaserAttack::attack()
{
    if (attacked.isEmpty() == true) return;
    for (int i = 0; i < attacked.count(); i++)
    {
        attacked[i]->takeDamage(damage);
    }
    isActive = false;
}

void LaserAttack::move()
{

}

