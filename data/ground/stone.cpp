#include "stone.h"
#include "ground.h"


Stone::Stone(const Position &position)
    : Ground(position)
{
}

Stone::~Stone()
{
}

void Stone::draw() const
{
}

Actor *Stone::copy() const
{
    return new Stone(getPosition());
}

Fertility Stone::getFertility() const
{
    return 0;
}

Plant_Power Stone::plantsPower() const
{
    return 1;
}

