#ifndef THORNS_H
#define THORNS_H

#include "data/plants/plant.h"

class Thorns : public Plant
{
public:
    Thorns(const Position &position);
    virtual ~Thorns();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual void generateAttack(Actor &attacked) const;
    virtual void Reloading() const;
    virtual PlantType getPlantType() const;
};

#endif // THORNS_H
