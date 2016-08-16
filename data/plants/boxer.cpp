#include "boxer.h"

Boxer::Boxer(const Position &position, const HP &hp, const Sun_Point price)
    : Plant(position, hp, price)
{
}

Boxer::~Boxer()
{

}

void Boxer::generateAttack(Actor &attacked) const
{
    Q_UNUSED(attacked);
}

void Boxer::reloading() const
{

}

PlantType Boxer::getPlantType()
{
    return BOXER;
}

