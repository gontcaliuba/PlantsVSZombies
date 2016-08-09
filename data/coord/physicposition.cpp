#include "physicposition.h"

PhysicPosition::PhysicPosition()
    : x(0), y(0)
{
}

PhysicPosition::PhysicPosition(Physic_Coordinate x, Physic_Coordinate y)
    : x(x), y(y)
{
}

void PhysicPosition::setX(Physic_Coordinate x)
{
    this->x = x;
}

void PhysicPosition::setY(Physic_Coordinate y)
{
    this->y = y;
}

Physic_Coordinate PhysicPosition::getX() const
{
    return x;
}

Physic_Coordinate PhysicPosition::getY() const
{
    return y;
}

