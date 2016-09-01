#include "sunflower.h"

Sunflower::Sunflower(const Position &position)
    : Plant(position, HP(40))
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

Sun_Point Sunflower::getPlantPrice() const
{
    return 50;
}

void Sunflower::generateSuns()
{
}

void Sunflower::generateAttack(QList<Actor *> &attacked) const
{
    Q_UNUSED(attacked);
}

void Sunflower::Reloading()
{

}

PlantType Sunflower::getPlantType() const
{
    return SUNFLOWER;
}


