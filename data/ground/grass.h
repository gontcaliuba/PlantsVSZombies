#ifndef GRASS_H
#define GRASS_H

#include "ground.h"
#include "data/coord/position.h"

class Grass : public Ground
{
public:
    Grass(const Position &position);
    virtual ~Grass();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual Fertility getFertility() const;
    virtual Plant_Power plantsPower() const;
};

#endif // GRASS_H
