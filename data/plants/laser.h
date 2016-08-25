#ifndef LASER_H
#define LASER_H

#include "data/plants/plant.h"

class Laser : public Plant
{
public:
    Laser(const Position &position);
    virtual ~Laser();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual void generateAttack(Actor &attacked) const;
    virtual void Reloading() const;
    virtual PlantType getPlantType() const;
};

#endif // LASER_H
