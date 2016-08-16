#include "sunflower.h"

Sunflower::Sunflower(const Position &position, const HP &hp, const Sun_Point price)
    : Plant(position, hp, price)
{
}

Sunflower::~Sunflower()
{

}

void Sunflower::generateSuns()
{

}

void Sunflower::reloading() const
{

}

PlantType Sunflower::getPlantType()
{
    return SUNFLOWER;
}


