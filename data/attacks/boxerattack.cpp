#include "boxerattack.h"

BoxerAttack::BoxerAttack(const Position &position, const QList<Actor *> &attacked)
    : Attack(position)
{
    for (int i = 0; i < attacked.count(); i++)
    {
        this->attacked.append(dynamic_cast<AliveActor*> (attacked[i]));
    }
}

BoxerAttack::~BoxerAttack()
{

}

void BoxerAttack::draw() const
{

}

void BoxerAttack::sound() const
{

}

Actor *BoxerAttack::copy() const
{
    //return new BoxerAttack(getComplexity(), getPosition());
}

BoxerAttack::getDamage() const
{
    return 5;
}

void BoxerAttack::attack()
{
    if (attacked.isEmpty() == true) return;
    for (int i = 0; i < attacked.count(); i++)
    {
        attacked[i]->takeDamage(getDamage());
    }
    isActive = false;
}

void BoxerAttack::move()
{

}
