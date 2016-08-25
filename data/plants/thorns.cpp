#include "thorns.h"

Thorns::Thorns(const Position &position)
    : Plant(position, HP(40), 100)
{
}

Thorns::~Thorns()
{

}

void Thorns::draw() const
{

}

Actor *Thorns::copy() const
{
    return new Thorns(getPosition());
}

void Thorns::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Thorns::Reloading() const
{

}

PlantType Thorns::getPlantType() const
{
    return THORNS;
}

