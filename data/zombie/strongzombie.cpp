#include "strongzombie.h"

StrongZombie::StrongZombie(const Complexity &complexityOfLevel, const Position &position)
    : Zombie(complexityOfLevel, position, HP(70))
{
}

StrongZombie::~StrongZombie()
{

}

void StrongZombie::draw() const
{

}

void StrongZombie::sound() const
{

}

Actor *StrongZombie::copy() const
{
    return new StrongZombie(getComplexity(), getPosition());
}

void StrongZombie::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void StrongZombie::Reloading()
{

}

