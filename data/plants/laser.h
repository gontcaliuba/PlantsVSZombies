#ifndef LASER_H
#define LASER_H

#include "data/plants/plant.h"

class Laser : public Plant
{
public:
    Laser(const Position &position, const HP &hp, const Sun_Point price);
    virtual ~Laser();

    virtual void generateAttack(Actor &attacked) const;
    virtual void reloading() const;
};

#endif // LASER_H
