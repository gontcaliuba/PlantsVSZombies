#include "cabbage.h"

Cabbage::Cabbage(const Position &position)
    : Plant(position, HP(40))
{
}

Cabbage::~Cabbage()
{

}

void Cabbage::draw() const
{

}

Actor *Cabbage::copy() const
{
    return new Cabbage(getPosition());
}

Sun_Point Cabbage::getPlantPrice() const
{
    return 100;
}

void Cabbage::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Cabbage::Reloading()
{

}

PlantType Cabbage::getPlantType() const
{
    return CABBAGE;
}

