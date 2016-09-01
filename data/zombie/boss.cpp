#include "boss.h"

Boss::Boss(const Complexity &complexityOfLevel, const Position &position)
    : Zombie(complexityOfLevel, position, HP(300))
{
}

Boss::~Boss()
{

}

Actor *Boss::copy() const
{
    return new Boss(getComplexity(), getPosition());
}

void Boss::generateAttack(QList<Actor *> &attacked) const
{
    Q_UNUSED(attacked);
}

void Boss::Reloading()
{

}

void Boss::sound() const
{

}

void Boss::draw() const
{

}

