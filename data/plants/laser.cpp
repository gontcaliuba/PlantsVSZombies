#include "laser.h"

Laser::Laser(const Position &position, const HP &hp, const Sun_Point price)
    : Plant(position, hp, price)
{
}

Laser::~Laser()
{

}

void Laser::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Laser::reloading() const
{

}

PlantType Laser::getPlantType()
{
    return LASER;
}


