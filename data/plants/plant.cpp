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


