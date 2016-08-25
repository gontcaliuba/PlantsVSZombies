#include "sunflower.h"

Sunflower::Sunflower(const Position &position)
    : Plant(position, HP(40), 50)
{
}

Sunflower::~Sunflower()
{

}

void Sunflower::draw() const
{

}

Actor *Sunflower::copy() const
{
    return new Sunflower(getPosition());
}

void Sunflower::generateSuns()
{
}

void Sunflower::Reloading() const
{

}

PlantType Sunflower::getPlantType() const
{
    return SUNFLOWER;
}


