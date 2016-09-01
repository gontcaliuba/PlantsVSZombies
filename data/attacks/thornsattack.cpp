#include "thornsattack.h"

ThornsAttack::ThornsAttack(const Position &position, const QList<Actor *> &attacked)
    : Attack(position, 5, attacked)
{
}

ThornsAttack::~ThornsAttack()
{

}

void ThornsAttack::attack()
{
    if (attacked.isEmpty() == true) return;
    for (int i = 0; i < attacked.count(); i++)
    {
        attacked[i]->takeDamage(damage);
    }
    isActive = false;
}

void ThornsAttack::move()
{

}

