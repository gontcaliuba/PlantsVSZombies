#include "emptyplant.h"


EmptyPlant::EmptyPlant(const Position &position)
    : Plant(position, HP(0), 0)
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

bool EmptyPlant::canReplant(const Plant &plant) const
{
    if (plant.getPlantType() == EMPTYPLANT) return false;
    return true;
}

PlantType EmptyPlant::getPlantType() const
{
    return EMPTYPLANT;
}
