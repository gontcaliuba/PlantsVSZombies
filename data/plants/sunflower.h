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

    Sun_Point getPlantPrice() const;
    void generateSuns();
    virtual void generateAttack(QList<Actor*> &attacked) const;
    virtual void Reloading();
    virtual PlantType getPlantType() const;

};

#endif // SUNFLOWER_H
