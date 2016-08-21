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

void Boss::generateAttack(Actor &attacked)
{

}

void Boss::AttackReloading() const
{

}

void Boss::sound() const
{

}

void Boss::draw() const
{

}

