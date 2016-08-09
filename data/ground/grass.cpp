#include "grass.h"

Grass::Grass(const LogicPosition &position)
    : Ground(position)
{
}

Grass::~Grass()
{
}

void Grass::draw() const
{
}

Actor *Grass::copy() const
{
    return new Grass(getPosition());
}

Fertility Grass::getFertility() const
{
    return 1;
}

Plant_Power Grass::plantsPower() const
{
    return 1;
}

