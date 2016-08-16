#include "cabbage.h"

Cabbage::Cabbage(const Position &position, const HP &hp, const Sun_Point price)
    : Plant(position, hp, price)
{
}

Cabbage::~Cabbage()
{

}

void Cabbage::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Cabbage::reloading() const
{

}

PlantType Cabbage::getPlantType()
{
    return CABBAGE;
}

