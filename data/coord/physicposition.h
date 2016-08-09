#ifndef PHYSICPOSITION_H
#define PHYSICPOSITION_H

#include "data/defines.h"

class PhysicPosition
{
private:
    Physic_Coordinate x;
    Physic_Coordinate y;

public:
    PhysicPosition();
    PhysicPosition(Physic_Coordinate x, Physic_Coordinate y);

    void setX(Physic_Coordinate x);
    void setY(Physic_Coordinate y);
    Physic_Coordinate getX() const;
    Physic_Coordinate getY() const;
};

#endif // PHYSICPOSITION_H
