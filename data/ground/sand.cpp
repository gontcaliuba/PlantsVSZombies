#include "sand.h"

Sand::Sand(const LogicPosition &position)
    : Ground(position)
{
}

Sand::~Sand()
{
}

void Sand::draw() const
{
}

Actor *Sand::copy() const
{
    return new Sand(getPosition());
}

Fertility Sand::getFertility() const
{
    return 0.5;
}

Plant_Power Sand::plantsPower() const
{
    return 0.5;
}
