#include "boxerattack.h"

BoxerAttack::BoxerAttack(const Position &position, const QList<Actor *> &attacked)
    : Attack(position, 5, attacked)
{
}

BoxerAttack::~BoxerAttack()
{

}

void BoxerAttack::attack()
{
    if (attacked.isEmpty() == true) return;
    for (int i = 0; i < attacked.count(); i++)
    {
        attacked[i]->takeDamage(damage);
    }
    isActive = false;
}

void BoxerAttack::move()
{

}
