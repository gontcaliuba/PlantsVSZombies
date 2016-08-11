#ifndef SAND_H
#define SAND_H

#include "ground.h"
#include "data/coord/position.h"

class Sand : public Ground
{
public:
    Sand(const Position &position);
    virtual ~Sand();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual Fertility getFertility() const;
    virtual Plant_Power plantsPower() const;

};

#endif // SAND_H
