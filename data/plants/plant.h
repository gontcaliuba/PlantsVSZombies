#ifndef PLANT_H
#define PLANT_H

#include "data/aliveactor.h"
#include "data/coord/position.h"

class Plant : public AliveActor
{
    Sun_Point price;
public:
    Plant(const Position &position, const Health_Points &hp, const Sun_Point price);
    virtual ~Plant();

    virtual bool canPlant(const Plant &plant) const = 0;
    virtual ActorType getType() const;
    virtual void generateAttack(Actor &attacked) const = 0;


};

#endif // PLANT_H
