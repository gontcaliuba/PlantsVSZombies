#ifndef CABBAGE_H
#define CABBAGE_H

#include "data/plants/plant.h"

class Cabbage : public Plant
{
public:
    Cabbage(const Position &position, const HP &hp, const Sun_Point price);
    virtual ~Cabbage();

    virtual void generateAttack(Actor &attacked) const;
    virtual void reloading() const;
    virtual PlantType getPlantType();
};

#endif // CABBAGE_H
