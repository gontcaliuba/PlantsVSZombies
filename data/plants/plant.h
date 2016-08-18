#ifndef PLANT_H
#define PLANT_H

#include "data/aliveactor.h"
#include "data/coord/position.h"

enum PlantType
{
    BOXER,
    CABBAGE,
    EMPTYPLANT,
    LASER,
    SUNFLOWER,
    THORNS
};

class Plant : public AliveActor
{
    Sun_Point price;

public:
    Plant(const Position &position, const HP &hp, const Sun_Point &price);
    virtual ~Plant();

    virtual ActorType getType() const;
    virtual void sound() const;

    Sun_Point getPlantPrice() const;
    virtual PlantType getPlantType() const = 0;
    virtual bool canReplant(const Plant &plant) const;
};

#endif // PLANT_H
