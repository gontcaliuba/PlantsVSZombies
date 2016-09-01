#include "laserattack.h"

LaserAttack::LaserAttack(const Position &position, const QList<Actor *> &attacked)
    : Attack(position)
{
    for (int i = 0; i < attacked.count(); i++)
    {
        this->attacked.append(dynamic_cast<AliveActor*> (attacked[i]));
    }
}

LaserAttack::~LaserAttack()
{

}

LaserAttack::getDamage() const
{
    return 15;
}

void LaserAttack::attack()
{
    if (attacked.isEmpty() == true) return;
    for (int i = 0; i < attacked.count(); i++)
    {
        attacked[i]->takeDamage(getDamage());
    }
    isActive = false;
}

void LaserAttack::move()
{

}

