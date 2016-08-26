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
public:
    Plant(const Position &position, const HP &hp);
    virtual ~Plant();

    virtual ActorType getType() const;
    virtual void sound() const;

    virtual Sun_Point getPlantPrice() const = 0;
    virtual PlantType getPlantType() const = 0;
    virtual bool canReplant(const Plant &plant) const;
};

#endif // PLANT_H
