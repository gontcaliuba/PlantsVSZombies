#ifndef BOXER_H
#define BOXER_H

#include "data/plants/plant.h"

class Boxer : public Plant
{
public:
    Boxer(const Position &position, const HP &hp, const Sun_Point price);
    virtual ~Boxer();

    virtual void generateAttack(Actor &attacked) const;
    virtual void reloading() const;
    virtual PlantType getPlantType();
};

#endif // BOXER_H
