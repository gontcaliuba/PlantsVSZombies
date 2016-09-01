#include "emptyplant.h"


EmptyPlant::EmptyPlant(const Position &position)
    : Plant(position, HP(0))
{
}

EmptyPlant::~EmptyPlant()
{

}

void EmptyPlant::draw() const
{

}

Actor *EmptyPlant::copy() const
{
    return new EmptyPlant(getPosition());
}

void EmptyPlant::generateAttack(QList<Actor *> &attacked) const
{
    Q_UNUSED(attacked);
}

void EmptyPlant::Reloading()
{

}

Sun_Point EmptyPlant::getPlantPrice() const
{
    return 0;
}

bool EmptyPlant::canReplant(const Plant &plant) const
{
    if (plant.getPlantType() == EMPTYPLANT) return false;
    return true;
}

PlantType EmptyPlant::getPlantType() const
{
    return EMPTYPLANT;
}
