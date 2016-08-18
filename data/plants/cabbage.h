#ifndef CABBAGE_H
#define CABBAGE_H

#include "data/plants/plant.h"

class Cabbage : public Plant
{
public:
    Cabbage(const Position &position);
    virtual ~Cabbage();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual void generateAttack(Actor &attacked) const;
    virtual void AttackReloading() const;
    virtual PlantType getPlantType() const;
};

#endif // CABBAGE_H
