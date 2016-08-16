#include "thorns.h"

Thorns::Thorns(const Position &position, const HP &hp, const Sun_Point price)
    : Plant(position, hp, price)
{
}

Thorns::~Thorns()
{

}

void Thorns::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Thorns::reloading() const
{

}

PlantType Thorns::getPlantType()
{
    return THORNS;
}

