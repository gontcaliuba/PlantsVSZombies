#include "laser.h"

Laser::Laser(const Position &position)
    : Plant(position, HP(40))
{
}

Laser::~Laser()
{

}

void Laser::draw() const
{

}

Actor *Laser::copy() const
{
    return new Laser(getPosition());
}

Sun_Point Laser::getPlantPrice() const
{
    return 200;
}

void Laser::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Laser::Reloading()
{

}

PlantType Laser::getPlantType() const
{
    return LASER;
}


