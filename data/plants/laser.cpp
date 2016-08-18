#include "laser.h"

Laser::Laser(const Position &position)
    : Plant(position, HP(40), 200)
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

void Laser::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Laser::AttackReloading() const
{

}

PlantType Laser::getPlantType() const
{
    return LASER;
}


