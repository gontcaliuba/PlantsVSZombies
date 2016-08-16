#ifndef SUNFLOWER_H
#define SUNFLOWER_H

#include "data/plants/plant.h"
#include "data/defines.h"

class Sunflower : public Plant
{
    Second timeForSunsGeneration;
public:
    Sunflower(const Position &position, const HP &hp, const Sun_Point price);
    virtual ~Sunflower();

    void generateSuns();
    virtual void reloading() const;
    virtual PlantType getPlantType();

};

#endif // SUNFLOWER_H
