#ifndef EMPTYPLANT_H
#define EMPTYPLANT_H

#include "data/plants/plant.h"

class EmptyPlant : public Plant
{
public:
    EmptyPlant(const Position &position);
    virtual ~EmptyPlant();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual void generateAttack(Actor &attacked) const;
    virtual void Reloading();
    Sun_Point getPlantPrice() const;
    virtual bool canReplant(const Plant &plant) const;
    virtual PlantType getPlantType() const;
};

#endif // EMPTYPLANT_H
