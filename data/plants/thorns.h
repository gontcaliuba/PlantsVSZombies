#ifndef THORNS_H
#define THORNS_H

#include "data/plants/plant.h"

class Thorns : public Plant
{
public:
    Thorns(const Position &position, const HP &hp, const Sun_Point price);
    virtual ~Thorns();

    virtual void generateAttack(Actor &attacked) const;
    virtual void reloading() const;
    virtual PlantType getPlantType();
};

#endif // THORNS_H
