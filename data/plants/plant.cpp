#include "plant.h"

Plant::Plant(const Position &position, const Health_Points &hp, const Sun_Point price)
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


