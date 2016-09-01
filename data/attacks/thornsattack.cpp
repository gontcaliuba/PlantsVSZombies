#include "thornsattack.h"

ThornsAttack::ThornsAttack(const Position &position, const QList<Actor *> &attacked)
    : Attack(position)
{
    for (int i = 0; i < attacked.count(); i++)
    {
        this->attacked.append(dynamic_cast<AliveActor*> (attacked[i]));
    }
}

ThornsAttack::~ThornsAttack()
{

}

ThornsAttack::getDamage() const
{
    return 5;
}

void ThornsAttack::attack()
{
    if (attacked.isEmpty() == true) return;
    for (int i = 0; i < attacked.count(); i++)
    {
        attacked[i]->takeDamage(getDamage());
    }
    isActive = false;
}

void ThornsAttack::move()
{

}

