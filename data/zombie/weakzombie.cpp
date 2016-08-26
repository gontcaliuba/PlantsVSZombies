#include "weakzombie.h"


WeakZombie::WeakZombie(const Complexity &complexityOfLevel, const Position &position)
    : Zombie(complexityOfLevel, position, HP(30))
{
}

WeakZombie::~WeakZombie()
{

}

void WeakZombie::draw() const
{

}

void WeakZombie::sound() const
{

}

Actor *WeakZombie::copy() const
{
    return new WeakZombie(getComplexity(), getPosition());
}

void WeakZombie::generateAttack(Actor &attacked) const
{

}

void WeakZombie::Reloading()
{

}

