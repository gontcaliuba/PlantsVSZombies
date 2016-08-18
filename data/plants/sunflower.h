#ifndef SUNFLOWER_H
#define SUNFLOWER_H

#include "data/plants/plant.h"
#include "data/defines.h"

class Sunflower : public Plant
{
    Millisecond timeForSunsGeneration;

public:
    Sunflower(const Position &position);
    virtual ~Sunflower();

    virtual void draw() const;
    virtual Actor * copy() const;

    void generateSuns();
    virtual void AttackReloading() const;
    virtual PlantType getPlantType() const;

};

#endif // SUNFLOWER_H
