#include "boxer.h"

Boxer::Boxer(const Position &position)
    : Plant(position, HP(40))
{
}

Boxer::~Boxer()
{

}

void Boxer::draw() const
{

}

void Boxer::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Boxer::Reloading()
{

}

PlantType Boxer::getPlantType() const
{
    return BOXER;
}

Actor *Boxer::copy() const
{
    return new Boxer(getPosition());
}

Sun_Point Boxer::getPlantPrice() const
{
    return 150;
}

