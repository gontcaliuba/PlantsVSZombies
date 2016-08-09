#include "stone.h"
#include "ground.h"


Stone::Stone(const LogicPosition &position)
    : Ground(position)
{
}


Stone::~Stone()
{
}


bool Stone::isFertility() const
{
    return false;
}

void Stone::draw() const
{

}

void Stone::sound() const
{

}

Actor *Stone::copy() const
{
    return new Stone(getPosition());
}

ActorType Stone::getType() const
{
    return GROUND;
}

Fertility Stone::getFertility() const
{
    return 0;
}

