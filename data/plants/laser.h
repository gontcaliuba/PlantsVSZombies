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

    Sun_Point getPlantPrice() const;
    virtual void generateAttack(QList<Actor*> &attacked) const;
    virtual void Reloading();
    virtual PlantType getPlantType() const;
};

#endif // LASER_H
