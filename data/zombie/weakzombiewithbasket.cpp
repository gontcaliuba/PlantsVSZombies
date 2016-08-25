#include "weakzombiewithbasket.h"

WeakZombieWithBasket::WeakZombieWithBasket(const Complexity &complexityOfLevel, const Position &position)
    : Zombie(complexityOfLevel, position, HP(50))
{

}

WeakZombieWithBasket::~WeakZombieWithBasket()
{

}

void WeakZombieWithBasket::draw() const
{

}

void WeakZombieWithBasket::sound() const
{

}

Actor *WeakZombieWithBasket::copy() const
{
    return new WeakZombieWithBasket(getComplexity(), getPosition());
}

void WeakZombieWithBasket::generateAttack(Actor &attacked)
{

}

void WeakZombieWithBasket::Reloading() const
{

}

