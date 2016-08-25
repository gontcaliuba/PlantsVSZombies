#include "cabbage.h"

Cabbage::Cabbage(const Position &position)
    : Plant(position, HP(40), 100)
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

void Cabbage::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Cabbage::Reloading() const
{

}

PlantType Cabbage::getPlantType() const
{
    return CABBAGE;
}

