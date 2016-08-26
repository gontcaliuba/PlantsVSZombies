#ifndef BOXER_H
#define BOXER_H

#include "data/plants/plant.h"

class Boxer : public Plant
{
public:
    Boxer(const Position &position);
    virtual ~Boxer();

    virtual void draw() const;
    virtual Actor * copy() const;

    Sun_Point getPlantPrice() const;
    virtual void generateAttack(Actor &attacked) const;
    virtual void Reloading();
    virtual PlantType getPlantType() const;
};

#endif // BOXER_H
