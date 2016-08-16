#include "emptyplant.h"


EmptyPlant::EmptyPlant(const Position &position)
    : Plant(position, HP(0), 0)
{
}

EmptyPlant::~EmptyPlant()
{

}

bool EmptyPlant::canReplant(const Plant &plant) const
{
    if (plant.getPlantType() == EMPTYPLANT) return false;
    return true;
}

PlantType EmptyPlant::getPlantType()
{
    return EMPTYPLANT;
}
