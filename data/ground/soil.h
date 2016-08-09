#ifndef SOIL_H
#define SOIL_H

#include "ground.h"

class Soil : public Ground
{
public:
    Soil(const LogicPosition &position);
    virtual ~Soil();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual Fertility getFertility() const;
    virtual Plant_Power plantsPower() const;
};

#endif // SOIL_H
