#ifndef SAND_H
#define SAND_H

#include "ground.h"

class Sand : public Ground
{
public:
    Sand(const LogicPosition &position);
    virtual ~Sand();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual Fertility getFertility() const;
    virtual Plant_Power plantsPower() const;

};

#endif // SAND_H
