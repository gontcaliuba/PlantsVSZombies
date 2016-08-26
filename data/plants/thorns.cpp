#include "thorns.h"

Thorns::Thorns(const Position &position)
    : Plant(position, HP(40))
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

Sun_Point Thorns::getPlantPrice() const
{
    return 100;
}

void Thorns::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Thorns::Reloading()
{

}

PlantType Thorns::getPlantType() const
{
    return THORNS;
}

