#include "plant.h"

Plant::Plant(const Position &position, const HP &hp)
    : AliveActor(position, hp)
{
}

Plant::~Plant()
{

}

ActorType Plant::getType() const
{
    return PLANT;
}

void Plant::sound() const
{

}

bool Plant::canReplant(const Plant &plant) const
{
    if (plant.getPlantType() == EMPTYPLANT) return true;
    return false;
}


