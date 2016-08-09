#include "soil.h"

Soil::Soil(const LogicPosition &position)
    : Ground(position)
{
}

Soil::~Soil()
{
}

void Soil::draw() const
{
}

Actor *Soil::copy() const
{
    return new Soil(getPosition());
}

Fertility Soil::getFertility() const
{
    return 2;
}

Plant_Power Soil::plantsPower() const
{
    return 2;
}

