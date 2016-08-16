#include "plant.h"

Plant::Plant(const Position &position, const HP &hp, const Sun_Point price)
    : AliveActor(position, hp),
      price(price)
{
}

Plant::~Plant()
{

}

ActorType Plant::getType() const
{
    return PLANT;
}

bool Plant::canReplant(const Plant &plant) const
{
    if (plant.getPlantType() == EMPTYPLANT) return true;
    return false;
}


